#include <string>
#include <iostream>
#include <algorithm>
#include <ostream>
#include <stdexcept>
#include <cstdint>
#include "four.h"

const int ZERO_ASCII = 48;
using namespace std;
using namespace four;

int reverse (int sum) {
    int sum_update = 0;
    while (sum) {
        sum_update = sum_update*10 + sum%10;
        sum/=10;
    }     
    return sum_update;
}

int addZero (int count_zero, int sum) {
    while (count_zero){
        sum = sum * 10;
        count_zero--;
    }
    return sum;
}

int deleteZero (int sum) {
    while (sum % 10 == 0) {
        sum/=10;
    }
    return sum;
}



Four::Four() = default;

Four::Four(string parameter) {
    if (parameter[0] == '0' && parameter.size() > 1) {
        throw invalid_argument("Число не должно начинаться с нуля");
    }

    int lenght = parameter.size();
    this->Size = lenght;
    this->data = new unsigned char(lenght);
    
    for (int i = 0; i < lenght; i++) {
        if (parameter[i] >= '4') {
            throw invalid_argument("Мы работаем только с четверичными цифрами");
        }
        data[lenght-i-1] = parameter[i];
    }
}

int Four::getValue() const {
    
    int result = 0;
    int zero = 0;
    for (int i = 0; i < Size; i++) {
        result = result*10 + (data[i] - ZERO_ASCII);
        if (result == 0) {
            zero++;
        }
    }

    if (zero) {
        result = reverse(result);
    }
    
    return addZero (zero, result);
}

//оператор копирования
Four & Four::operator =(const Four &other) {
    this->Size = other.Size;
    delete[] this->data;

    this->data = new unsigned char(other.Size);
    for (int i = 0; i < other.Size; i++) {
        this->data[i] = other.data[i];
    }
    return *this;
};

//оператор сравнения
bool Four::operator ==(const Four &other){
    if (this->Size > other.Size or this->Size < other.Size) {
        return false;
    }
    for (int i = 0; i < Size; i++) {
        if (!(this->data[i] == other.data[i])) {
            return false;
        }
    }
    return true;
}

//оператор знака больше
bool Four::operator >(const Four &other){
    if (this->Size > other.Size) {
        return true;
    } else if (this->Size < other.Size) {
        return false;
    } else if (*this == other) {
        return false;
    }
    for (int i = 0; i < Size; Size--) {
        if (this->data[Size] > other.data[Size]) {
            return true;
        }
    }
    return false;
}

//оператор знака меньше
bool Four::operator <(const Four &other){
    if (this->Size > other.Size) {
        return false;
    } else if (this->Size < other.Size) {
        return true;
    } else if (*this == other) {
        return false;
    }
    for (int i = 0; i < Size; Size--) {
        if (!(this->data[Size] <= other.data[Size])) {
            return true;
        }
    }
    return false;
}

//оператор сложения
Four Four::operator +(const Four &other){
    int sum = 0;
    int remainder = 0;
    int count_zero = 0;
    int max_len = max(this->Size, other.Size);
    int min_len = min(this->Size, other.Size);
    unsigned char *max_data;

    if (this->Size > other.Size) {
        max_data = this->data;
    } else if (this->Size < other.Size) {
        max_data = other.data;
    }
    for (int i = 0; i < min_len; i++) {
        if (static_cast<int>(this->data[i] + other.data[i] - ZERO_ASCII*2 + remainder) >= 4) {
            sum = sum*10 + static_cast<int>(this->data[i] + other.data[i] - ZERO_ASCII*2) + remainder - 4;
            remainder = 1;
        } else {
            sum = sum*10 + static_cast<int>(this->data[i] + other.data[i] - ZERO_ASCII*2) + remainder;
            remainder = 0;
        }
        if (sum == 0) {
            count_zero++;
        }
    }
    if (max_len != min_len) {
        for (min_len; min_len < max_len; min_len++) {
            if ((remainder + max_data[min_len] - ZERO_ASCII) >= 4) {
                sum = sum*10 + remainder + max_data[min_len] - ZERO_ASCII - 4;
                remainder = 1;
            } else {
                sum = sum*10 + remainder + max_data[min_len] - ZERO_ASCII;
                remainder = 0;
            }
        }
    }
    if (remainder != 0) {
        sum = sum*10 + remainder;
    }
    sum = reverse(sum);
    if (count_zero) {
        sum = addZero(count_zero, sum);
    }
    
    sum = reverse(sum);
    
    Four object(to_string(sum));
    return object;
}

//оператор вычитания
Four Four::operator -(const Four &other){
    int sum = 0;
    int remainder = 0;
    int count_zero = 0;
    int max_len = this->Size;
    int min_len = other.Size;
    unsigned char *max_data = this->data;

    for (int i = 0; i < min_len; i++) {
        if (static_cast<int>(this->data[i] - other.data[i] + remainder) < 0 ) {
            remainder = remainder + 4;
            sum = sum*10 + static_cast<int>(this->data[i] - other.data[i]) + remainder;
            remainder = - 1;
        } else {
            sum = sum*10 + static_cast<int>(this->data[i] - other.data[i]) + remainder;
            remainder = 0;
        }
        if (sum == 0) {
            count_zero++;
        }
    }
    if (min_len == max_len and min_len != 1) {
        sum = deleteZero(sum);
    }
    if (max_len != min_len) {
        for (min_len; min_len < max_len; min_len++) {
            if ((remainder + max_data[min_len] - ZERO_ASCII) < 0) {
                remainder = remainder + 4;
                sum = sum*10 + remainder + max_data[min_len] - ZERO_ASCII;
                remainder = - 1;
            } else {
                sum = sum*10 + remainder + max_data[min_len] - ZERO_ASCII;
                remainder = 0;
            }
        }
    }
    if (min_len == max_len and min_len != 1) {
        sum = deleteZero(sum);
    }
    sum = reverse(sum);
    
    if (count_zero) {
        sum = addZero(count_zero, sum);
    }
    string res = to_string(sum);

    Four object(res);
    return object;
}

std::ostream &four::operator<<(ostream &stream, const Four &four) {
    stream << four.getValue();
    return stream;
}

Four::~Four() {
    delete[] data;
};

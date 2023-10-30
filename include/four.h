#include <string>
#include <iostream>
#include <algorithm>
#include <ostream>
#include <stdexcept>

using namespace std;

int reverse (int sum);

int addZero (int count_zero, int sum);

int deleteZero (int sum);

namespace four {
    class Four {
        private:
            unsigned char *data;
            int Size;
        public:

            Four ();

            Four (string str);

            //void setValue(string parameter);

            int getValue() const;

            Four & operator =(const Four &other);

            bool operator ==(const Four &other);

            bool operator >(const Four &other);

            bool operator <(const Four &other);

            Four operator +(const Four &other);

            Four operator -(const Four &other);

            ~Four();

            friend ostream &operator<<(ostream & ostream, const Four &four);
        };

    }


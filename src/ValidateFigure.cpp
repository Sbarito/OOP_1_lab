
#include "ValidateFigure.h"


template<class T>
Vector<IValidateFigure<T>> ValidateFigure<T>::_validators{*new ValidatePentagon<T>, *new ValidateRhomb<T>, *new ValidateTrapezoid<T>};

template<class T>
void ValidateFigure<T>::Validate(const std::type_info& typeInfo, Vector<Point<T>> peaks) {
    for (int index = 0; index < ValidateFigure::_validators.size(); ++index) {
        IValidateFigure<T>* figureValidator = ValidateFigure::_validators.at(index);

        if (figureValidator->isAllowedForType(typeInfo)){
            figureValidator->validateFigure(peaks);
        }
    }
}
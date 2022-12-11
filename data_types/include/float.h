#ifndef FLOAT_H
#define FLOAT_H

#include "integer.h"


class Float: public BaseType
{
public:
    Float(const double& value);
    Float(const int& value);
    Float(const Integer& value);
    virtual std::ostream& print(std::ostream& out) const;
    virtual std::string type() const;
    double get() const;

    template<class Val1Type, class Val2Type>
    friend bool operator==(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend bool operator!=(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend bool operator>(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend bool operator<(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend bool operator>=(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend bool operator<=(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend Float operator+(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend Float operator-(const Val1Type& val_1, const Val2Type& val_2);


    template<class Val1Type, class Val2Type>
    friend Float operator*(const Val1Type& val_1, const Val2Type& val_2);

    template<class Val1Type, class Val2Type>
    friend Float operator/(const Val1Type& val_1, const Val2Type& val_2);

    Float operator-() const;
    Float& operator+=(const Float& other);
    Float& operator-=(const Float& other);
    Float& operator*=(const Float& other);
    Float& operator/=(const Float& other);

    Float abs() const;
private:
    double m_value;
};


#endif // FLOAT_H

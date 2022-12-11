#ifndef INTEGER_H
#define INTEGER_H

#include "base_type.h"

class Float;


class Integer: public BaseType
{
public:
    Integer(const int& value);
    Integer(const double& value);
    Integer(const Float& value);
    virtual std::ostream& print(std::ostream& out) const;
    int get() const;
    virtual std::string type() const;

    bool operator==(const Integer& other) const;
    bool operator!=(const Integer& other) const;
    Integer operator+(const Integer& other) const;
    Integer operator-(const Integer& other) const;
    Integer operator-() const;
    Integer operator*(const Integer& other) const;
    Integer operator/(const Integer& other) const;
    Integer& operator+=(const Integer& other);
    Integer& operator-=(const Integer& other);
    Integer& operator*=(const Integer& other);
    Integer& operator/=(const Integer& other);

    Integer abs() const;
private:
    int m_value;
};


#endif // INTEGER_H

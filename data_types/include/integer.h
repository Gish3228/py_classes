#ifndef INTEGER_H
#define INTEGER_H

#include "base_type.h"


class Integer: public BaseType
{
public:
    Integer(int value);
    virtual std::ostream& print(std::ostream& out) const;
    bool operator==(const Integer& other) const;
    bool operator>(const Integer& other) const;
    bool operator<(const Integer& other) const;
    bool operator>=(const Integer& other) const;
    bool operator<=(const Integer& other) const;
    Integer operator+(const Integer& other) const;
    Integer operator-(const Integer& other) const;
    Integer operator-() const;
    Integer operator*(const Integer& other) const;
    Integer operator/(const Integer& other) const;
    Integer& operator+=(const Integer& other);
    Integer& operator-=(const Integer& other);
    Integer& operator*=(const Integer& other);
    Integer& operator/=(const Integer& other);
private:
    int m_value;
};


#endif // INTEGER_H

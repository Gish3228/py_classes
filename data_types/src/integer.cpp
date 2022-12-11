#include "float.h"


Integer::Integer(const int& value): m_value(value){}


Integer::Integer(const double& value): m_value(static_cast<int>(value)){};


Integer::Integer(const Float& value): m_value(static_cast<int>(value.get())){};


int Integer::get() const
{
    return m_value;
}


std::string Integer::type() const
{
    return "Integer";
}


bool Integer::operator==(const Integer &other) const
{
    return m_value == other.m_value;
}


bool Integer::operator!=(const Integer &other) const
{
    return !(*this == other);
}


Integer Integer::operator+(const Integer &other) const
{
    return Integer(m_value + other.m_value);
}


Integer Integer::operator-(const Integer &other) const
{
    return Integer(m_value - other.m_value);
}


Integer Integer::operator-() const
{
    return Integer(-m_value);
}


Integer Integer::operator*(const Integer &other) const
{
    return Integer(m_value * other.m_value);
}


Integer Integer::operator/(const Integer &other) const
{
    if (other == 0)
        throw std::string("Division by zero");
    return Integer(m_value / other.m_value);
}


Integer& Integer::operator+=(const Integer &other)
{
    m_value += other.m_value;
    return *this;
}


Integer& Integer::operator-=(const Integer &other)
{
    m_value -= other.m_value;
    return *this;
}


Integer& Integer::operator*=(const Integer &other)
{
    m_value *= other.m_value;
    return *this;
}


Integer Integer::abs() const
{
    return Integer(std::abs(m_value));
}


Integer& Integer::operator/=(const Integer &other)
{
    if (other == 0)
        throw std::string("Division by zero");
    m_value /= other.m_value;
    return *this;
}


std::ostream& Integer::print(std::ostream& out) const
{
    out << m_value;
    return out;
}

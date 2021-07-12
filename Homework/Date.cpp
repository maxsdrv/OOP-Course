#include "Date.h"

Date::Date(uint day, uint month, uint year) : m_day(day), m_month(month), m_year(year) {

}


std::ostream &operator<<(std::ostream &os, const Date& date) {
    os << "Day: " << date.m_day << " Month: " << date.m_month << " Year: " << date.m_year << '\n';

    return os;
}

std::tuple<uint, uint, uint> Date::Get() const {
    return std::tie(m_day, m_month, m_year);
}

uint Date::getDay() const {
    return m_day;
}

uint Date::getMonth() const {
    return m_month;
}

uint Date::getYear() const {
    return m_year;
}



#ifndef HOMEWORK_DATE_H
#define HOMEWORK_DATE_H

#include <iostream>
#include <tuple>

using uint = unsigned int;

class Date {
public:
    explicit Date(uint day = 0, uint month = 0, uint year = 0);
    friend std::ostream& operator<<(std::ostream& os, const Date& date);

    [[nodiscard]]std::tuple<uint, uint, uint> Get() const;
    [[nodiscard]]uint getDay() const;
    [[nodiscard]]uint getMonth() const;
    [[nodiscard]]uint getYear() const;
private:
    size_t m_day{};
    size_t m_month{};
    size_t m_year{};
};


#endif //HOMEWORK_DATE_H

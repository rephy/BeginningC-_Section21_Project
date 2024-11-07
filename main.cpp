#include <iostream>
#include <iomanip>

enum class Month : unsigned char {
    Jan = 1, January = Jan,
    Feb, February = Feb,
    Mar, March = Mar,
    Apr, April = Apr,
    May,
    Jun, June = Jun,
    Jul, July = Jul,
    Aug, August = Aug,
    Sep, September = Sep,
    Oct, October = Oct,
    Nov, November = Nov,
    Dec, December = Dec
};

int main() {
    Month month {Month::Feb};
    Month month2 {Month::February};
    
    std::cout << "month: " << static_cast<unsigned int>(month) << std::endl;
    std::cout << "sizeof(month): " << sizeof(month) << std::endl;
    
    std::cout << "month2: " << static_cast<unsigned int>(month2) << std::endl;
    std::cout << "sizeof(month2): " << sizeof(month2) << std::endl;
    
    std::cout << std::boolalpha;
    
    std::cout << "(month == month2): " << (month == month2) << std::endl;
}

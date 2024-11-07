#include <iostream>
#include <iomanip>

using HugeInt = unsigned long long int;

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

std::string_view month_to_string(Month month) {
    using enum Month;
    
    switch (month) {
        case Jan: return "January";
        case Feb: return "February";
        case Mar: return "March";
        case Apr: return "April";
        case May: return "May";
        case Jun: return "June";
        case Jul: return "July";
        case Aug: return "August";
        case Sep: return "September";
        case Oct: return "October";
        case Nov: return "November";
        case Dec: return "December";
    }
}

int main() {
    Month month {Month::Feb};
    Month month2 {Month::February};
    
    std::cout << "month: " << month_to_string(month) << std::endl;
    std::cout << "sizeof(month): " << sizeof(month) << std::endl;
    
    std::cout << "month2: " << month_to_string(month2) << std::endl;
    std::cout << "sizeof(month2): " << sizeof(month2) << std::endl;
    
    std::cout << std::boolalpha;
    
    std::cout << "(month == month2): " << (month == month2) << std::endl;
    
    HugeInt num {9'000'000'000'000'000'000};
    
    std::cout << "num: " << num << std::endl;
    std::cout << "sizeof(unsigned long long int): " << sizeof(unsigned long long int) << std::endl;
    std::cout << "sizeof(HugeInt): " << sizeof(HugeInt) << std::endl;
}

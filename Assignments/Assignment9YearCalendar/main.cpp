/* Assignment 9. The Year Calendar. 
 Program asks user for a year, and the first week day of the year.
 It then prints to the console the year calendar, 
 i.e. 12 months with days arranged as weeks. 
 Leap days are calculated for February.
 The calendar's accuracy depends on user input.
*/
/* Print format */
/*
    -- Month Year --
         Mon  Tue  Wed  Thu  Fri  Sat  Sun
                          1    2    3    4
                      ...
          29   30
        
    -- Month Year --
        ...
*/

#include <iostream>
#include <iomanip>

// Coding exercise 4. Return true if parameter is a leap year 
// according to the Gregorian calendar, otherwise return false.
bool is_leap_year(int year) {
	bool is_leap{false};
	// every 4th year on years divisable by 4,
	// except if the year is divisable by 100
	// (not counting years divisable by 400)
	if (year % 4 == 0) {
		is_leap = true;
		if (year % 100 == 0) {
			is_leap = false;
			if (year % 400 == 0) {
				is_leap = true;
			}
		}
	}
	return is_leap;
}

int main(){
    // calendar for a month has 4 to 6 rows, 7 columns 
    const unsigned int COLS{7};
    const unsigned int COL_WIDTH{5};
    const int MONTHS{12};
    const std::string MONTH_NAMES [MONTHS]{"January", "February", "March", "April",
        "May", "June", "July", "August", "September", "October", "November", "December"};
    const std::string DAY_NAMES [COLS]{"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    // ask for year a and its first day
    int year, weekday;
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << "Enter the first day of the year [1: Monday, ... 7: Sunday]: ";
    std::cin >> weekday;
    if (weekday < 1 || weekday > 7) {
        std::cout << weekday << " is not a valid day. Bye!";
        return 0;
    }

    // get leap year
    bool leap_year = is_leap_year(year);
    // month lengths
    int day_count [MONTHS] {31, leap_year? 29 : 28,
        31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int first_day{weekday - 1}; // month's first weekday, now 0: Monday

    std::cout << "\nCalendar for " << year << std::endl;
    
    for (int m{0}; m < MONTHS; m++) {
        std::cout << "-- " << MONTH_NAMES[m] << " " << year << " --" << std::endl;
        for(std::string name: DAY_NAMES) {
            std::cout << std::setw(COL_WIDTH) << name;
        }
        std::cout << std::endl;
        
        bool all_days_printed{false};
        unsigned int i{0}, day{1}; //row index, day to print
        while (!all_days_printed){
            for (unsigned int j{0}; j < COLS; j++) {
                if (i == 0 && j < first_day) {
                    std::cout << std::setw(COL_WIDTH) << " ";
                } else {
                    std::cout << std::setw(COL_WIDTH) << day++;
                }

                if(day > day_count[m]) {
                    all_days_printed = true; //stop outer loop
                    first_day = j + 1; // next month's first day
                    if (first_day > 6) {
                        first_day = 0;
                    }
                    break;
                }
            }
            std::cout << std::endl;
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}

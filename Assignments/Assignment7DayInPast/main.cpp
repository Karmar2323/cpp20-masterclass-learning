/* 
"You'll write a program that lets the user type in the current day [1 : Monday,...,  7 : Sunday], 
and a day difference. Your program will then go that day difference in the past and say which 
day of the week we hit.

For example if today is a 3 [Wednesday] and we want to go 10 days in the past, we would hit
a Sunday. The program should also do some basic error checking in that it wouldn't for 
example accept 8 as the current day. Only days from 1 to 7 are acceptable."
*/

#include <iostream>

void printDay(int day) {
    switch (day) {
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";            
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";            
            break;
        case 7:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "not a valid day";
            break;
    }
    std::cout << "." << std::endl;
}

void printPastDay(int now, int passed) {

    int past_day = now - passed;
    if (past_day < 1) {
        past_day = past_day % 7 + 7;
    } 

    printDay(past_day);
}

int main(){
    
    int day;
    int days_passed;

    std::cout << "Which day is today [1: Monday, ..., 7: Sunday]: " << std::endl;
    std:: cin >> day;

    if (day < 1 || day > 7) {
        std::cout << day << " is not a valid day. Bye!";
        return 0;
    }

    std::cout << "How many days have passed up to today : " << std::endl;
    std::cin >> days_passed;
    
    std::cout << "Today is ";
    printDay(day);
    std::cout << "If we went " << days_passed << " days in the past ";
    std::cout << "we would hit ";
    printPastDay(day, days_passed);

    return 0;
}
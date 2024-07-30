//#include "exercise.h";

bool is_leap_year(unsigned int year) {

	bool is_leap{};
	
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


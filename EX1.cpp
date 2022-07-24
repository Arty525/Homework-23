#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

int main() {
	int day;
	do {
		std::cin >> day;
		if (day == MONDAY) {
			std::cout << "Monday" << std::endl;
		}
		else if (day == TUESDAY) {
			std::cout << "TUESDAY" << std::endl;
		}
		else if (day == WEDNESDAY) {
			std::cout << "WEDNESDAY" << std::endl;
		}
		else if (day == THURSDAY) {
			std::cout << "THURSDAY" << std::endl;
		}
		else if (day == FRIDAY) {
			std::cout << "FRIDAY" << std::endl;
		}
		else if (day == SATURDAY) {
			std::cout << "SATURDAY" << std::endl;
		}
		else if (day == SUNDAY) {
			std::cout << "SUNDAY" << std::endl;
		}
	} while (day != 0);
	return 0;
}
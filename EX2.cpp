#include <iostream>

#define WINTER "Winter"
#define SPRING "Spring"
#define SUMMER "Summer"
#define AUTUMN "Autumn"

int main() {
#if 1
	std::cout << WINTER << std::endl;
#endif
#if 0
	std::cout << SPRING << std::endl;
#endif
#if 0
	std::cout << SUMMER << std::endl;
#endif
#if 0
	std::cout << AUTUMN << std::endl;
#endif
	return 0;
}
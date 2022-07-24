#include <iostream>
#include <vector>

#define CYCLE for(int i = 0; i < 10; ++i)

bool capacity(int p, int c = 20) {
	return p > 20;
}

int main() {
	std::vector<int> carriage;
	int passengers;
	int total = 0;
	std::cout << "Enter number of passengers." << std::endl;
	CYCLE{
		std::cout << "Carriage #" << i + 1 << ": ";
		std::cin >> passengers;
		total += passengers;
		carriage.push_back(passengers);
	}
	std::cout << "Crowded carriages: ";
	CYCLE{
		if (capacity(carriage[i])) std::cout << i + 1 << " ";
	}
	std::cout << "Fine carriages: ";
	CYCLE{
		if (!capacity(carriage[i])) std::cout << i + 1 << " ";
	}
	std::cout << std::endl;
	std::cout << "Total number of passengers: " << total << std::endl;
	return 0;
}
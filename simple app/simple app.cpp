#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

	srand(time(0));

	int randomNum[5]{};

	for (int i = 0; i < 5; i++) {
		randomNum[i] = rand() % 100 + 1;
		std::cout << randomNum[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}

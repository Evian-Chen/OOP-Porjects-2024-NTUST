#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159265358979323846

int main() {
	double r, v;
	while (std::cin >> r) {
		v = (4.0 / 3.0) * PI * r * r * r;
		std::cout << std::fixed << std::setprecision(6) << v << std::endl;
	}
	return 0;
}
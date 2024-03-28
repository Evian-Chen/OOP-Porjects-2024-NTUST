#include <iostream>
#include <iomanip>  // for output precision


int main() {
	double n, r, guess, acc = 0.01;
	while (std::cin >> n) {
		guess = n / 2;
		r = n / guess;
		double new_guess = (guess + r) / 2;
		while (guess - new_guess > 0.01) {
			//std::cout << std::setprecision(4) << new_guess << std::endl;
			guess = new_guess;
			r = n / new_guess;
			new_guess = (new_guess + r) / 2;
		}
		std::cout << std::fixed << std::setprecision(2) << new_guess << std::endl;
	}
}

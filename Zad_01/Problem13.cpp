#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	int a_ = a, b_ = b, c_ = c;

	while (a_) {
		if (a_ < b_) {
			a_ ^= b_;
			b_ ^= a_;
			a_ ^= b_;
		}
		a_ %= b_;
	}

	a_ = a * b / b_;
	a = a_;

	while (a_) {
		if (a_ < c_) {
			a_ ^= c_;
			c_ ^= a_;
			a_ ^= c_;
		}
		a_ %= c_;
	}

	a_ = a * c / c_;

	std::cout << a_ << '\n';

}

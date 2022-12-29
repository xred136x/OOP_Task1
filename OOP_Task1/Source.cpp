#include<iostream>

class Fraction {
	
public:
	int numerator;
	int denominator;
	void summa(int numerator, int denominator) {
		if (denominator == this->denominator) {
			numerator += this->numerator;
		}
		else {
			numerator = (numerator * this->denominator) + (this->numerator * denominator);
			denominator = denominator * this->denominator;
		}
		std::cout << numerator << '/' << denominator << '\n';
	}
	void difference(int numerator, int denominator) {
		if (denominator == this->denominator) {
			numerator = this->numerator - numerator;
		}
		else {
			numerator = (this->numerator * denominator) - (numerator * this->denominator);
			denominator = denominator * this->denominator;
		}
		std::cout << numerator << '/' << denominator << '\n';
	}
	void product(int numerator, int denominator) {
		numerator = numerator * this->numerator;
		denominator = denominator * this->denominator;
		std::cout << numerator << '/' << denominator << '\n';
	}
	void quotient(int numerator, int denominator) {
		int numerator1 = denominator * this->numerator;
		int denominator1 = numerator * this->denominator;
		std::cout << numerator1 << '/' << denominator1 << '\n';
	}
	
}; 
int main() {
	setlocale(LC_ALL, "russian");
	Fraction Obj;
	Obj.numerator = 2;
	Obj.denominator = 3;
	Obj.summa(1, 3);	
	Obj.difference(1, 3);	
	Obj.product(4, 7);	
	Obj.quotient(5, 7);
	
	return 0;
}
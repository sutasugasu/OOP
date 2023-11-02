// @author Glushkov Stanislav
#include "square.h"
#include "cmath"
#include <stdexcept>

/// Конструктор
Square::Square() { set_a(5); };

/// Конструктор с параметром
Square::Square(float a) {
	set_a(a);
};

/// сеттер стороны
void Square::set_a(float a) {
	if (a <= 0) throw std::invalid_argument("Invalid parameter: side a");
	this->a = a; 
};

/// геттер
float Square::get_a() const {
	return a;
};

/// метод нахождения периметра
float Square::perimeter() const{ 
	return 4*a; 
};

///  метод нахождения площади
float Square::area() const{ 
	return a*a; 
};  

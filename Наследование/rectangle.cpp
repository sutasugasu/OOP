///@author Stanislav Glushkov
#include "rectangle.h"
#include "cmath"
#include <stdexcept>

/// Конструктор
Rectangle::Rectangle() { set_a(5); set_b(4);};

/// Конструктор с параметром
Rectangle::Rectangle(float a, float b) {
	set_a(a);
    set_b(b);
};

/// сеттер стороны
void Rectangle::set_b(float b) {
	if (b <= 0) throw std::invalid_argument("Invalid parameter: side b");
	this->b = b; 
};

/// геттер
float Rectangle::get_b() const {
	return b;
};

/// метод нахождения периметра
float Rectangle::perimeter() const{ 
	return 2*(a+b); 
};

///  метод нахождения площади
float Rectangle::area() const{ 
	return a*b; 
};  
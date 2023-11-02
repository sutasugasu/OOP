// @author Glushkov Stanislav
#include "circle.h"
#include "cmath"
#include <stdexcept>


const float Pi = 3.1415; 

/// Конструктор
Circle::Circle() { set_r(2); };

/// Конструктор с параметром
Circle::Circle(float r) {
	set_r(r);
};

/// сеттер стороны
void Circle::set_r(float r) {
	if (r <= 0) throw std::invalid_argument("Invalid parameter: radius r");
	this->r = r; 
};

/// геттер
float Circle::get_r() const {
	return r;
};

/// метод нахождения периметра
float Circle::perimeter() const { 
	return 2* Pi * r; 
};

///  метод нахождения площади
float Circle::area() const{ 
	return Pi * r * r; 
};  

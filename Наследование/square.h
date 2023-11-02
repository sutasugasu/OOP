///@author Glushkov Stanislav
#include "figure.h"
#include <string>
#pragma once

///Класс Квадрат
class Square : public Figure{
	protected:
		float a; // сторона квадрата
	public:
		/// Конструктор 
		Square();

		/// Конструктор с параметром
		Square(float a);

		/// сеттер стороны
		void set_a(float a);

		/// геттер
		float get_a() const;

		/// метод нахождения периметра
		float perimeter() const override;

		/// метод нахождения площади
		float area() const override;

};
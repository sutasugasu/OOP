///@author Glushkov Stanislav
#include "figure.h"
#include <string>
#pragma once

///Класс Окружность
class Circle : public Figure{
	private:
		float r; // радиус окружности
	public:
		/// Конструктор 
		Circle();

		/// Конструктор с параметром
		Circle(float r);

		/// сеттер радиуса
		void set_r(float r);

		/// геттер
		float get_r() const;

		/// метод нахождения длины окружности
		float perimeter() const override;

		/// метод нахождения площади
		float area() const override;

};
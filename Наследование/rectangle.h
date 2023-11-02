///@author Glushkov Stanislav 
#pragma once
#include "square.h"



///Класс Квадрат
class Rectangle : public Square{
	private:
		float b; // вторая сторона прямоугольника
                 // первая наследуется из класса Square  
	public:
		/// Конструктор 
		Rectangle();

		/// Конструктор с параметром
		Rectangle(float a,float b);

		/// сеттер стороны
		void set_b(float b);

		/// геттер
		float get_b() const;

		/// метод нахождения периметра
		float perimeter() const override;

		/// метод нахождения площади
		float area() const override;

};
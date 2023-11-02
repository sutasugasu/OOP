///@author Glushkov Stanislav
#include <string>
#pragma once

///базовый класс
class Figure{
    public:
    ///метод нахождения периметра
    float virtual perimeter() const = 0;    //абстрактный метод 
    ///метод нахождения площади   
    float virtual area() const = 0 ;          //абстрактный метод  
};

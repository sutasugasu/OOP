///@author Glushkov Stanislav
#include <string>
#pragma once

///базовый класс
class Figure{
    public:
    ///метод нахождения периметра
    float virtual perimeter() = 0;    //абстрактный метод 
    ///метод нахождения площади   
    float virtual area() {return 0;} ;          //абстрактный метод  
};

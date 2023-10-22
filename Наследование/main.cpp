///@author Glushkov Stanislav
#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include <iostream>
#include <vector>
#include "stdlib.h"
#include <time.h>


// !!!!!!!!!!!!!!!
///прницип наследования ООП и геометрии!!!!!!!!!!!!
// !!!!!!!!!!!!!!!
using namespace std;


int main(){
    try
    {
        Square s;
        s.set_a(2);
        
        cout << "Perimetr of a square = " << s.perimeter() << endl;
        cout << "Area of a square = " <<  s.area() << endl;


        Rectangle r;
        r.set_a(3);
        r.set_b(6);
        cout << "Perimetr of a rectangle = " <<  r.perimeter() << endl;
        cout << "Area of a rectangle = " <<  r.area() << endl;

        Circle c;
        c.set_r(3);
        cout << "Perimetr of a circle = " <<  c.perimeter() << endl;
        cout << "Area of a circle = " <<  c.area() << endl;
        
        cout << endl;

        Figure* f;
        Square* sqr = new Square(10);
        Rectangle* rect = new Rectangle(2,5);
        Circle* circ = new Circle(6);

srand(time(0));

        if( rand()%3 == 0 ) 
        {f = sqr;
        cout <<"Area of a square = " << f->area();}
        else if (rand()%3 == 1 )
        {f = rect;
        cout <<"Area of a rectangle = " <<  f->area();}
        else if (rand()%3 == 2)
        {f = circ;
        cout <<"Area of a circle = " << f->area();};;
        


    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }


}

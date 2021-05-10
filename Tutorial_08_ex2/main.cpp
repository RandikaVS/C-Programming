#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
    int length,width,radius;
    cout << "Enter length of Rectangle : ";
    cin >> length;
    cout << "Enter width of Rectangle : ";
    cin >> width;
    cout << "Enter radius of Circle : ";
    cin >> radius;

    Rectangle *r1;
    r1=new Rectangle(length,width);
    Circle *c1;
    c1=new Circle(radius);
    r1->display();
    c1->display();
    delete r1;
    delete c1;
    cout<<"End of the program"<<endl;
    return 0;
}

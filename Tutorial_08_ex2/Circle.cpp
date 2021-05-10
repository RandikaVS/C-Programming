#include "Circle.h"
#include<iostream>
using namespace std;
Circle::Circle(){
radius=0;
}
Circle::Circle(int r){
radius=r;
}
Circle::~Circle(){
cout<<"Circle Destructor Called..."<<endl;
}
void Circle::display(){
cout<<"Circle Area = "<<calcArea()<<endl;
}
float Circle::calcArea(){
return 22.0/7*radius*radius;
}

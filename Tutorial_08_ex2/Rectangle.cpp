#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(){
length=0;
width=0;
}
Rectangle::Rectangle(int l,int w){
length=l;
width=w;
}
Rectangle::~Rectangle(){
cout<<"Rectangle Destructor called..."<<endl;
}
int Rectangle::calcArea(){
return length*width;
}
void Rectangle::display(){
cout<<"Rectangle Area = "<<calcArea()<<endl;}

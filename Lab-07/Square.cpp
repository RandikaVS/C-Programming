#include "Square.h"

void Square::setLength(double l){
length=l;
}
void Square::setWidth(double w){
width=w;
}
double Square::getLength(){
return length;
}
double Square::getWidth(){
return width;
}
double Square::calcArea(){
return length*width;
}

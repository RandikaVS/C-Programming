#include<iostream>
#include"Circle.h"
#include"RectangleX.h"
#include "Square.h"

using namespace std;
double r,l,w,gl,gw,sl,sw;

int main(){

    Circle c1;
    RectangleX r1;
    Square s1;
cout<<"Enter Circle Radius : ";
cin>>r;
c1.setRadius(r);
cout<<"Enter Rectangle length : ";
cin>>l;
r1.setLength(l);
cout<<"Enter Rectangle Width : ";
cin>>w;
r1.setWidth(w);
cout<<"Enter Square length : ";
cin>>sl;
s1.setLength(sl);
cout<<"Enter Square Width : ";
cin>>sw;
s1.setWidth(sw);
cout<<"Enter Garden Length : ";
cin>>gl;
cout<<"Enter Garden Width : ";
cin>>gw;
cout<<endl<<"Garden Area is : "<<gl*gw-(c1.calcArea()+r1.calcArea()+s1.calcArea());
    return 0;
}

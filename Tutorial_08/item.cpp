#include<iostream>
#include"item.h"
using namespace std;
item::item(){
    itemCode=0;
    unitPrice=0;
}
item::item(int code,float price){
    itemCode=code;
    unitPrice=price;
}
item::~item(){
    cout<<"Destructor Called..."<<endl;
}
void item::setDiscount(float punitPrice){
    discount=punitPrice;
}
float item::getDiscount(){
    return discount;
}
float item::discountedPrice(){
    return unitPrice-(unitPrice*discount/100);
}
void item::display(){
    cout<<"Item : "<<itemCode<<endl;
    cout<<"Discounted Price : "<<discountedPrice()<<endl;
}

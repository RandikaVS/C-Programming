#include<iostream>
#include"item.h"
using namespace std;

int main(){
    item myItem;
    myItem.display();

    item myItem2(100,1000);
    myItem2.setDiscount(20);
    myItem2.display();
}

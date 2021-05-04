#include<iostream>

using namespace std;

class Lab{

private:
    int labID;
    double capacity;

public:
    void setLabDetails(int ID,double cap);
    double getCapacity();
};

void Lab::setLabDetails(int ID,double cap){
    labID=ID;
    capacity=cap;
}
double Lab::getCapacity(){
    return capacity;
}


int main(){
    double cap;
    Lab l1,l2,l3;

    l1.setLabDetails(401,60.00);
    l2.setLabDetails(402,40.00);
    l3.setLabDetails(403,30.00);

cout<<"Insert Capacity : ";
cin>>cap;
if(cap<=l1.getCapacity()){
    cout<<"Lab "<<401;
}
else if(cap<=l2.getCapacity()){
    cout<<"Lab "<<402;
}
else if(cap<=l3.getCapacity()){
    cout<<"Lab "<<403;
}
}
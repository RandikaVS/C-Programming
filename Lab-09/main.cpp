#include<iostream>
#include<cstring>
using namespace std;

class item{
    private:
    int itemNo;
    char name[20];
    double price;

    public:
    item(int no,const char n[]);
    void setPrice(double p);
    double calcTotal(int qty);
    ~item();
};

item::item(int no,const char n[]){
    itemNo=no;
    strcpy_s(name,n);
}
void item::setPrice(double p){
    price=p;
}
double item::calcTotal(int qty){
    return price*qty;
}
item::~item(){
    cout<<"Deleted item "<<itemNo<<endl;
}

class salesPerson{

private:
    int empNo;
    char name[20];
    double sales;

public:
    salesPerson(int empNo,const char nme[]);
    void calcSales(item i1,item i2);
    void printSales();
    ~salesPerson();

};

salesPerson::salesPerson(int empNo,const char nme[]){
    this->empNo=empNo;
    strcpy_s(name,nme);
}
void salesPerson::calcSales(item i1,item i2){
    int qty1,qty2;
    cout<<"Enter Item 1 Quantity : ";
    cin>>qty1;
    cout<<"Enter Item 2 Quantity : ";
    cin>>qty2;
    sales=i1.calcTotal(qty1)+i2.calcTotal(qty2);
}
void salesPerson::printSales(){
    cout<<"Emp No : "<<empNo<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Sales : "<<sales<<endl;
}

salesPerson::~salesPerson(){
    cout<<"Emp No "<<empNo<<" deleted..";
}

int main(){
    salesPerson s1(001,(char*)"Sahan");
    item it1(1001,(char*)"Shampoo");
    item it2(2002,(char*)"Conditioner");
    it1.setPrice(550);
    it2.setPrice(650);

    s1.calcSales(it1,it2);
    s1.printSales();
}


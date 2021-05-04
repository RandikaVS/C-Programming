#include<cstring>
#include<iostream>

using namespace std;

class employee{
private:
    int empID;
    char empName[20];
    int otHours;
    int otRate;
public:
    void setEmployeeDetails(int eID,char eName[]);
    void displayEmployeedetails();
    void setOtHours(int otHrs);
    void setOtRate(int otRte);
    double calculateOTPayment();
};

void employee::setEmployeeDetails(int eID,char eName[]){
    empID=eID;
    strcpy(empName,eName);
}

void employee::setOtHours(int otHrs){
    otHours=otHrs;
}

void employee::setOtRate(int otRte){

otRate=otRte;
}

double employee::calculateOTPayment(){
    return otHours*otRate;
}

void employee::displayEmployeedetails(){
    cout<<"Employee ID : "<<empID<<endl;
    cout<<"Employee Name : "<<empName<<endl;
    cout<<"OT Payment : "<<calculateOTPayment()<<endl;
}

int main(){
    int r1,r2;
    employee e1,e2;
char n1[20]="Nimal",n2[20]="Sunil";

e1.setEmployeeDetails(1111,n1);
e2.setEmployeeDetails(2222,n2);

e1.setOtHours(22);
e2.setOtHours(18);

e1.setOtRate(100);
e2.setOtRate(200);

cout<<"Enter OT Rate ";
cin>>r1;
e1.setOtHours(r1);

cout<<"Enter OT Rate ";
cin>>r2;
e2.setOtRate(r2);

e1.displayEmployeedetails();
cout<<endl;
e2.displayEmployeedetails();

}

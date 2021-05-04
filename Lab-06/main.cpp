#include <iostream>
#include<cstring>


using namespace std;

class employee{
private:
    int empNo;
    char empName[20];
    double basicSal;
    double allowance;
    double salary;
    double OtHours;
    double OtRate;

public:
    void assignDetails();
    void setAllowance(double allowance);
    void calcSal();
    void printPaySlip();
    void setOtDetails(double otRte,double OtHrs);
};

void employee::assignDetails(){
    cout<<"Enter EMP No : ";
    cin>>empNo;
    cout<<"Enter EMP Name : ";
    cin>>empName;
    cout<<"Enter Basic Salary : ";
    cin>>basicSal;
}
void employee::setAllowance(double allowance){
this->allowance=allowance;
}
void employee::calcSal(){
    salary=basicSal+allowance;
}
void employee::printPaySlip(){
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Emp No \t:"<<empNo<<endl;
    cout<<"Name \t:"<<empName<<endl;
    cout<<"Basic Salary \t:"<<basicSal<<endl;
    cout<<"Allowance \t:"<<allowance<<endl;
    cout<<"Net Salary \t:"<<salary<<endl;
    cout<<"------------------------------------------------------";
}
void employee::setOtDetails(double otRte,double OtHrs){
    OtHours=OtHrs;
    OtRate=otRte;
    salary=salary+(OtHours*OtRate);
}
int main()
{
    employee emp1;
    double OtHrs,OtRte;
    emp1.assignDetails();
    emp1.setAllowance(5000);
    emp1.calcSal();
    emp1.printPaySlip();
    cout<<endl<<endl<<"Enter OT Hours :";
    cin>>OtHrs;
    cout<<"Enter OT Rate : ";
    cin>>OtRte;
    emp1.setOtDetails(OtHrs,OtRte);
    emp1.printPaySlip();

}

#include<iostream>
using namespace std;

int empId[5];
string empName[5];
double hoursWork[5],payPerHour[5],totalsal[5];

int main(){
    for(int i=0;i<5;i++){
        cout<<"Enter Employee ID : ";
        cin>>empId[i];
        cout<<"Enter Employee Name : ";
        cin>>empName[i];
        cout<<"Enter Hours Worked : ";
        cin>>hoursWork[i];
        cout<<"Enter Pay Per Hour : ";
        cin>>payPerHour[i];
    }
    for(int j=0;j<5;j++){
        cout<<"EMP "<<empId[j]<<" "<<empName[j]<<" - "<<"RS."<<payPerHour[j]<<" x "<<hoursWork[j]<<" hours "<<"= RS."<<payPerHour[j]*hoursWork[j]<<endl;
}
}
#include<iostream>
#include<cstring>
#include"student.h"
#include<iomanip>
using namespace std;

int main(){
    student s1,s2,s3,s4;
char n1[20]="kamal";
char n2[20]="kamal";
char n3[20]="kamal";
char n4[20]="kamal";
    s1.setStudentDetails(1234,n1);
    s2.setStudentDetails(1234,n2);
    s3.setStudentDetails(1234,n3);
    s4.setStudentDetails(1234,n4);

    s1.setMarksOOC(85);
    s1.setMarksSPM(80);
    s1.setMarksISDM(75);

    s2.setMarksOOC(65);
    s2.setMarksSPM(50);
    s2.setMarksISDM(45);

    s3.setMarksOOC(98);
    s3.setMarksSPM(75);
    s3.setMarksISDM(80);

    s4.setMarksOOC(98);
    s4.setMarksSPM(50);
    s4.setMarksISDM(45);

    cout<<"Avarage OOC Marks : "<<fixed<<setprecision(2)<<(s1.getMarksOOC()+s2.getMarksOOC()+s3.getMarksOOC()+s4.getMarksOOC())/4<<endl;
    cout<<"Avarage SPM Marks : "<<fixed<<setprecision(2)<<(s1.getMarksSPM()+s2.getMarksSPM()+s3.getMarksSPM()+s4.getMarksSPM())/4<<endl;
    cout<<"Avarage ISDM Marks : "<<fixed<<setprecision(2)<<(s1.getMarksISDM()+s2.getMarksISDM()+s3.getMarksISDM()+s4.getMarksISDM())/4<<endl;
}
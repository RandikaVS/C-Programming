#include<iostream>
#include<cstring>
#include"student.h"

void student::setStudentDetails(int ID,char name[]){
    studentID=ID;
    strcpy(studentName,name);
}
void student::setMarksOOC(double m){
    marksOOC=m;
}
void student::setMarksSPM(double m){
    marksSPM=m;
}
void student::setMarksISDM(double m){
    marksISDM=m;
}
double student::getMarksOOC(){
    return marksOOC;
}
double student::getMarksSPM(){
    return marksSPM;
}
double student::getMarksISDM(){
    return marksISDM;
}
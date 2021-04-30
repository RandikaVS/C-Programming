class student{
private:
 int studentID;
 char studentName[20];
 double marksOOC;
 double marksSPM;
 double marksISDM;

 public:
 void setStudentDetails(int ID,char name[]);
 void setMarksOOC(double m);
 void setMarksSPM(double m);
 void setMarksISDM(double m);
 double getMarksOOC();
 double getMarksSPM();
 double getMarksISDM();
};
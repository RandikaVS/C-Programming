#include <iostream>

using namespace std;

class ClassRoom{
private:
    int roomNo;
public:
    ClassRoom();
    ClassRoom(int no){
        roomNo=no;
    }
    void display(){
        cout<<"Room No : "<<roomNo<<endl;
    }
    ~ClassRoom(){
        cout<<"Delete Room "<<roomNo<<endl;
    }
};

class University{
private:
    ClassRoom *rooms[2];

public:
    University(){
        for(int i=0;i<2;i++){
            rooms[i]=new ClassRoom(i+101);
        }
    }
    University(int no1,int no2){

            rooms[0]=new ClassRoom(no1);
            rooms[1]=new ClassRoom(no1);
    }
    void DisplayClassRooms(){
        for(int i=0;i<2;i++){
            rooms[i]->display();
        }
    }
    ~University(){
        cout<<"University is getting Close!!!"<<endl;
        for(int i=0;i<2;i++){
            cout<<"Deleting ";
            rooms[i]->display();
            delete rooms[i];
            cout<<" Done!!"<<endl;
        }
        cout<<"Everything is Deleted!!!"<<endl;
    }
};

int main(){
    University *myuni;
    myuni= new University(501,502);
    myuni->DisplayClassRooms();
    delete myuni;

    return 0;
}
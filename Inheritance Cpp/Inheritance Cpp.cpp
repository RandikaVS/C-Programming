#include <iostream>
#include<cstring>
using namespace std;

class animal{    //Parent class

protected:
    char name[20];//common value in sub classes

public:
    animal();//default constructor

    animal(char a_name[]){  //overloading constructor

        strcpy(name,a_name);//copy specific animal name into variable

    }

    virtual void speak(){}//virtual method declaring

    void sound(){//displaying method
        cout<<name<<" 's Sound"<<endl;
        speak();
        cout<<name<<" 's Sound"<<endl;
        speak();
        cout<<name<<" 's Sound"<<endl;
        speak();
        cout<<endl;
    }

};
class cat:public animal{    //sub class called as 'cat'

public:
    cat();//default constructor

    cat(char catName[]):animal(catName){}//assign specific animal name into parent class in default constructor

    void speak(){                   //virtual method in parent class

    cout<<"Meow..Meow...Meow.."<<endl;

    }

};
class dog:public animal{    //sub class called as 'dog'
public:
    dog();

    dog(char dogName[]):animal(dogName){}//assign specific animal name into parent class in default constructor

    void speak(){                   //virtual method in parent class

        cout<<"Bow..Bow..Bow.."<<endl;
    }

};
class cow:public animal{    //sub class called as 'cow'

public:
    cow();

    cow(char cowName[]):animal(cowName){}//assign specific animal name into parent class in default constructor

    void speak(){                   //virtual method in parent class

    cout<<"Moo...Moo...Moo"<<endl;

    }


};

int main()
{
    animal *ani[2];             //making two animal objects using parent class
    ani[0]=new cat("Mickey");   //passing parameter to parent class with mention sub class 'cat'
    ani[1]=new dog("Brown");    //passing parameter to parent class with mention sub class 'dog'
    ani[2]=new cow("Pully");    //passing parameter to parent class with mention sub class 'cow'

    for(int i=0;i<=2;i++){
        ani[i]->sound();    //calling display method in parent class using sub classes array
    }

    return 0;

}

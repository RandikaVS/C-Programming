#include <iostream>
#include <cstring>

using namespace std;

class Book{
private:
    int bookID;
    char bookName[20];
    char author[10];
public:
    void setBookDetails(char n[],char a[]);
    void displayBookDetails();
    void setBookID(int id);
};
void Book::setBookDetails(char n[],char a[]){
    strcpy(bookName,n);
    strcpy(author,a);
}
void Book::displayBookDetails(){
    cout<<"Book ID   = "<<bookID<<endl;
    cout<<"Book Name = "<<bookName<<endl;
    cout<<"Author    = "<<author<<endl<<endl;
}
void Book::setBookID(int id){
    bookID=id;
}



int main()
{
    int id[2];
    Book b1,b2,b3;
    b1.setBookDetails("Jane Eyre","Charlotte Bronte");
    b1.setBookID(1212);

    b2.setBookDetails("Divergent","Veronica Roth");
    b2.setBookID(1234);

    b3.setBookDetails("Matilda","Roald Dahl");
    b3.setBookID(3456);
    for(int i=0;i<3;i++){
    cout<<"Enter New Book Id "<<i+1<<" : ";
    cin>>id[i];
    }
    cout<<endl;

    b1.setBookID(id[0]);
    b2.setBookID(id[1]);
    b3.setBookID(id[2]);

    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();
}

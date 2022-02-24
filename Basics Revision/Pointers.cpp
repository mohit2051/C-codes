#include<iostream>
using namespace std;

int main(){

    int age = 19;
    double gpa = 4.0;
    string name = "Mohit";

    int *pAge = &age;
    string *pName = &name;

    cout<<"memory address of age = "<< &age<<endl;
    cout<<"value of age = "<<age<< " or we write it as "<<*&age<<endl;

    //printing pointer using the pointer variable now
    cout<<"memory address of name ="<<pName<<endl;
    cout<<"value of name = "<<name<< " or we can write it as "<<*pName<<endl;

    return 0;
}
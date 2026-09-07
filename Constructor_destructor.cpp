#include<iostream>
using namespace std;

class Student
{
    int marks;
public:
    //constructor
    Student()
    {
        cout<<"constructor is called"<<endl;
    }
    void display()
    {
        cout<<"Marks:"<<marks<<endl;
    }
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}
#include<iostream>
using namespace std;
struct Student
{
    int id;
    char name[10];
    char dept[10];
    float cgpa;
    void get()
    {
        cout<<"\n\nEnter id : ";
        cin>>id;
        cout<<"\nEnter name : ";
        cin>>name;
        cout<<"\nEnter department : ";
        cin>>dept;
        cout<<"\nEnter cgpa : ";
        cin>>cgpa;
    }
    void display()
    {
        cout<<"\nID : "<<id<<endl<<"NAME : "<<name<<endl<<"DEPARTMENT : "<<dept<<endl<<"CGPA : "<<cgpa<<"\n";
    }
};
int main()
{
    int i,num;
    cout<<"Enter the number of student for information:";
    cin>>num;
    Student ob[num];
    for(i=0;i<num;i++)
    {
        ob[i].get();
    }
    cout<<"\n\n";
    cout<<"Information of "<<num<<" student display below:\n";
    for(i=0;i<num;i++)
    {
        ob[i].display();
    }

return 0;
}


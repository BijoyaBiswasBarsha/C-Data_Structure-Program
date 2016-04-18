#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>mylist;
    list<int>::iterator pos1,pos2;
    for(int a=1;a<=50;a++)
    {
        mylist.insert(mylist.end(),a);
    }

    for(int a=70;a<=100;a++)
    {
        mylist.insert(mylist.end(),a);
    }
     cout<<"The list is:\n";
    for(pos1=mylist.begin(); pos1!=mylist.end();pos1++)
    {
      cout<<*pos1<<",";
    }

    for( pos1=mylist.begin(); pos1!=mylist.end();   pos1++)
    {
      if(*pos1 == 50)
        break;
    }

    pos1++;
    for(int a=51;a<=69;a++)
    {
       mylist.insert(pos1,a);
    }
     cout<<"\n\nAfter inserting the list is:\n";
    for(pos1=mylist.begin(); pos1!=mylist.end();pos1++)
    {
      cout<<*pos1<<",";
    }
     for( pos1=mylist.begin(); pos1!=mylist.end();   pos1++)
    {
      if(*pos1 == 50)
        break;
    }
     for( pos2=mylist.begin(); pos2!=mylist.end();   pos2++)
    {
      if(*pos2 == 70)
        break;
    }
    pos2++;
    mylist.erase(pos1,pos2);
    cout<<"\n\nAfter Deleting the list is:\n";
    for(pos1=mylist.begin(); pos1!=mylist.end();pos1++)
    {
      cout<<*pos1<<",";
    }
cout<<"\n";
return 0;

}

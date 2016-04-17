# include<iostream>
# include <list>
using namespace std;
int main ()
{
    list<int>myll;
    int i,x;
    list<int>::iterator myitr1,myitr2;
    for(i=0;i<=49;i++)
    {
        myll.insert(myll.end(),i);
    }
    for(i=51;i<=100;i++)
    {
        myll.insert(myll.end(),i);
    }
    for(myitr1=myll.begin();myitr1!=myll.end();myitr1++)
    {
        if(*myitr1==60)
            break;
    }
    for(myitr2=myll.begin();myitr2!=myll.end();myitr2++)
    {
        if(*myitr2==71)
            break;
    }
    myll.erase(myitr1,myitr2);
    cout<<"\n The linked list is......\n";
    for(myitr1=myll.begin();myitr1!=myll.end();myitr1++)
    {
        cout<<*myitr1<<endl;
    }


    return 0;
}


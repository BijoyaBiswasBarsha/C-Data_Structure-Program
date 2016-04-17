# include<iostream>
# include <list>
using namespace std;
int main ()
{
    list<int>myll;
    int i,x;
    myll.push_back(5);
    myll.push_back(30);
    myll.push_back(90);
    list<int>::iterator myitr;
    myitr=myll.begin();
    myitr++;
    for(i=6;i<=29;i++)
    {
        myll.insert(myitr,i);
    }
    myitr++;
    for(i=31;i<=89;i++)
    {
        myll.insert(myitr,i);
    }
    cout<<"\n The linked list is......\n";
    for(myitr=myll.begin();myitr!=myll.end();myitr++)
    {
        cout<<*myitr<<",";
    }
    return 0;
}

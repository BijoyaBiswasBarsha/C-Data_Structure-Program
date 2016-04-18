# include<iostream>
# include<stack>
using namespace std;
int main()
{
    stack<double>MFS;
    for(int i=0;i<=10;i++)
    {
        cout<<"SIZE:"<<MFS.size();
        MFS.push(i);
        cout<<"\nSIZE AFTER PUSHING:"<<MFS.size();
        cout<<endl<<endl;
    }
    for(;MFS.size()!=0;)
    {
        cout<<MFS.top()<<endl;
        MFS.pop();
        cout<<"SIZE:"<<MFS.size()<<endl;
    }
    return 0;
}

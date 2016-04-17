# include<iostream>
# include <stack>
using namespace std;
class intstack{
public:
    int MFS[100];
    int s_top=-1;
    int top()
    {
        return MFS[s_top];
    }
    void push(int x)
    {
      MFS[s_top+1]=x;
        s_top++;
    }
void pop()
{
    s_top--;
}
int size()
{
    return s_top+1;
}
bool empty()
{
    if (size()==0)
        return true;
    else
        return false;
}
};
int main()
{
    intstack obj;
    int n,z;
    cout<<"Enter size:";
    cin>>n;
    cout<<"\nEnter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>z;
        obj.push(z);
    }
    cout<<"\nSize:\n";
    cout<<obj.size();
    cout<<"\nNow elements:";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<obj.top();
        obj.pop();
    }
    return 0;
}

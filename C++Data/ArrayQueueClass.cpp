# include<iostream>
# include<queue>
using namespace std;
class intqueue
{
    public:
    int MFQ[100];
    int stop=-1;
    void push(int x)
    {
        MFQ[stop+1]=x;
        stop++;
    }
    int size()
    {
        return stop+1;
    }
    int front()
    {
        return MFQ[0];
    }
    int back()
    {
        return MFQ[stop];
    }
    void pop()
    {
     stop--;
    }
    bool empty()
    {
        if(size()==0)
            return true;
        else
            return false;
    }
};
int main ()
{
    intqueue ob;
    int a,i,n;
    cout<<"Queue Size:";
    cin>>n;
    cout<<"\nEnter Element:\n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        ob.push(a);
    }
    cout<<"\n\nSize of queue:"<<ob.size();
    cout<<"\n\nFront element:"<<ob.front();
    cout<<"\n\nBack element:"<<ob.back();
    return 0;
}


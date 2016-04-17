# include <iostream>
using namespace std;
int main ()
{
    int item,i,j,x,y,f,loc=0,loc1=0;
    int a[10][10];
    cout<<"\n Enter the row & coloum:";
    cin>>x>>y;
    cout<<"\n Enter the value of array:\n";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n Enter a number to search:";
    cin>>item;
     for(i=0;i<x;i++)
    {
       for(j=0;j<y;j++)
       {
           if (item==a[i][j])
           {
               loc=i+1;
               loc1=j+1;
               f=1;
               cout<<"\n The item is found at row "<<loc<<"& coloum "<<loc1;
           }
       }
    }
      if(f!=1)
      cout<<"\n The item is not found";

    return 0;
}

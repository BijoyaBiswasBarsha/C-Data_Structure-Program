#include<iostream>
using namespace std;
int main()
  {
   int i,a[10],no,pos,num;
   cout<<"Enter size of element:";
    cin>>num;
   cout<<"Enter elements in array:\n";
   for(i=0;i<num;i++)
   {
    cin>>a[i];
   }
   cout<<"\n\nStored Data in array:\n";
   for(i=0;i<num;i++)
   {
    cout<<a[i];
    cout<<"\n";
   }
   cout<<"\n\nEnter poss. of element to delete: ";
   cin>>pos;
   if(pos>num)
   {
   cout<<"\n\nThis value is out of range: ";
   }
   else
   {
   --pos;
   for(i=pos;i<num;i++)
   {
    a[i]=a[i+1];
   }
   num--;
    a[pos+1]=no;
   cout<<"\n\nNew data in array:\n";
   for(i=0;i<num;i++)
   {
    cout<<a[i];
    cout<<"\n";
  }
  }
   //getch();
   return 0;
 }

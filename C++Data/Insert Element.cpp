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
  cout<<"\nElements in array:\n";
  for(i=0;i<num;i++)
  {
  cout<<a[i];
  cout<<"\n";
  }
  cout<<"\n\nEnter position to insert: ";
  cin>>pos;
  if(pos>num)
  {
  cout<<"\n\nThis is out of range";
  }
  else
  {
  cout<<"\n\nEnter new number: ";
  cin>>no;
  for(i=num;i>=pos;i--)
  {
  a[i]=a[i-1];
  }
   num++;
    a[pos-1]=no;
  cout<<"\nAfter inserting the elements in array:\n";
  for(i=0;i<num;i++)
  {
  cout<<a[i];
  cout<<"\n";
  }
  }
  return 0;
  }

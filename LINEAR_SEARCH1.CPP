
#include <iostream>

using namespace std;

int main()
{
  int arr[100];
  int key,size,i,count=0;
  cout<<"Enter Size of Array :"<<endl;
  cin>>size;
  cout<<"Enter Array :";
  for(i=0;i<size;i++)
  {
      cin>>arr[i];
  }
  
  cout<<"Enter Element to Search : ";
  cin>>key;
  for(i=0;i<size;i++)
  {
      if(arr[i]==key)
      {
          cout<<"Element Found At Position : "<<i+1;
          count=1;
          break;
      }
  }
  if(count==0)
  {
      cout<<"Element Not Found !";
  }
    return 0;
}


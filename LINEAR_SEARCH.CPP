
#include <iostream>

using namespace std;

int main()
{
  int arr[]={45,54,67,34,76,86,34,86,13,67,43,};
  int key,size,i,count=0;
  size=sizeof(arr)/sizeof(int);
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

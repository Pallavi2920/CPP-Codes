#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int min=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
  }
  cout<<"After Selection Sort:"<<endl;
  for(int i=0;i<n;i++)
  {

    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void bubble(int arr[],int n)
{
  for(int i=n-1;i>=0;i--)
  {
    for(int j=0;j<i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  cout<<"After Bubble Sort:"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void insertion(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int var=arr[i],j=i;
    while(arr[j-1]>var && j>=1)
    {
      arr[j]=arr[j-1];
      j--;
    }
    arr[i]=var;
  }
  cout<<"After Insertion Sort"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  selection(arr,n);
  bubble(arr,n);
  insertion(arr,n);
}

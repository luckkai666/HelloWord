#include<.iostream>
using namespace std;

viod sort(int arr[],int size)
{
	
   
	int temp=0;
	for(int i=0;i<size-1;++i)
	{
	for(int j=0;j<size-1-i;++j)
	{
	if(arr[j]>arr[j+1])
	{
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j]=temp;
	}
	}
	}
}

int main()
{  //�޸�cpp
	int arr[]={12,4,89,43,21,78};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	return 0;
	
	
}


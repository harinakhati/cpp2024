//WAP that sorts numbers using template function
#include<iostream>
#define N 10
using namespace std;
template <class T>
void sort(T arr[])
{
	T temp;
	int i,j;
	for(i=0; i<(N-1); i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
template<class T>
void print(T arr)
{
	int i,j;
	for(i=0; i<N; i++)
	{		
		cout<<arr[i]<<"\t";	
	}
}
int main()
{
	int arr[]={10,19,15,13,47,12,55,99,75,50};
	float arr2[]={2.5,6.5,9.3,8.2,8.1,6.25,5.25,1.3,9.99,10.1};
	sort(arr);
	sort(arr2);
	cout<<"Integer sorting:"<<endl;
	print(arr);
	cout<<"\nFloat sorting:"<<endl;
	print(arr2);
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	bool arr[500];
	bool flag;
	int i,j;
	for(i=0;i<500;i++)
	arr[i] = true;
		
	cout << "Prime Numbers from 1 to 500 are : \n";
	for(i=2;i<500;i++)
	{
		for(j=i*i;j<500;j+=i)
		{                   
			arr[j-1] = false;
		}
	}	
	for(i=2;i<500;i++)
	{
		if(arr[i-1] == true)
			cout << "\n" << i << " ";
	}	
	cout<<" ";
	return 0;
}

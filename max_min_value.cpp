#include<iostream>
using namespace std;
int main()
{
	int n,number,max=-10000,min=10000;
	cout<<"Enter number of inputs:"<<endl;
	cin>>n;
	for(int i=1; i<=n ;i++)
	{
	cout<<"Enter next number:"<<endl;
	cin>>number;
	}
	if(number>max){
	min=number;
	}
	else if(number<min){
	max=number;
	}
   cout<<"max is:"<<max<<"min is:"<<min<<endl;
return 0;
}

	
	


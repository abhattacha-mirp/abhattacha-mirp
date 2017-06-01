#include<iostream>
using namespace std;
int main()
{
	int n,num,avg,sum;
	cout<<"Enter number of inputs:"<<endl;
	cin>>n;
	for(int i=1,sum=0;i <= n; i++){
	cout<<"Enter next number:"<<endl;
	cin>>num;
	sum=sum+num;
	avg=sum/n;
	}
	cout<<"Average of the numbers is:"<<avg<<endl;
	return 0;
}

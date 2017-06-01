#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"Enter any number:"<<endl;
	cin>>n;
	for(;n>0;){
	sum=sum+n%10;
	n=n/10;
	}
	cout<<"Sum of the numbers is:"<<sum<<endl;
	return 0;
}

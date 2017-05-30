#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter value of a:"<<endl;
	cin>>a;
	cout<<"enter value of b:"<<endl;
	cin>>b;
	cout<<"enter value of c:"<<endl;
	cin>>c;
	d=sqrt((b*b)-(4*a*c));
	if (d >= 0){
	cout<<"roots are real"<<endl;
	}
	else if (d < 0){
	cout<<"roots are imaginary"<<endl;
	}
	return 0;
}
	

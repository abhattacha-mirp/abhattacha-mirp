#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,max;
	cout<<"enter 1st integer:"<<endl;
	cin>>a;
	cout<<"enter 2nd integer:"<<endl;
	cin>>b;
	cout<<"enter 3rd integer:"<<endl;
	cin>>c;
	cout<<"enter 4th integer:"<<endl;
	cin>>d;
	max=-100000;
        if  (max>a){
	cout<<"1st is maximum value"<<endl;
	cin>>e;
	}
	else if (b>a){
	cout<<"2nd is maximum value"<<endl;
	cin>>e;
	}
	else if (c>b){
	cout<<"3rd is maximum value"<<endl;
	cin>>e;
	}
	else if (d>a){
	cout<<"4th is maximum value"<<endl;
	cin>>e;
	}
	else if (e>a){
	cout<<"1th is 2ndmaximum value"<<endl;
	cin>>f;
	}
	else if (a>b){
	cout<<"2nd is 2ndmaximum value"<<endl;
	cin>>f;
	}
	else if (b>c){
	cout<<"3rd is 2ndmaximum value"<<endl;
	cin>>f;
	}
	else if (c>d){
	cout<<"4th is 2ndmaximum value"<<endl;
	cin>>f;
	}
	
	return 0;
}
	
	

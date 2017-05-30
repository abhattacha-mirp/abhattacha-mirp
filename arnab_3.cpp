#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,x1,x2,x3,y1,y2,y3;
	cout<<"Enter coordinate x1:"<<endl;
	cin>>x1;
	cout<<"Enter coordinate x2:"<<endl;
	cin>>x2;
	cout<<"Enter coordinate x3:"<<endl;
	cin>>x3;
	cout<<"Enter coordinate y1:"<<endl;
	cin>>y1;
	cout<<"Enter coordinate y2:"<<endl;
	cin>>y2;
	cout<<"Enter coordinate y3:"<<endl;
	cin>>y3;
	a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	if ((a==b)&&(b==c)){
	cout<<"It is an equilateral triangle"<<endl;
	}
	else if ((a==b)||(b==c)||(a==c)){
	cout<<"It is an isosceles triangle"<<endl;
	}
	else if ((a!=b)&&(b!=c)&&(c!=a)){
	cout<<"It is a scalene triangle"<<endl;
	}
	return 0;
}

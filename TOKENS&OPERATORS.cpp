/*	Q1	Write a c++ program to find size of int, float, double and char in your system*/

#include<iostream>
using namespace std;
int main()
{
	cout<<"The size of datatype int is:"<<sizeof(int)<<endl;
	cout<<"The size of datatype float is:"<<sizeof(float)<<endl;
	cout<<"The size of datatype double is:"<<sizeof(double)<<endl;
	cout<<"The size of datatype char is:"<<sizeof(char)<<endl;
	return 0;
}

/*	Q2	Write a c++ program to find the product of two numbers entered by the user*/
// Enter two numbers:3.4 and 5.5
//product =18.7

#include<iostream>
using namespace std;
int main()
{
	float a,b,product;
	cout<<"ENTER THE NUMBER'A'="<<endl;
	cin>>a; // we will enter a=3.4
	cout<<"ENTER THE NUMBER 'B'="<<endl;
	cin>>b; // we will enter b=5.5
	product=a*b;
	cout<<"THE PRODUCT OF NUMBERS 'A' AND 'B' ARE:="<<product<<endl;
	return 0;
}

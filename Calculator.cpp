#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b;
	char choice;
	cout<<"Enter\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n";
	cin>>choice;
	switch(choice)
	{
		case '1': cout<<"Enter two numbers\n";
		cin>>a>>b;
		cout<<"Result: "<<a+b;
		break;
		
		default: cout<<"Invalid Choice";
		break;
	}
}

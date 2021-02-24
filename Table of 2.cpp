#include<iostream>

using namespace std;

int main ()


{
	int a,b,num;
	cout <<"which number table do you want to print\n";
	
	cin>>num;
	
	for (a=1; a<=20; a++)
	{
	b=num*a;	
	cout<<num<<"*"<<a<<"="<<b<<endl;
	}
	
	
}



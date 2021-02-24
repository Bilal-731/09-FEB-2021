#include<iostream>

using namespace std;

int main ()

{
	int per;
	cout<<"Enter your percentage= ";
	cin>>per;
	
	if(per<=30){
		
	cout<<"You are Fail !";
	
	} else if(per<=50){
	
	cout<<"You have passed !";	
		
	} else if(per<=80){
	
	cout<<"You Got good grades !";
	
	} else if(per<=100){
	
	cout<<"You got excellent grades !";
	
	} else{
		
	cout<<"Invalid percentage !"; 
	}
	
}

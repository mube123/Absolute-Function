#include<iostream>
using namespace std;
int abs(int num);
int main()
{
	cout<<abs(0);	
}
int abs(int num)
{
	cout<<"Enter a number:";
	cin>>num;
	if(num<0)
		num=(-1)*num;
	else
		num=num;
		
	return num;
}

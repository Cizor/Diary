#include <iostream>
using namespace std;

//Non Recursion
void Fibo(const int& n){
	int a = 0, b = 1,c = 0,count = 0;
	cout<<a<<endl;
	cout<<b<<endl;
	for(count = 0; count < n;count++)
	{
		c = a + b;
		cout<<c<<endl;
		a = b;
		b = c;
	}
}
//Recursion
void FiboR(int &a, int &b, int &n){
	int temp = 0;
	while(n != 0){
		temp = a+b;
		cout<<a+b<<endl;
		n--;
		FiboR(b,temp,n);
	}
}

int main(){
	int num = 0,first = 0,second = 0;
	cout<<"Fibo Series"<<endl;
	cout<<"Enter number of elements"<<endl;
	cin>>num;
	cout<<"Enter first number"<<endl;
	cin>>first;
	cout<<"Enter second number"<<endl;
	cin>>second;
	cout<<"Fibo Series"<<endl;
	cout<<first<<endl;
	cout<<second<<endl;
	num = num - 2;
	FiboR(first, second,num);
	return 0;
}


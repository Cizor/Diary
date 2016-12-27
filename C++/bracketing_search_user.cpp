#include <iostream>
#include <random>
using namespace std;

int getRand(int min, int max)
{
	random_device rd;
	mt19937 eng(rd());
	uniform_int_distribution<> distr(min,max);
	return distr(eng);
}

int takeInput( int a){
	cin>>a;
	return a;
}

int main()
{
	int number = 0, computer_number = 0;
	cout<<"Bracketing Search"<<endl;
	computer_number = getRand(1,100);
	cout<<"Enter your number "<<"Hint "<< computer_number<<endl;
	number = takeInput(number);
	while(1){
		if(number > 100 || number < 0){
			cout<<"Range on number should be between 1 to 100"<<endl;
			number = takeInput(number);
		}else if(number == computer_number){
			cout<<"You are correct"<<endl;
			break;
		}else if(number < computer_number){
			cout<<"Too low"<<endl;
			number = takeInput(number);
		}else{
			cout<<"Too high"<<endl;
			number = takeInput(number);
		}
	}
	return 0;
}

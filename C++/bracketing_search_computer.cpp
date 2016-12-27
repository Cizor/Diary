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

int takeInput(int a){
	cin>>a;
	return a;
}

int main(){
	int guess = 0,user = 0, min = 1, max = 100;
	cout<<"Bracketing Search from computer"<<endl<<"Guess a number between 1 and 100, keep it in your mind"<<endl;
	while(1){
		guess = getRand(min,max);
		cout<<"Comnputer's guess :"<<guess<<endl<<"Enter 1 for high 0 for low 2 for perfect"<<endl;
		user = takeInput(user);
		if(user == 0){
			cout<<"Too Low said"<<endl;
			min = guess;
			guess = getRand(min,max);
		}else if(user == 1){
			cout<<"Too High said"<<endl;
			max = guess;
			guess = getRand(min,max);
		}else if(user == 2){
			cout<<"Correct"<<endl;
			break;
		}else{
			cout<<"Wrong input"<<endl;
		}
	}
}

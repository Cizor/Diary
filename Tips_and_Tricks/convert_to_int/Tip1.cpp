#include <iostream>
#include <string>

int main(){
	std::string str;
	std::cout<<"Enter your number : "<<std::endl;
	std::cin>>str;

	std::cout<<"Your integer equivalent is :"<<std::endl;	
	for(int j = 0;j<str.length();j++){	
		int i = str[j] - '0';
		std::cout<<i;
	}
	std::cout<<std::endl;

}

#include <iostream>
#include <string>
#include <vector>

int main(){
	std::cout<<"##########Program to count words in a string using VECTOR########"<<std::endl;
	std::vector<char> str_array;
	std::string str;
	std::cout<<"Enter your string : "<<std::endl;
	std::getline(std::cin,str);
	for(int i = 0;i < str.length();i++){
		str_array.push_back(str[i]);
	}
	std::cout<<str<<std::endl;
	for(int j = 0;j < str.length();j++){
		std::cout<<str_array[j];
	}
	std::cout<<str_array.size()<<std::endl;
		
}

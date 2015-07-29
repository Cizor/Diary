#include <iostream>
#include <cstring>
#include <string>
std::string check_spaces(std::string p_word){
	std::string p_str;
	for(int i = 0;i< p_word.length();i++){
		if(p_word[i] == ' '){
			p_str = "Not word";
			break;
		}else{
			p_str = "word";
		}
	}
	return p_str;
}
int main(){
	std::cout<<"#########Program to check palindrome########"<<std::endl;	
	std::string str,rev;
	int flag = 0;
	str.clear();
	rev.clear();
	std::cout<<"Enter your string below : "<<std::endl;
	std::getline(std::cin,str);
	if(check_spaces(str) == "Not word"){
		std::cout<<"Its not a word"<<std::endl;
	}else{
		for(int i = str.length()-1;i >= 0;i--){
			rev += str[i];
		}
		if(strcmp(rev.c_str(),str.c_str()) == 0){
			std::cout<<"It is a palindrome"<<std::endl;
		}else{
			std::cout<<"It is not a palindrome"<<std::endl;
		}
	}		
}

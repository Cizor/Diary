#include <iostream>
#include <string>
#include <cctype>

std::string check_grammar(std::string c_sen){
	std::string check;
	/*Check on sentence grammar :
		1. First letter is Upper Case.
		2. There is no extra space at last of sentence.
	Note: '.' at last of sentence should not be after space from last word or it will be considered as word.
	*/
	if(isupper(c_sen[0]) && c_sen[c_sen.length()-1] != ' '){
		check = "OK";
	}else{
		check = "NOT OK";
	}
	return check;
	
}
int main(){
	std::cout<<"##########Program to count words in a string########"<<std::endl;
	int num_spaces = 0;
	std::string str;
	std::cout<<"Enter your string : "<<std::endl;
	std::getline(std::cin,str);
	if(check_grammar(str) == "OK"){
		for(int i = 0;i < str.length();i++){
			if(str[i] == ' '){
				if(  str[i+1] != ' '){
					num_spaces++;	
				}
			}	
		}
		std::cout<<"Total number of words : "<<num_spaces+1<<std::endl;
	}else{
		std::cout<<"Its not a proper sentence"<<std::endl;
	}
}

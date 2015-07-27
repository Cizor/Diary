#include <iostream>
#include <string>
/******PIG LATIN FOR A SENTENCE *******************/
/***********TADAAA*************/
std::string vowel_operation(std::string v_word){
	std::string out_str;
	out_str = v_word.substr(1,v_word.length()) + v_word[0] + "ay";
	return out_str;
}

std::string consonant_operation(std::string c_word){
	std::string outstr;
	outstr = c_word.substr(0,c_word.length()) + "ay";
	return outstr;
}

std::string check_start(std::string check_word){
	std::string str;
	char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};
	for(int i = 0;i < sizeof(vowels);i++){
		if(check_word[0] == vowels[i]){
			str = "vowel_start";
			break;
		}else{
			str = "consonant_start";
		}
	}
	return str;
}

int check_spaces(std::string sentence){
	int space_num;
	for(int i = 0;i < sentence.length();i++){
		if(sentence[i] == ' '){
			space_num++;
		}
	}
	return space_num;
}

int main(){
	std::string str,s;
	std::cout<<"Enter your line: ";
	std::getline(std::cin,str);
	std::cout<<check_spaces(str)<<std::endl;
}

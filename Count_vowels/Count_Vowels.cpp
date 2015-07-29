#include <iostream>
#include <string>

int main(){
	std::cout<<"#########Program to count vowels#########"<<std::endl;
	std::string str;
	int num_a = 0,num_e =0,num_i = 0,num_o = 0,num_u = 0,num_cons = 0;
	std::cout<<"Enter your text below :"<<std::endl;
	std::getline(std::cin,str);
	
	for(int i = 0;i<str.length();i++){
		switch(str[i]){
			case 'a':
			case 'A' :
				num_a++;
				break;
			case 'e':
			case 'E':
				num_e++;
				break;
			case 'i':
			case 'I':
				num_i++;
				break;
			case 'o':
			case 'O':
				num_o++;
				break;
			case 'u':
			case 'U':
				num_u++;
				break;
			default:
				num_cons++;
				break;
		}
	}
		std::cout<<"Total number of vowels : "<<num_a + num_e + num_i + num_o + num_u<<std::endl;
		std::cout<<"Total number of consonants : "<<num_cons<<std::endl;
		std::cout<<"Sum of different vowels : "<<std::endl;
		std::cout<<"Total number of a or A : "<<num_a<<std::endl;
		std::cout<<"Total number of e or E : "<<num_e<<std::endl;
		std::cout<<"Total number of i or I : "<<num_i<<std::endl;
		std::cout<<"Total number of o or O : "<<num_o<<std::endl;
		std::cout<<"Total number of u or U : "<<num_u<<std::endl;
}

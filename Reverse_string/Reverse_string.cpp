#include <iostream>
#include <string>

int main(){
	std::string s,r;
	int l;
	std::cout<<"Enter your string : ";
	std::cin>>s;
	l = s.length();
	for(int i = s.length()-1;i >= 0;i--){
		std::cout<<s[i];
	}
	std::cout<<std::endl;
}

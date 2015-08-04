#include <iostream>
#include <fstream>
#include <string>

void create_file(std::string filename, std::string filedetails){
	std::ofstream afile;
	afile.open(filename.c_str());
	afile<<filedetails;
	afile.close();
}
void append_file(std::string filename, std::string filedetails){
	std::ofstream afile;
	afile.open(filename.c_str(), std::ios::app);
	afile<<filedetails;
	afile.close();
}

void trunc_file(std::string filename, std::string filedetails){
	std::ofstream afile;
	afile.open(filename.c_str(), std::ios::trunc);
	afile<<filedetails;
	afile.close();
}

void file_op(std::string file_name, std::string file_details){
	int option;
	std::ifstream namecheck(file_name.c_str());
	std::ofstream newfile;
	if(!(namecheck)){
		create_file(file_name,file_details);
		std::cout<<"File Saved!"<<std::endl;
	}else{
		std::cout<<"File already exists. Choose an option : \n \
				1. Create new and delete old one \n \
				2. Append details to existing file \n \
				3. Enter another file name \n \
				Enter your option :"<<std::endl;
		std::cin>>option;
		switch(option){
			case 1:
				trunc_file(file_name,file_details);
				break;
			case 2:
				newfile.open(file_name.c_str(), std::ios::app);
				newfile<<file_details;
				newfile.close();
				std::cout<<"To append"<<std::endl;
				break;
			case 3:
				
			default:
				std::cout<<"This is an invalid option"<<std::endl;
		}
	}
}
void new_file(){
	std::ofstream newfile;
	std::string str_details,frags,str_file;
	str_details.clear();
	frags.clear();
	std::cout<<"What do you want to write in file? \n \
		Note : To stop writing and save details write : The End"<<std::endl;
	while(std::getline(std::cin,str_details)){
		if(str_details == "The End")
			break;
		str_details += "\n";
		frags += str_details;
	}
	std::cout<<"Enter your file name : ";
	std::cin>>str_file;
	file_op(str_file,frags);
}

int main(){
	std::cout<<"###Program to write into a file###"<<std::endl;
	int option;
	std::string str_name,str_detail,frags;
	frags.clear();

	std::cout<<"What you want to do?"<<std::endl;
	std::cout<<"Options : \n \
		1. New File \n \
		2. Append existing file \n \
		3. Truncate exisitng one and write new details in it \n \
		Enter your option below : "<<std::endl;
	std::cin>>option;
	switch(option){
		case 1:
			new_file();
			break;
		case 2:
		case 3:
		default:
			std::cout<<"Its not a valid option"<<std::endl;
	}
}

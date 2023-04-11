#include<iostream>

int main(){

	int* ptr {new int {10}};

	if (ptr){
		std::cout<<"Memory created sucessfully"<<std::endl;
	}

	std::cout<<"The new number is "<< *ptr<<std::endl;


	delete ptr;
	ptr = nullptr;

	if (ptr){
		std::cout<<"ptr is not null"<<std::endl;
	}
	else if (!ptr){
		std::cout<<"ptr is null"<<std::endl;
	}

	return 0;
}

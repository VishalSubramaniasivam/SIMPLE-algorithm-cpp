#include<iostream>

int main(){

	int* ptr {new int {10}};

	if (ptr){
		std::cout<<"Memory cated sucessfully"<<std::endl;
	}

	std::cout<<" The new number is "<< *ptr;


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

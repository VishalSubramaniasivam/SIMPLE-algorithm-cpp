#include<iostream>
#include<algorithm>

int main(){

	int number{0};
	std::cout<<"Enter number of names that you want to enter: ";
	std::cin>>number;

	std::string* arr{new (std::nothrow) std::string[number]{}};
	if(arr){
		std::cout<<"Memory dynamically allocated sucessfully!\n";
	}

	for (int i{0}; i<number; i++){
		std::cout<<"Enter name"<<i<<": ";
		std::cin>>arr[i];
	}
	std::cout<<std::endl;

	std::sort(arr,arr+number);

	for (int i{0}; i<number; i++){
		std::cout<<"Name "<<i<<arr[i]<<std::endl;
	}

	delete[] arr;
	return 0;
}

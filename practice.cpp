#include<iostream>
#include<algorithm>

enum class Type{
	tInt,
	tFloat,
	tString
};

void printValue(void* ptr, Type type){
	switch(type){
		case Type::tInt :
			std::cout<<*(static_cast<int*>(ptr))<<"\n";
			break;
		case Type::tFloat :
			std::cout<<*(static_cast<float*>(ptr))<<"\n";
			break;			
		case Type::tString :
			std::cout<<*(static_cast<std::string*>(ptr))<<"\n";
			break;
		default :
			std::cout<<"Could'nt find value to print"<<"\n";
			break;
	}
}

int main()
{
    int nValue{ 5 };
    float fValue{ 7.5f };
    std::string strValue[]{ "Mollie" };

    printValue(&nValue, Type::tInt);
    printValue(&fValue, Type::tFloat);
    printValue(&strValue, Type::tString);

    return 0;
}

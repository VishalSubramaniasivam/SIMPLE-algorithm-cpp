#include<iostream>

int main()
{
    int rows{0};
    int columns{0};

    std::cout<<"Enter the number of rows: ";
    std::cin>>rows;
    std::cout<<"Enter the number of columns: ";
    std::cin>>columns;

    int** arr{new (std::nothrow) int*[rows]};
    if(arr){
        std::cout<<rows<<" rows created\n";
    }

    for(int i{0}; i<columns; i++){
        arr[i] = new (std::nothrow) int[columns];
        if(arr[i]){
            std::cout<<"Column "<<i<<" created \n";
        }
    }

    for(int i{0}; i<rows; i++){
        for(int j{0}; j<columns; j++){
            arr[i][j]=i+j;
        }
    }

    for(int i{0}; i<rows; i++){
        for(int j{0}; j<columns; j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    for(int i{0}; i<columns; i++){
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;    
}
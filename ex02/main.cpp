#include <iostream>
#include "Array.hpp"

#define MAX_VAL 3
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL]; 
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 3;
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
         for(int i = 0 ; i <numbers.getSize() ; i++)
            std::cout << numbers[i] << std::endl ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout <<  "djksjs" << std::endl;
    }
   
 
   
    delete [] mirror;
    return 0;
}
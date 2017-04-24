#include <iostream>

int main(int argc, char** argv) 
{
    
    // Variable Size
    std::cout << "Problem 01" << std::endl;
    {
        short b; char ch; float f;
        std::cout<< "int : " << sizeof(int) << " short int : " << sizeof(b) << std::endl;
        std::cout<< "char : " << sizeof(ch) << "float : " << sizeof(f) << std::endl;
        std::cout<< "double : " << sizeof(double) << std::endl;
        std::cout<< "long : " << sizeof(long) << std::endl;
        
    }
    std::cout << std::endl;
    
    // Find and correct the semantic error
    std::cout << "Problem 02" << std::endl;
    int scope = 1;
    {
        int scope = 2;
        std::cout << scope << std::endl;
    }
    std::cout<<std::endl;
    
    // Find and correct the syntax error
    std::cout << "Problem 03" << std::endl;
    {
        int 1variable = 10;
        std::cout <<"location = " << &1variable << std::endl;
        std::cout << "size = " << sizeof(1variable) << std::endl;
        std::cout << "value = " << 1variable << std:endl;
    }
    std::cout << std::endl;
    
    return 0;
}

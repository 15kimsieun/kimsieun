#include <iostream> // input output stream을 줄인 것. 순서대로 data를 보내는 흐름을 가졌다고 stream이라는 이름이 붙여짐.

int main(int argc, char** argv) 
{
    
    // Variable Size
    std::cout << "Problem 01" << std::endl; // "Problem 01"을 출력한다. std::endl은end of line으로 다음 줄로 넘긴다는 뜻이다.
    {
        //b는 정수를 표현하는 데이터형인 short를 뜻하고, ch는 문자 데이터형인 char를 뜻하고, f는 실수 데이터형인 float을 뜻한다.
        short b; char ch; float f;
        
        //"int : "를 출력하고 sizeof(int)를 통해 정수 데이터형 int의 크기인 4를 출력한다. " short int : "를 출력하고 sizeof(b)를 통해 2를 출력한다.
        std::cout<< "int : " << sizeof(int) << " short int : " << sizeof(b) << std::endl; 
        //"char : "를 출력하고 sizeof(ch)를 통해 문자 데이터형 char의 size인 1을 출력한다. " float : "을 출력하고 sizeof(f)를 통해 실수 데이터형 float의 크기를 출력한다.
        std::cout<< "char : " << sizeof(ch) << " float : " << sizeof(f) << std::endl;
        //"double : "를 출력하고 sizeof(double)를 통해 실수 데이터형인 double의 size인 8을 출력한다.
        std::cout<< "double : " << sizeof(double) << std::endl;
        //"long : "를 출력하고 sizeof(long)를 통해 정수 데이터형인 long의 size인 8을 출력한다.
        std::cout<< "long : " << sizeof(long) << std::endl;
        
    }
    std::cout << std::endl; //빈 줄을 출력한다.
    
    // Find and correct the semantic error
    std::cout << "Problem 02" << std::endl; // "Problem 02"를 출력한다.
    int scope = 1; //scope은 int형식인 value가 1인 값을 할당받는다. 
    {
        int scope = 2; //scope은 int형식인 value가 2인 값을 할당받는다.
        std::cout << scope << std::endl; //이 scope과 가장 가까이 할당받은 값인 2를 출력한다.
    }
    std::cout<<std::endl; //빈 줄을 출력한다.
    
    // Find and correct the syntax error
    std::cout << "Problem 03" << std::endl; // "Problem 03"를 출력한다.
    {
        int lvariable = 10; //identifier가 lvariable의 int형식인 value가 10인 값을 할당받는다. 
        std::cout <<"location = " << &lvariable << std::endl; //"location = "을 출력하고 &lvariable을 통해 identifier가 lvariable인 location을 출력한다.
        std::cout << "size = " << sizeof(lvariable) << std::endl; //"size = "를 출력하고 sizeof(lvariable)을 통해 lvariable의 value인 10이 int이므로 그 크기인 4를 출력한다.
        std::cout << "value = " << lvariable << std::endl; //"value = "를 출력하고 lvariable을 호출하였으므로 그 value인 10을 출력한다.
    }
    std::cout << std::endl; //빈 줄을 출력한다.
    
    //맨 처음 block을 만들때 앞에 int로 main을 만들었으므로 block안에 return 값으로 int값을 지정해준다.
    return 0;
}

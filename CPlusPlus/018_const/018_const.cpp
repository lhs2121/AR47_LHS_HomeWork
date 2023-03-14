#include <iostream>

//함수의 스택에서의 메모리 크기는 컴파일시 고정되어야 한다
//ex) c++의 함수의 실행흐름을 만들기 위한(스택크기)는
int main()
{
    
    int ArrSize = 20;
    //컴파일시 ArrSize에 20이 들어감
 
    //int Value[ArrSize] = {};
    //ArrSize가 몇인지 모름

    int Value[30] = {};
    //30은 코드영역에 있기 때문에 가능


    const int ci = 30;
    //자료형에 const부이면 그 메모리의 비트적 상수화
}


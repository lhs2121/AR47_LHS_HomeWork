// 019_Inline.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

inline void Test()
{
    printf_s("Function");
}
int main()
{
    /*inline = 최적화
        함수호출할때 메모리할당을 하지않도록 해달라는 코드*/

    //Test(); 메모리 할당
    //printf_s("Function"); 복붙
}


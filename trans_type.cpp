//ex5-9
#include <iostream>
using namespace std;

int main()
{
    int i=131071;
    unsigned short i2us = i; // int -> unsigned short // result : 65535
    short i2s=i; // int-> short // result : -1 

    double d=12345678901234.56789;
    float d2f= d; //double -> float // result : 12345678901234.56789 -> 12345678901234.00000

    float f=76543.21f;
    short f2s=f; //float -> short //result : 11007

    int big_i= 1234567890;
    float i2f= big_i; //int -> float //result : 1234567936.00000

    cout << fixed; //실수 값을 출력할 때, 가수-지수 구조가 아니라 0.00123처럼 출력하게 함
    cout << "int : " <<i<<"\n\tto unsigned short : " << i2us << "\n\tto short : " << i2s << "\n\n";
    cout<< "double : " << d << "\n\tto float : " << d2f << "\n\n";
    cout << "float : " << f << "\n\tto short : " << f2s << "\n\n";
    cout << "int : " << big_i << "\n\tto float : " << i2f << "\n\n";

    return 0;

    //큰 값을 작은 값으로 변환할 때, 큰 값이 작은 값의 범위를 벗어나면 오버플로우가 발생하여 값이 손실될 수 있다.
    //엉뚱한 값이 나올 수 있으므로 주의해야 한다.

}
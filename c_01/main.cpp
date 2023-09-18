
#include <iostream>

using namespace::std;

//1. 分别用字符和ASCII码形式输出整数值65和66.
//int main()
//{
//    int num1(55), num2(56);
//
//    cout << "字符型: " << (char)num1 << ' ' << (char)num2 << endl;
//    cout << "ASSII码：" << num1 << ' ' << num2 << endl;
//
//    return 0;
//}

// 2. 编写一个int型变量分配100个整形空间
//int main()
//{
//    int *p;
//
//    p = new int[100];
//
//    delete []p;
//
//    return 0;
//}
//


//int main()
//{
//    float * p;
//    float sum = 0;
//
//    p=new float[15];
//    cout << "请输入15个数：";
//    for (int i = 0; i < 15; i++)
//    {
//        cin >> p[i];
//    }
//    sort(p, p+15);
//
//    for (int i = 0; i < 15; i++)
//    {
//        cout << p[i] << ' ';
//        sum += p[i];
//    }
//
//    cout << endl << "sum is: " << sum << endl;
//    cout << "min is: " << p[0] << endl;
//
//    delete []p;
//
//    return 0;
//}

void SwapValue(int m, int n)
{
    int tmp;
    tmp = m;
    m = n;
    n = tmp;
    
    cout << "SwapValue: \t\tm=" << m << ", n=" << n << endl;
}

void SwapRef(int & m, int & n)
{
    int tmp;
    tmp = m;
    m = n;
    n = tmp;
    
    cout << "SwapRef: \t\tm=" << m << ", n=" << n << endl;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before: \t\ta=" << a << ", b=" << b << endl << endl;
    
    SwapValue(a, b);
    cout << "After SwapValue:a=" << a << ", b=" << b << endl << endl;
    
    a = 10;
    b = 20;
    SwapRef(a, b);
    cout << "After SwapRef: \ta=" << a << ", b=" << b << endl << endl;
    
    return 0;
}


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

#include <cmath>

class Point {
private:
    double X,Y;
public:
    Point(double xi, double yi){ X = xi; Y = yi; }
    double GetX() { return X; }
    double GetY() { return Y; }
    friend double distances( Point& a, Point& b){
        double dx = a.X - b.Y;
        double dy = a.Y - b.Y;
        return sqrt(dx*dx + dy*dy);
    };
};

//double distances(Point& a, Point& b)
//{
//    double dx = a.X - b.Y;
//    double dy = a.Y - b.Y;
//    return sqrt(dx*dx + dy*dy);
//}

int main()
{
    Point p1(3.5, 5.5), p2(4.5, 6.5);
    cout << "distances is: " << distances(p1, p2) << endl;
    
    return 0;
}

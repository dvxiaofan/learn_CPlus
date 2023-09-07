//
//  main.cpp
//  c_01
//
//  Created by 张艳坤 on 2023/8/22.
//

# include <iostream>

using namespace std;

// 定义一个学生类
class Student
{
public:
    // 成员变量
    int age;
    int score;

    // 成员函数
    void say()
    {
        cout << "age = " << age << ", score = " << score << endl;
    }
};

int main()
{
    // 通过类创建对象
    Student stu;
    stu.age = 18;
    stu.score = 100;
    stu.say();

    return 0;
}


class Box
{
private:
    double width;

public:
    double length;

    void setWidth(double x);

    double getWidth();
};

void Box::setWidth(double x)
{
    width = x;
}

double Box::getWidth()
{
    return width;
}


int main()
{
    Box box;

    box.length = 100;

    box.setWidth(55.5);

    double tempWidth = box.getWidth();

    cout << "box lenght = " << box.length << endl;
    cout << "tempWidth = " << tempWidth << endl;

    return 0;
}




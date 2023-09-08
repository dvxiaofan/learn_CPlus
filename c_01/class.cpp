#include <iostream>
using namespace std;

class MyClass {
private:
    int myVar;

public:
    MyClass(int value) {
        myVar = value;
    }

    // 复制构造函数
    MyClass(const MyClass& obj) {
        myVar = obj.myVar;
    }

    int getVar() {
        return myVar;
    }
};

// 定义一个函数，函数的返回值是MyClass类的对象
MyClass func() {
    // 创建一个MyClass类的对象，并将该对象作为函数的返回值
    MyClass obj(100);
    return obj;
}

int main() {
    MyClass obj1(10); // 创建对象obj1
    MyClass obj2(obj1); // 使用复制构造函数创建对象obj2，将obj1复制给obj2

    cout << "obj1的值为：" << obj1.getVar() << endl;
    cout << "obj2的值为：" << obj2.getVar() << endl;

    return 0;
}

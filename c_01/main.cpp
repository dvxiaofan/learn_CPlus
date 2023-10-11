
#include <iostream>
#include <cmath>
using namespace::std;

class A {
public:
    virtual void print() {
        cout << "aaaa" << endl;
    }
};

class B:public A {
public:
    virtual void print() {
        cout << "bbbb" << endl;
    }
};

class D:public A {
public:
    virtual void print() {
        cout << "dddd" << endl;
    }
};

class E:public B {
public:
    virtual void print() {
        cout << "eeee" << endl;
    }
};

int main() {
    A a; B b; D d; E e;
    A *pa = &a;
    B *pb = &b;
    pa -> print();
    pa = pb;
    pa -> print();
    pa = &d;
    pa -> print();
    pa = &e;
    pa -> print();
    
    return 0;
}



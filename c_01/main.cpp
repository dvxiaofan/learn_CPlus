
#include <iostream>
#include <cmath>
using namespace::std;

class CDemo
{
private:
    int n;
public:
    CDemo(int i=0):n(i){}
    CDemo & operator++();
    CDemo & operator++(int);
    operator int() { return n; }
    
    CDemo & operator--();
    CDemo & operator--(int);
};

CDemo & CDemo::operator++()
{
    n++;
    return *this;
}

CDemo & CDemo::operator++(int k)
{
    CDemo tmp(*this);
    n++;
    return tmp;
}

CDemo & CDemo::operator--()
{
    n--;
    return *this;
}

CDemo & CDemo::operator--(int k)
{
    CDemo tmp(*this);
    n--;
    return tmp;
}

int main()
{
    CDemo d(10);
    cout<<(d++)<<",";
    cout<<d<<",";
    cout<<(++d)<<",";
    cout<<d<<",";
    cout<<(d--)<<",";
    cout<<d<<",";
    cout<<(--d)<<",";
    cout<<d<<endl;
    
    return 0;
}

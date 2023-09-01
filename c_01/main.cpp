//
//  main.cpp
//  c_01
//
//  Created by 张艳坤 on 2023/8/22.
//

# include <iostream>

using namespace std;


class CCYOU
{
private:
    int x,y;
    
public:
    void Setxy(int a, int b);

    int Getx();
    
    
};

void CCYOU::Setxy(int a, int b)
{
    x = a; y = b;
}

// inline 内联函数，频繁被调用，函数语句少时，可以采用，减少函数被执行次数，提高效率
inline int CCYOU::Getx()
{
    return x;
}


int max(int a, int b)
{
    return (a > b) ? a : b;
}

int max(int a, int b, int c)
{
    int t = max(a, b);
    return max(t, c);
}

int main()
{
    string s1 = "hello", s2 = " ", s3 = "ccyou";
    
    cout <<s1 + s2 + s3<<endl;
    return 0;
}




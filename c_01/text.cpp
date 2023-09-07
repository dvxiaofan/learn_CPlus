// 这是一个新的c++文件

Path: c_01/c_01/main.cpp

#include <iostream>

using namespace std;

// 定义一个学生类，描述学生的特征，包括姓名、年龄、分数，可以给姓名、年龄、分数赋值，可以显示学生的信息，可以进行比较大小，可以进行运算
class Student
{
public:
    // 成员变量
    string name;
    int age;
    int score;

    // 成员函数
    void setName(string m_name)
    {
        name = m_name;
    }

    void setAge(int m_age)
    {
        age = m_age;
    }

    void setScore(int m_score)
    {
        score = m_score;
    }

    void show()
    {
        cout << "name = " << name << ", age = " << age << ", score = " << score << endl;
    }

    bool compare(Student &stu)
    {
        if (this->score > stu.score)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    Student add(Student &stu)
    {
        Student temp;
        temp.name = this->name + stu.name;
        temp.age = this->age + stu.age;
        temp.score = this->score + stu.score;
        return temp;
    }

    Student sub(Student &stu)
    {
        Student temp;
        temp.name = this->name - stu.name;
        temp.age = this->age - stu.age;
        temp.score = this->score - stu.score;
        return temp;
    }
};

// 去掉字符串中的空格和换行
string trim(string &str)
{
    int index = 0;
    if (!str.empty())
    {
        while ((index = str.find('\n', index)) != string::npos)
        {
            str.erase(index, 1);
        }
        while ((index = str.find('\r', index)) != string::npos)
        {
            str.erase(index, 1);
        }
        while ((index = str.find(' ', index)) != string::npos)
        {
            str.erase(index, 1);
        }
    }
    return str;
}

// 字符串和utf8编码的相互转换
string utf8_to_string(const string &str)
{
    int nwLen = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, 0);
    wchar_t *pwBuf = new wchar_t[nwLen + 1]; // 释放由new运算符分配的内存
    ZeroMemory(pwBuf, nwLen * 2 + 2);
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), pwBuf, nwLen);
    int nLen = WideCharToMultiByte(CP_ACP, 0, pwBuf, -1, NULL, NULL, NULL, NULL);
    char *pBuf = new char[nLen + 1];
    ZeroMemory(pBuf, nLen + 1);
    WideCharToMultiByte(CP_ACP, 0, pwBuf, nwLen, pBuf, nLen, NULL, NULL);
    string retStr(pBuf);
    delete[] pwBuf;
    delete[] pBuf;
    pwBuf = NULL;
    pBuf = NULL;
    return retStr;
}

string string_to_utf8(const string &str)
{
    int nwLen = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, NULL, 0);
    wchar_t *pwBuf = new wchar_t[nwLen + 1];
    ZeroMemory(pwBuf, nwLen * 2 + 2);
    MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.length(), pwBuf, nwLen);
    int nLen = WideCharToMultiByte(CP_UTF8, 0, pwBuf, -1, NULL, NULL, NULL, NULL);
    char *pBuf = new char[nLen + 1];
    ZeroMemory(pBuf, nLen + 1);
    WideCharToMultiByte(CP_UTF8, 0, pwBuf, nwLen, pBuf, nLen, NULL, NULL);
    string retStr = pBuf;
    delete[] pwBuf;
    delete[] pBuf;
    pwBuf = NULL;
    pBuf = NULL;
    return retStr;
}

int main()
{
    // 通过类创建对象
    Student stu1;
    stu1.setName("张三");
    stu1.setAge(18);
    stu1.setScore(100);
    stu1.show();

    Student stu2;
    stu2.setName("李四");
    stu2.setAge(20);
    stu2.setScore(80);
    stu2.show();

    bool flag = stu1.compare(stu2);
    if (flag)
    {
        cout << "stu1的分数大" << endl;
    }
    else
    {
        cout << "stu2的分数大" << endl;
    }

    Student stu3 = stu1.add(stu2);
    stu3.show();

    // 获取本地时间并生成字符串格式: 2021-01-01 12:00:00
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "年: " << 1900 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;



    return 0;
}

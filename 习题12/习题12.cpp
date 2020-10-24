//
//  习题12
//
/*
 「题目」
    输入两个字符串，检测第二个字符串是否是第一个字符串的子字符串。
 */
//



#include <iostream>
#include <string>
#include <cstring>
using namespace std;
 
int main() {
    string s1, s2;
    cout << "请输入第一个字符串:";
    cin >> s1;
    cout << "请输入第二个字符串:";
    cin >> s2;
        if(s1.find(s2) != string::npos )
            cout << "第二个字符串 是 第一个字符串的 子串" << endl;
        else
            cout << "第二个字符串 不是 第一个字符串的 子串" << endl;
    return 0;
}


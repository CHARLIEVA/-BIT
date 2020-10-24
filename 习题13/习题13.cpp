//
//  习题13
//
/*
 「题目」从一个文本文件（txt）中删除所有指定的某个字符
 */
//

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
    ifstream in;
    string s;
    in.open("./a.txt",ios::in);//文件名a.txt
    if(!in.is_open()){
        cout<<"打开失败\n";
        return 1;       // 返回异常；
    }
    
    in>>s;
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    if(*it == 'e' ){        //删除文本中的 'e'字符串
        s.erase(it);
        it--;
    }
    
    cout << s <<endl;
    in.close();
    ofstream out;
    out.open("./a.txt");
    out << s <<endl;
    out.close();
    
    return 0;
}

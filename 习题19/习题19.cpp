//
//  习题19
//
/*
 「题目」
    读入文件“file1.txt”，加行号后输出到文件“file2.txt”，统计并输出读入的行数和最长行的长度。
 */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    ifstream f_in("./file1.txt");
    ofstream f_out("./file2.txt");
    string line;
    int lineNumber = 0;
    double a = 0;
    while(getline(f_in,line))
    {
        if (a<line.size())
            a = line.size();
        f_out << lineNumber++ << "\t" << line << endl;
    }
    cout << "最大行的长度为:" << a << endl;
    cout <<  "总计:"<<lineNumber <<"行" << endl;
    f_out << "总计:"<<lineNumber <<"行" << endl;
    f_out << "最长一行的长度为："<< a << endl;
    f_out.close();
    
    system("pause");
    return 0;
}

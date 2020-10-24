//
//  作业题：4 用两种方法判断一个数是不是2的阶次方数
//
/*  方法一：
        该数除以2,得到商和余数,如果余数不为0,那这个数就不是2的整数次幂
        否则再用商除以2,又得到商和余数,重复上面的操作,直到商为1,
        当商为1,余数为0时,这个数就是2的整数次幂
 */
//

#include <iostream>
using namespace std;
int func(int n){
    if(!n)
        return 0;
    while (n!=1) {
        if(n&1)
            return 0;
        n/=2;
    }
    return 1;
}

int main(){
    int n;
    cout << "请输入一个数:";
    while (cin>>n) {
        if(func(n))
            cout <<  n << "是2的阶次方数" << endl;
        else cout << n << "不是2的阶次方数"<< endl;
        
    }
    return 0;
}

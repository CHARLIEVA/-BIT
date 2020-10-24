//
//  习题6
//
/*
 「题目」
 （用多维数组）对给定的两名学生的各三门成绩，
 输出所有成绩的最高分和最低分，
 并输出每个学生的平均分。
 */


#include <iostream>
using namespace std;
//设置学生人数 科目数量
const int stu=2,scr=3;
int main(){
//    给定两名学生的各3科成绩
    int score[stu][scr]={
        {90,95,82},
        {78,85,88}
    };
    double average[stu];
    int min = score[0][0], max = score[0][0];
//    先学生1 再学生2 i++
    for(int i=0;i<stu;i++)
    {
        double sum=0;
//        先第一门成绩，然后第二门，第三门
        for(int j=0;j<scr;j++)
        {
//            最小值大于当前值，则将当前值赋值到min
            if (min > score[i][j])
                min = score[i][j];
//            最大值小于当前值，则将当前值赋值到max
            if ( max < score[i][j])
                max = score[i][j];
//            将每一门成绩累加
            sum +=score[i][j];
        }
//        计算当前学生的平均值
        average[i] = sum / 3;
        cout << "学生" << i+1 << "的平均分：" << average[i] <<endl;
    }
    cout << "所有成绩中的最低分为：" << min << endl;
    cout << "所有成绩中的最高分为：" << max << endl;
}

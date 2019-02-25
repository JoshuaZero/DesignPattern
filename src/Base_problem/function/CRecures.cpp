//
// Created by st007 on 19-2-18.
//
#include <iostream>
#include "CRecures.h"


/* when the n=7 the result is :
Counting down ...7
Counting down ...6
Counting down ...5
Counting down ...4
Counting down ...3
Counting down ...2
Counting down ...1
Counting down ...0
0: Kaboom!
1: Kaboom!
2: Kaboom!
3: Kaboom!
4: Kaboom!
5: Kaboom!
6: Kaboom!
7: Kaboom!
 */

void CRecures::countdown(int n) {
    std::cout << "Counting down ..." << n << std::endl;
    if(n > 0){
        countdown(n-1);
    }
    std::cout << n << ": Kaboom!\n";
}

/*
 使用循环调用subdivide函数6次，每次将递归层编号加1,
 并打印得到的字符串。
 每行输出表示一层递归。
 */
void CRecures::showRes() {
    char ruler[Len];
    int i;
    for(i = 1; i < Len-2; ++i){
        ruler[i] = ' ';
    }
    ruler[Len-1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for(i = 1; i <= Divs; ++i){
        subdivide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < Len-2; ++j) {
            ruler[j] = ' ';
        }
    }
}

/*
 绘制标尺。标出两端，找到中点的并将其标出
 然后用同样的操作用于标尺的左半部分和右半部分。
 如果进一步细分，可将同样的操作用于当前的每一部分。
 该函数使用一个字符串，该字符串除两端为|字符外，其他全部为空格。
 */

void CRecures::subdivide(char *ar, int low, int high, int level) {
    if(level == 0)
        return ;
    int mid = (low + high)/2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level-1);
    subdivide(ar, mid, high, level-1);
}
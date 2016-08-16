//
//  main.c
//  Fibonacci
//
//  Created by Chang Yu-hsiang on 2016/8/16.
//  Copyright © 2016年 Chang Yu-hsiang. All rights reserved.
//

#include <stdio.h>

int Fib(int n)

{

    if(n==0)return 0;
     else if(n==1)return 1;
    return Fib(n-1)+Fib(n-2);

}

int FibCount(int n)
{
    if(n==0)return 1;
    else if(n==1)return 1;
    return FibCount(n-1)+FibCount(n-2)+1;
}


int main(void) {
    // insert code here...
    int x, i;
    printf("請輸入數字：\n");
    scanf("%d",&x);
    printf("費氏數列為：\n");
    for(i=1;i<=x;i++)
    {
        printf("%d ",Fib(i));
    
    }
    printf("\nFibCount=%d\n",FibCount(x));
    return 0;
}

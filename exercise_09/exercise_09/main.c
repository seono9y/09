//
//  main.c
//  exercise_09
//
//  Created by 추서연 on 2023/11/05.
//      ΩsZ

#include <stdio.h>

#define N_STUDENT 5
int main(int argc, char *argv[1])
{
    int i;
    int a[N_STUDENT] = {1, 2, 3, 4, 5};
    int b[N_STUDENT] = {1, 2, 3, 4, 5};
    int flag = 0;
    
    for (i=0;i<N_STUDENT;i++)
    {
        if (a[i] != b[i])
        {
            printf("array a and b are not the same\n");
            flag=1;
        }
    }
    if (flag == 0)
            printf("array a and b are the same\n");
    
    return 0;
 }
      

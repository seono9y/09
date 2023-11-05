//
//  main.c
//  exercise_09
//
//  Created by 추서연 on 2023/11/05.
//

#include <stdio.h>

#define N_STUDENT 5
int main(int argc, char *argv[1])
{
    int i;
    int grade [N_STUDENT];
    printf ("input 5 scores:");
    for (i=0;i<N_STUDENT; i++)
        scanf ("%d", &grade[i]);
    
    for (i=0;i<N_STUDENT;i++)
        printf ("grade[%i] = %d\n", i, grade[i]);
    return 0;
 }

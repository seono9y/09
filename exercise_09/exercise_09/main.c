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
    int i, average;
    int sum;
    int grade [N_STUDENT];
    printf ("input 5 scores:");
    
    sum=0;
    for (i=0;i<N_STUDENT; i++)
    {
        scanf ("%d", &grade[i]);
        sum += grade[i];
    }
    
    average = sum / N_STUDENT;
    
        printf ("score average : %i\n", average);
    return 0;
 }

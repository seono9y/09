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
    int grade[N_STUDENT];
    int score[N_STUDENT];
    
    for(i=0;i<N_STUDENT;i++)
        score[i] = grade[i];
    
    for(i=0;i<N_STUDENT;i++)
        printf("score[%d] = %d (grade:%i)\n", i, score[i], grade[i]);
    
    return 0;
 }

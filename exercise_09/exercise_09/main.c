//
//  main.c
//  exercise_09
//
//  Created by 추서연 on 2023/11/05.
//      ΩsZ

#include <stdio.h>
#define ROWS   3
#define COLS   3

void addMAtrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
    //C = A + B : for loop
    for(int i=0; i< ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            C[i][j] = A[i][j]+B[i][j];
        }
    }
}
void printMAtrix(int A[][COLS])
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
    int main(int argc, char *argv[1])
    {
        int A[ROWS][COLS] = {
            {2, 3, 0},
            {8, 9, 1},
            {7, 0, 5}};
        
        int B[ROWS][COLS] = {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}};
        
        int C[ROWS][COLS];
        
        addMAtrix(A,B,C);
        printMAtrix(C);
        
        return 0;
    }
    
    

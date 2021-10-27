#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class transmitter {
public:
    int chip_sequence[8];

    transmitter(int *chip_sequence) {
        for (int i = 0;i < 8;i++) {
            this->chip_sequence[i] = chip_sequence[i];
        }
    }
    int* signal_to_be_sent(int input_bit) {
        // 1이 입력되었을 경우
        if (input_bit == 1) {
            return chip_sequence;
        }
        else {

        }
    }
};

class receiver {
public:
    int chip_sequence[8];

    receiver(int* chip_sequence) {
        for (int i = 0;i < 8;i++) {
            this->chip_sequence[i] = chip_sequence[i];
        }
    }
    int* translate(int received_sequence) {

    }
};


int main() {
    int t[4][8];

    int A, B, codeA[8], codeB[8], As[8], Bs[8], Cs[8], i, a = 0, b = 0;
    printf("Enter Data A : ");
    scanf("%d", &A);
    if (A == 0)
    {
        A = -1;
    }
    printf("Enter Data B : ");
    scanf("%d", &B);
    if (B == 0)
    {
        B = -1;
    }
    printf("\nEnter codeA : ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &codeA[i]);
        if (codeA[i] == 0)
        {
            codeA[i] = -1;
        }
    }
    printf("Enter codeB : ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &codeB[i]);
        if (codeB[i] == 0)
        {
            codeB[i] = -1;
        }
    }
    printf("\ncodeA : ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", codeA[i]);
    }

    printf("\ncodeB : ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", codeB[i]);
    }

    for (i = 0; i < 8; i++)
    {
        As[i] = A * codeA[i];
        Bs[i] = B * codeB[i];
        Cs[i] = As[i] + Bs[i];
    }

    printf("\nAs : ");
    for (i = 0; i < 8; i++)
    {
        printf(" %d", As[i]);
    }

    printf("\nBs : ");
    for (i = 0; i < 8; i++)
    {
        printf(" %d", Bs[i]);
    }

    printf("\n\nCs : ");
    for (i = 0; i < 8; i++)
    {
        printf(" %d", Cs[i]);
    }

    for (i = 0; i < 8; i++)
    {
        a = a + codeA[i] * Cs[i];
        b = b + codeB[i] * Cs[i];
    }

    if (a > 0) {
        printf("\nA : 1");
    }
    else {
        printf("\nA : 0");
    }

    if (b > 0) {
        printf("\nB : 1");
    }
    else {
        printf("\nB : 0");
    }
    _getch();
}
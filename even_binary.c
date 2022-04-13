#include<stdio.h>

int main (void)
{
    int input[10], ch=0, i=0, n;
    printf("enter length of input");
    scanf("%d", &n);
    printf("enter input");
    for(i=0; i<n; i++)
    {
        scanf("%d", &input[i]);
    }
    do {
        switch(ch) {
        case 0: if(input[i] == 0)
        ch=1;
        else
        ch=0;
        break;

        case 1: if(input[i] == 0)
        ch=1;
        else
        ch =0;
        break;
        }
        i++;
    }
    while(i<n);
    if(ch==1)
        printf("entered number is even binary");
    else
        printf("entered number is not even binary");
    return 0;
}
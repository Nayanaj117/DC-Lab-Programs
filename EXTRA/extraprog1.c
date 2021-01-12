#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();

void main()
{
    int i, choice;
    char s[MAX], b;
    while (1)
    {
        printf("1)Enter string\n2)Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the String\n");
            scanf("%s", s);
            for (i = 0;s[i] != '\0';i++)
            {
                b = s[i];
                push(b);
            }
            for (i = 0;i < (strlen(s) / 2);i++)
            {
                if (stack[top] == stack[front])
                {
                    pop();
                    front++;
                }
                else
                {
                    printf("THE WORDS SPELLED ARE DIFFERENT\n");
                    break;
                }
            }
            if ((strlen(s) / 2)==front)
                printf("THE WORDS SPELLED ARE SAME\n");
            front  =  0;
            top  =  -1;
            break;
        case 2:
            exit(0);
        default:
            printf("Enter correct choice\n");
        }
    }
}


void push(char a)
{
    top++;
    stack[top]  =  a;
}


void pop()
{
    top--;
}

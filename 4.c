#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ms 100

typedef struct
{
    char arr[ms];
    int top;
} stack;
 
void init(stack*s)
{
    s->top = -1
}

int isempty9(stack*s)
{
    return(s->top == -1)
}
void push(stack*s,char x)
{
    if(s->top == -1)
    {
        printf("stack overflow\n")
        return;
    }
    s->arr[++(s->top)] =x;
}

char pop(stack*s)
{
    if(s->top==-1)
    {
        return;
    }
    return s->arr[(s->top)--];
}

int ismatchingpair(char open,char close)
{
    if(open == '(' && close==')') return 1;
    if(open == '{' && close=='}') return 1;
    if(open == '[' && close==']') return 1;
    return 0;
}
int isbalanced(char *str)
{
    stack s;
    init(&s);

    for(int i=0; str[i] !='\0')
    {
        char ch= str[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            push(&s, ch);
        }
        else if (ch==')' || ch == ']')
    {
        if(isempty(&s))
        return 0;
         
        char top = pop(&s);

        if(!ismatchingpair)
    }
    
    }
    
}
int main()
{
    char str[100]
    printf("enter expression :");
    scanf("%s",str);

    if(isbalanced(str))
    printf("balanced paranthesis \n");
    else
    printf("not balanced\n");

    return 0;
}
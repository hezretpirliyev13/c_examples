#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXVAL 100
#define NUMBER '0'
#define BUFSIZE 100

char buf[BUFSIZE];
int sp = 0;
int bufp = 0;
double val[MAXVAL];

int getop(char c[]);
void push(double f);
double pop(void);

// Reverse Polish calculator
int main()
{
    int type;
    double op2, op1;
    char s[MAXVAL];

    while ((type = getop(s)) != EOF)
    {
        switch (type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            op2 = pop();
            op1 = pop();
            push(op1 + op2);
            break;
        case '-':
            op2 = pop();
            op1 = pop();
            push(op1 - op2);
            break;
        case '*':
            op2 = pop();
            op1 = pop();
            push(op1 * op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
            {
                op1 = pop();
                push(op1 / op2);
            }
            else
                printf("Error: Division by zero\n");
            break;
        case '\n':
            printf("%.8g\n", pop());
            break;

        default:
            printf("Error: Unknown character '%c'\n", type);
            break;
        }
    }
    return 0;
}
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error:stack empty\n");
        return 0.0;
    }
}
int getch(void)
{
    return bufp > 0 ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

// get next character or numeric operand

int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

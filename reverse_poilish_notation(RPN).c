#include <stdio.h>
#include <stdlib.h> // For atof()
#include <ctype.h>  // For isdigit()
#include <string.h> // For strcmp()

#define MAXSTACK 100
#define MAXLINE 100

double stack[MAXSTACK];
int stackPos = 0;

// Push a number onto the stack
void push(double val)
{
    if (stackPos < MAXSTACK)
        stack[stackPos++] = val;
    else
        printf("Error: Stack full, can't push %g\n", val);
}

// Pop a number off the stack
double pop(void)
{
    if (stackPos > 0)
        return stack[--stackPos];
    else
    {
        printf("Error: Stack empty\n");
        return 0.0;
    }
}

// Check if the string is a number
int isNumber(const char *s)
{
    if (*s == '-' || *s == '+')
        s++; // Handle negative/positive numbers
    int hasDigit = 0;
    while (*s)
    {
        if (isdigit(*s) || *s == '.')
        {
            hasDigit = 1;
        }
        else
        {
            return 0;
        }
        s++;
    }
    return hasDigit;
}

int main()
{
    char input[MAXLINE];

    printf("Enter RPN expression (e.g., '3 4 + 2 *'):\n");

    while (fgets(input, MAXLINE, stdin))
    {
        char *token = strtok(input, " \t\n");

        while (token != NULL)
        {
            if (isNumber(token))
            {
                push(atof(token)); // Convert string to double and push
            }
            else if (strcmp(token, "+") == 0)
            {
                double op2 = pop();
                double op1 = pop();
                push(op1 + op2);
            }
            else if (strcmp(token, "-") == 0)
            {
                double op2 = pop();
                double op1 = pop();
                push(op1 - op2);
            }
            else if (strcmp(token, "*") == 0)
            {
                double op2 = pop();
                double op1 = pop();
                push(op1 * op2);
            }
            else if (strcmp(token, "/") == 0)
            {
                double op2 = pop();
                if (op2 != 0.0)
                {
                    double op1 = pop();
                    push(op1 / op2);
                }
                else
                {
                    printf("Error: Division by zero\n");
                }
            }
            else
            {
                printf("Error: Unknown token '%s'\n", token);
            }

            token = strtok(NULL, " \t\n");
        }

        // At end of line, print result
        if (stackPos == 1)
        {
            printf("Result: %.8g\n", pop());
        }
        else if (stackPos > 1)
        {
            printf("Error: Too many operands\n");
            stackPos = 0; // Reset stack
        }
        else
        {
            printf("Error: No result to show\n");
        }

        printf("\nEnter another RPN expression (or Ctrl+D to exit):\n");
    }

    return 0;
}

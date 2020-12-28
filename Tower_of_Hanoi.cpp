//h is a header file in the standard library of the C programming language
#include <stdio.h> //stdio. h is the header file for standard input and output.
#include<math.h>  //math.h is designed for basic mathematical operations. Most of the functions involve the use of floating point numbers.

void towers(int, char, char, char); //function's prototype:declaring the property of a function to the compiler 
int main() //main
{
    int num,a,b;  
    //%s means any charactername(string)
    //%d means any integer number 
    //%c accepts the variable, not its address 
    printf("\nEnter the number of disks : "); //printf() function is used to print the (“character, string, float, integer, octal and hexadecimal values”) onto the output screen.
    scanf("%d", &num); //The scanf function allows you to accept input from standard in, which for us is generally the keyboard.
    a = pow(2,num); 
    b = a-1; 
    printf("The total number of moves used for moving the disks in the alternate pole is %d\n",b);
    printf("\nThe sequence of moves involved in the Tower of Hanoi are :\n"); 
    towers(num, 'A', 'C', 'B');
}
 
void towers(int num, char from, char to, char aux) //function's functionality
 
{
  if (num == 1)
    {
        printf("\n Move disk 1 from pole %c to pole %c\n", from, to);
        return;
    } 
    towers(num - 1, from, aux, to);
    printf("\n Move disk %d from pole %c to pole %c\n", num, from, to); 
    towers(num - 1, aux, to, from);
}


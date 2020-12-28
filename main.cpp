#include<stdio.h>

//function is basically a set of statements that takes inputs, perform some computation and produces output
//functions
void fillSrc();
void displaylevel(int level);
void display();
void push(int x); //adds item to the top
int pop(); //removes item from the top
int gameWinCondition();

//in structure different type of data items can be grouped together
struct pole
{
	//This makes stack the ideal data structure to be used as it follows the similar principle of Last in First Out (LIFO).
    int stack[3]; 
};

struct pole p[3]; //max poles

int top[3];
 
int main()
{
    top[2] = top [1] = -1;
    int win = 0;
    int x;
    fillSrc();
    display();
    printf("Tower of Hanoi\n");
    printf("Objective: Your goal is to insert the numbers into the third pole such that from top to bottom, they are in ascending order\n");
    printf("Rule: You cannot put an greater number above a smaller number at any point in the game\n");
    printf("Good luck!\n");
    while(win != 1) {
        x = pop();
        push(x);
        win = gameWinCondition();
        display();
    }
    printf("Congratulations, you win!\n");
}

//fill the source pole according to the number of disks
void fillSrc()
{
    p[0].stack[0] = 3;
    p[0].stack[1] = 2;
    p[0].stack[2] = 1;
    top[0] = 2;
}


//push to stack 
void push(int x)
{
	int pl;
    chooseWhereToPush: //label
    printf("Choose pole to push to: ");
    scanf("%d", &pl);
    printf("\n");
    if(p[pl].stack[top[pl]] > x || p[pl].stack[top[pl]]==0) { 
        top[pl]++;
        p[pl].stack[top[pl]] = x;
    }
    else {
        printf("Cannot push here. Try again.\n");
		//allows us to transfer control of the program to the specified label
        goto chooseWhereToPush; 
		
		
    }
}

int pop() {
    int pl, x;
    chooseWhereToPop:
    printf("Choose pole to pop from: ");
    scanf("%d", &pl);
    printf("\n");
    if(p[pl].stack[top[pl]] == -1) {
        printf("Pole empty, cannot pop. Try again.\n");
        goto chooseWhereToPop;
    }
    
    x = p[pl].stack[top[pl]];
    p[pl].stack[top[pl]] = 99;
    top[pl]--;
    return x;
}

//printing a single level (function is called by display())
void displaylevel(int level)
{
    int i;
    for(i=0; i<3; i++)
    {
        if(p[i].stack[level] == 99 || p[i].stack[level] == 0) {
        	printf("[0]\t");
        }
        else {
        	printf("[%d]\t",p[i].stack[level]);
        }
    }
    printf("\n");         
}    

//printing the stacks by calling displaylevel()
void display()
{
    
    int i;
    for(i=2; i>=0; i--)
    {
        displaylevel(i);
    }
}    


int gameWinCondition() {
    if(p[2].stack[0]==3 && p[2].stack[1]==2 && p[2].stack[2]==1) {
        return 1;
    }
    else {
        return 0;
    }
}

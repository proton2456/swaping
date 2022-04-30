#include <stdio.h>
int main()
{
    
printf("Pick an item ; \n1. Pizza\n2. Burger\n3. Pasta\n4 Sandwich.\n5 French fries");

int choice=0;
scanf("%d",&choice);

switch(choice)
{
    case 1:
    printf("Pizza-239");
    break;
    
    case 2:
    printf("Burger-129");
    break;
    
    case 3:
    printf("Pasta-179");
    break;
    
    case 4:
    printf("Sandwich-149");
    break;
    
    case 5:
    printf("Fench fries-99");
    break;
    default : printf("Its Invalid Choice");
    
}
}

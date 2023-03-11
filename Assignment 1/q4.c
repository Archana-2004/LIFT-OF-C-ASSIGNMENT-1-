#include<stdio.h>
int main(){
    int a,b;
    int op;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Enter your choice:\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1 : 
        printf("%d+%d=%d\n",a,b,(a+b));
        break;
    case 2 :
        printf("%d-%d=%d\n",a,b,(a-b));
        break;
    case 3 :
        printf("%d*%d=%d\n",a,b,a*b);
        break;
    case 4 : 
        if(b!=0){
        printf("%d/%d=%d\n",a,b,a/b);
         }
           else{printf("Number can't be divided\n");}
           break;

    
    default :
        printf("You entered a wrong choice\n");
        break;
    }
    return 0;
}

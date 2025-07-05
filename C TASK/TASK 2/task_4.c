#include<stdio.h>
int main(){
    int x, y;

    printf("enter the x y: ");
    scanf("%d%d",&x,&y);

    if (x>0 && y>0)
    {
       printf("1st quardrant") ;
    }
    else if (x<0 && y<0)
    {
       printf("3rd quardrant");
    }
    else if (x>0&&y<0)
    {
       printf("4th quardrant");
    }
    else if (x<0&&y>0)
    {
        printf("2nd quardrant");
    }
    else if (x==0&&y==0)
    {
        printf("point are in on orgin");

    }
    else{
        printf("unable to identify quardrant");
    }
    
    

    
    
    
    
}
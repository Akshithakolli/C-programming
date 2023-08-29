#include <stdio.h>
int main(){
int a,b,c,average;
printf("a:");
scanf("%d", &a);
printf("b:");
scanf("%d",&b);
printf("c:");
scanf("%d",&c);
average=a+b+c/3;
printf("%d\n",average);
if(average=85){
printf("High Achiever");
}
else if(average<85 && average>70){
printf("Pass");
}
else if(average<70){
printf("Needs improvement");
}

return 0;
}

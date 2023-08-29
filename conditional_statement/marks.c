#include <stdio.h>
int main(){
int a,b,c,avg;
printf("a:");
scanf("%d",&a);
printf("b:");
scanf("%d",&b);
printf("c:");
scanf("%d",&c);
avg=a+b+c/3;
if(avg>85){
printf("high achiever");
}
else if(avg>=70 && avg<=85){
printf("pass");
}
else if(avg<70){
printf("needs imrpovement");
}
return 0;
}


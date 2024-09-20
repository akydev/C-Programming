// pass or fail program.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the marks:");
    scanf("%d",&n);
  //  if(n>=40)
  //  {
//printf("You are pass");
  //  }
  //  else{
   //     printf("you are fail");
   // }
    (n>=40)? printf("you are pass"): printf("you are fail");
    return 0;
}

#include<stdio.h>
int main(){
    int pyhics,hindi,english,maths,chemistry;
    printf("Enter your five subject marks :");
    scanf("%d%d%d%d%d",&pyhics,&hindi,&english,&maths,&chemistry);

    float percentage=(pyhics+hindi+english+maths+chemistry)/5.0;

    printf("Percentage :%f\n",percentage);

    if (percentage>=60)
    {
        /* code */
        printf("A grade");
    }
    
    else if (percentage>=50)
    {
        /* code */
        printf("B grade");
    }

     else if (percentage>=40)
    {
        /* code */
        printf("c grade");
    }

     
   else {
        /* code */
        printf("D grade");
    }
    return 0;
}
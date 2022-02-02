#include<stdio.h>
int main(){
    int physics,chemistry,maths,english,hindi;
    printf("Enter physics marks, Enter Chemistry marks,Enter maths marks,Enter Emglish marks ,Enter hindi marks");
    scanf("%d%d%d%d%d",&physics,&chemistry,&maths,&english,&hindi);

    float total= (physics+chemistry+maths+english+hindi)/5;

    if(total<40){
        printf("Fail\n");
    }
    else {
        printf("pass ");
    }

return 0;
}
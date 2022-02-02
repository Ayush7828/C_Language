#include<stdio.h>
int sum(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;

    }
    return ans;
}
int main(){
    int n;
    printf("Enter a number \n");
    scanf("%n",&n);
    printf("answer is %d",sum(n));
    return 0;
}
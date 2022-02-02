#include<stdio.h>
int main(){
    int costprice,sellingprice;
    printf("Enter a cost price and selling price:");
    scanf("%d%d",&costprice,&sellingprice);

    if(sellingprice>costprice){
        int amount=sellingprice-costprice;
        printf("Profit \n",amount);
    }
      else if(costprice>sellingprice){
        int amount=costprice-sellingprice;
        printf("loss \n",amount);
    }
     else {
        
        printf("no profit and no loss \n");
    }

    return 0;
}
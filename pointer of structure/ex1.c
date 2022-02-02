#include<stdio.h>
struct Book{
  int bcode;
  char bname[10];
  int price,quantity,amount;

};
int main(){
	struct Book b1, *p;
	printf("Enter book code,book name,price,quantity,amount:");
	scanf("%d%s%d%d%d",&b1.bcode,b1.bname,&b1.price,&b1.quantity,&b1.amount);
	p=&b1;
	p->amount=p->price-p->quantity;
	printf("Book code:%d\n",p->bcode);
	printf("Book name %s\n",p->bname);
	printf("Book Price %d",p->price);
	printf("Book quantity %d",p->quantity);
	printf("Book amount %d",p->amount);
	return 0;
}
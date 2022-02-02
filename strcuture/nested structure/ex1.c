#include<stdio.h>
struct Voter{
      int vid;
	  char vname[10];
	  int age;

	  struct  Address
	  {
		  /* data */
		  int hno;
		  char colony[20];
		  char city[20];

	  }ad;
	  
};
int main(){
       struct Voter v1;
	   printf("Enter voter id ,name,age:");
	   scanf("%d%s%d",&v1.vid,v1.vname,&v1.age);

	   printf("Enter house no.,colony,city:");
	   scanf("%d%s%s",&v1.ad.hno,v1.ad.colony,v1.ad.city);

	   printf("Output:\n");
	   printf("Voter id:%d\n",v1.vid);
	   printf("Name %s\n",v1.vname);
	   printf("Age:%d\n",v1.age);

	   printf("House No.%d\n",v1.ad.hno);
	   printf("Colony %s\n",v1.ad.colony);
	   printf("City %s\n",v1.ad.city);
	   return 0;
}
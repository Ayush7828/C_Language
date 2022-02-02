#include <stdio.h>
struct Student
{
	int rno;
	char name[10];
	int marks;
};
int main()
{
	struct Student s1, s2;
	printf("Enter a first student roll no. ,name, marks:");
	scanf("%d%s%d", &s1.rno, s1.name, &s1.marks);

	printf("Enter a second student  roll no. ,name, marks:");
	scanf("%d%s%d", &s2.rno, s2.name, &s2.marks);

	printf("Roll no.=%d\n,Name=%s\n,Marks=%d\n", s1.rno, s1.name, s1.marks);
	printf("Roll no.=%d\n,Name=%s\n,Marks=%d\n", s2.rno, s2.name, s2.marks);

	return 0;
}
#include <stdio.h>

int main ()
{
	int staff ;
	int shelves ;
	int price ;
	int number ;
	int a=1 ;
	
	printf("����������������ࡢͨ����š����ﵥ�ۡ��������������A 3 7 5�� ") ;
	scanf("%c %d %d %d",&staff,&shelves,&price,&number);
	
	printf("%d: ",shelves);
	while(a<=number) {
		printf("%c",staff);
		a++;
	}
	printf(" %d",price);
	
	return 0; 
}


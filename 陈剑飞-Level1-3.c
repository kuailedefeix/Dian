#include <stdio.h>

int main () {
	int staff ;
	int shelves ;
	int price ;
	int number ;
	int n;
	int hhh = 0;
	
	do {
		printf("����������������ࡢͨ����š����ﵥ�ۡ��������������A 3 7 5�� ") ;
		scanf("%c %d %d %d",&staff,&shelves,&price,&number);
		//getchar�����������ˣ�Ҳ��������÷� 
	    getchar();
		printf("����������������ࡢͨ����š��������������A 3 1�� ") ;
		scanf("%c %d %d",&staff,&shelves,&n);
		
		while(n>number) {
			printf("���������Ʒ������㣬��ʣ%d������������������\n",n);
			scanf("%d",&n) ;
		}
		
		int money = price*n;
		int amount=0;
		int a;
		while(amount<money) {
			printf("��Ͷ��1Ԫ��2Ԫ��5Ԫ,�Ѿ�Ͷ��%dԪ\n ",amount );
			scanf("%d",&a);
			if(a==1 ||a==2 ||a==5){
				amount+=a;
			} else{printf("������������");
			}
			
		}
	    if (amount>=price) {
		    printf("����%dԪ\n",amount-price);
	    } 
	    printf("���Ҫ��������������1����֮����0 ");
	    scanf("%d",&hhh);
    } while (hhh=1); 
	return 0;
}

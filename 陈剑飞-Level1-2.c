#include <stdio.h>

int main ()
{
	int price;
	int amount= 0;
	int a ;
	
	printf("�������ܼۣ�");
	scanf("%d" ,&price); 
	
	while(amount<price) {
		printf("��Ͷ��1Ԫ��2Ԫ��5Ԫ,�Ѿ�Ͷ��%dԪ\n",amount );
		scanf("%d",&a);
		if(a==1 ||a==2 ||a==5){
			amount+=a;
		} else{printf("������������\n");
		}
		
	}
    if (amount>=price) {
	    printf("����%dԪ",amount-price);
} 
	
	return 0 ;
}

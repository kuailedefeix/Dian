#include <stdio.h>

int main ()
{
	int price;
	int amount= 0;
	int a ;
	
	printf("请输入总价：");
	scanf("%d" ,&price); 
	
	while(amount<price) {
		printf("请投币1元、2元或5元,已经投币%d元\n",amount );
		scanf("%d",&a);
		if(a==1 ||a==2 ||a==5){
			amount+=a;
		} else{printf("请重新输入金额\n");
		}
		
	}
    if (amount>=price) {
	    printf("找您%d元",amount-price);
} 
	
	return 0 ;
}

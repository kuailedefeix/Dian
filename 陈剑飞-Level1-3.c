#include <stdio.h>

int main () {
	int staff ;
	int shelves ;
	int price ;
	int number ;
	int n;
	int hhh = 0;
	
	do {
		printf("请依次输入货物种类、通道标号、货物单价、货物个数（例如A 3 7 5） ") ;
		scanf("%c %d %d %d",&staff,&shelves,&price,&number);
		//getchar处求助了他人，也不理解其用法 
	    getchar();
		printf("请依次输入货物种类、通道标号、所需个数（例如A 3 1） ") ;
		scanf("%c %d %d",&staff,&shelves,&n);
		
		while(n>number) {
			printf("您购买的物品存货不足，还剩%d个，请重新输入数量\n",n);
			scanf("%d",&n) ;
		}
		
		int money = price*n;
		int amount=0;
		int a;
		while(amount<money) {
			printf("请投币1元、2元或5元,已经投币%d元\n ",amount );
			scanf("%d",&a);
			if(a==1 ||a==2 ||a==5){
				amount+=a;
			} else{printf("请重新输入金额");
			}
			
		}
	    if (amount>=price) {
		    printf("找零%d元\n",amount-price);
	    } 
	    printf("如果要继续购买，请输入1；反之输入0 ");
	    scanf("%d",&hhh);
    } while (hhh=1); 
	return 0;
}

#include<stdio.h>
int main(){
	int number, result;
	printf("chon 1 so tu 1-9? ");
	scanf("%d", &number);
	for(int i=1;i<=10;i++){
		result=number*i;
		printf("%d *%d = %d\n",number,i,result);
	}
}

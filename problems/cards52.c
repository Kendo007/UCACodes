
#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);

	int m;
	scanf("%d",&m);


	if(m & 48 == n & 48){
		printf("Both the cards belong to the same suit\n");
	}

	int s=m & 15;

	int p =n & 15;
	if(s>p){
		printf("m is of bigger rank\n");
	}

	else if(p>s)
		printf("n is of bigger rank\n");
         

	else{
		printf("Both are of same rank\n");
	}

	
						

}

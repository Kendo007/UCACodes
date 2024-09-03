#include<stdio.h>


int solve(int n,int i,int j,int sum){

	if(i>=n){
		return sum;

	}


	if(i%2==0){
		sum+=i;
	}

	solve(n,i+j,i,sum);

}

int main(){

	int n;
	scanf("%d",&n);

	int i=1;
	int j=0;

	int ans=solve(n,i,j,0);

	printf("%d\n",ans);
}


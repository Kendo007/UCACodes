#include<stdio.h>

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void testcase(int arr[],int n){

	int arr2[]={1,2,3,4,5};

	for(int i=0;i<n;i++){
		if(arr[i]==arr2[i]){
			continue;
		}

		else{
			printf("testcase failed\n");

			return ;
		}

	}

	printf("testcases passed\n");

}



int main(){

	int arr[]={5,2,3,1,4};

	bubble_sort(arr,5);

	testcase(arr,5);
}




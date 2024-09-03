#include<stdio.h>


void insertion_sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void testcase(int arr[],int n){

	int arr2[]={1,2,3,4,5};

	for(int i=0;i<5;i++){
		if(arr[i]==arr2[i]){
			continue;
		}
		else{
			printf("Testcase failed\n");
			return ;
		}

	}

	printf("Testcase Passed\n");
}

int main(){

	int arr[]={5,3,2,1,4};

	insertion_sort(arr,5);
	testcase(arr,5);

}

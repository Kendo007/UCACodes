
#include <stdio.h>

void exch(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}   

void quick_sort(int arr[], int left, int right) {
    if(left >= right) return;

    int pivot = arr[left];
    int i = left + 1;

    for(int j = left+1; j <= right; j++) {
        if(arr[j] < pivot) {
            exch(arr, i++, j);
        }
    }

    exch(arr, left, --i);
quick_sort(arr, left, i-1);
    quick_sort(arr, i+1, right);
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
	int arr[]={2,4,5,1,3};

	quick_sort(arr,0,4);

	testcase(arr,5);
}



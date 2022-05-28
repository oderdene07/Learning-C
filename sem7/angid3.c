#include <stdio.h>
int pallindrome(int arr[100], int n){
	int i, j, flag = 0;
	for(i = 0, j=n-1; i< n/2, j>=n/2; i++, j--){
    	if(arr[i]!=arr[j]){
        	flag = 1;
        	break;
		}
	}
	if (flag == 1)
		return 0;
	else
		return 1;
}

int main(){
	int n, i, arr[100];
    printf("1-100 giin hoorond too oruulna uu: ");
	scanf("%d", &n);
    for(i = 0 ; i < n; i++) {
    	printf("too oruulna uu :");
    	scanf("%f", &arr[i]);
    }
	if(pallindrome(arr, n)) {
		printf("Tegsh hemtei\n");
	}
	else
		printf("Tegsh hemgui\n");
	
	return 0;
}



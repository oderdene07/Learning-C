#include <stdio.h> 
   
void read(int a[], int n);
void print(int a[], int n);
int maximum(int arr[], int n);


int  main() {
	int a[5],b[3];
	int c, d;
	printf("1-r husnegtiin toog oruulna uu: ");
	read(a,5);
	printf("2-r husnegtiin toog oruulna uu: ");
	read(b,3);
	c=maximum(a, 5); 
	d=maximum(b, 3);
	if(c>d)
		printf("1-r husnegt hamgiin tom too aguulj bn: %d", c);
	else
		printf("2-r husnegt hamgiin tom too aguulj bn: %d", d);
    return 0; 
}

void read(int a[] , int n){
    int i;
    for (i = 0; i < n; i++)
    	scanf("%d", &a[i]);
}
void print(int a[] , int n){
    int i;
    for (i = 0; i < n; i++)
    	printf("%d ", a[i]);
}

int maximum(int arr[], int n){ 
    int i; 
	int max= arr[0];
     
    for (i = 0; i < n; i++){ 
        if (arr[i] > max) { 
            max = arr[i]; 
        } 
    }
	return max; 
}

#include <stdio.h>
int main(){
   int i, n, j = 0;
   printf("toog oruulna uu: ");
   scanf("%d", &n);
   for(i=1; i<=n; i++){
      if(n%i==0)
    	j++;
   }
   if(j==2){
      printf("%d anhnii too",n);
   }
   else
	printf("%d anhnii too bish",n);
}

#include <stdio.h>
int main() {
    int n;
    int count = 0;
    printf("Too oruulna uu: ");
    scanf("%d", &n);
    while (n != 0) {		// n=0 bish baih ued doorh uideliig gutsetgene
        n = n / 10;			//n gesen garaas avsan toog 10-d huvaana n=0 boltol urgeljlen
        count++;			//huvaah bolgond count utgad 1 eer nemegdeh bolno	
    }

    printf("Oruulsan toonii oron: %d", count);		//count-iig hevlene
}

#include <stdio.h>

void multiplyMatrices(int first[10][10],
                      int second[10][10],
                      int result[10][10],
                      int r1, int c1, int r2, int c2) {

   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}

int main() {
   int first[10][10]; 
   int second[10][10]; 
   int result[10][10]; 
   int r1, c1, r2, c2;
   
   
   printf("1-r matrixiin hemjee: ");
   scanf("%d", &r1);
   printf("1-r matrixiin hemjee: ");
   scanf("%d", &c1);
   printf("2-r matrixiin hemjee: ");
   scanf("%d", &r2);
   printf("2-r matrixiin hemjee: ");
   scanf("%d", &c2);


   printf("\n1r matrixiin toog oruulna uu: \n");

   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c1; ++j) {
         printf("%d %d -r element: ", i + 1, j + 1);
         scanf("%d", &first[i][j]);
      }
   }

   printf("\n2r matrixiin toog oruulna uu: \n");

   for (int i = 0; i < r2; ++i) {
      for (int j = 0; j < c2; ++j) {
         printf("%d %d -r element: ", i + 1, j + 1);
         scanf("%d", &second[i][j]);
      }
   }

   multiplyMatrices(first, second, result, r1, c1, r2, c2);

   printf("\nHariu:\n");
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         printf("%d  ", result[i][j]);
         if (j == c2 - 1)
            printf("\n");
      }
   }

   return 0;
}

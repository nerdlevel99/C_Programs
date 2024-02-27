#include <stdio.h>
#include <math.h>

#define ROWS 3
#define COLS 3

int main() {
   int i, j, k, rank=0, singular = 0;
   float mat[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // example matrix

   // Applying Gaussian Elimination
   for(i=0; i<COLS; i++) {
      int max_row = i;
      for(j=i+1; j<ROWS; j++) {
         if(fabs(mat[j][i]) > fabs(mat[max_row][i])) {
            max_row = j;
         }
      }

      // Swap the rows with maximum element
      for(k=i; k<COLS; k++) {
         float temp = mat[i][k];
         mat[i][k] = mat[max_row][k];
         mat[max_row][k] = temp;
      }

      // Reduce the matrix using row operations
      for(j=i+1; j<ROWS; j++) {
         float factor = mat[j][i]/mat[i][i];
         for(k=i; k<COLS; k++) {
            mat[j][k] -= factor * mat[i][k];
         }
      }
   }

   // Checking for singularity and calculating rank
   for(i=0; i<ROWS; i++) {
      int all_zero = 1;
      for(j=0; j<COLS; j++) {
         if(mat[i][j] != 0) {
            all_zero = 0;
            break;
         }
      }
      if(all_zero && mat[i][COLS-1] != 0) {
         singular = 1;
      }
   }
   if(singular) {
      rank = COLS-1;
   }
   else {
      rank = ROWS;
      for(i=0; i<ROWS; i++) {
         int all_zero = 1;
         for(j=0; j<COLS; j++) {
            if(mat[i][j] != 0) {
               all_zero = 0;
               break;
            }
         }
         if(all_zero) {
            rank--;
         }
      }
   }

   // Printing the rank
   printf("Rank of the matrix: %d", rank);

   return 0;
}

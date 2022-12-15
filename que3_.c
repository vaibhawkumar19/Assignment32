/*3.  Find all the Saddle points of a matrix.
*Note: Saddle point M(i, j) of a matrix M, is the smallest element in row 'i' and largest element in column 'j' .
Input – Total number of rows and columns and elements of the matrix
Output – Message ‘Saddle Point does not exist” or all the Saddle Points*/

#include<stdio.h>
void getMatrixData( int r, int c,int arr[][c])
{
	int i,j;
	for(i = 0; i<r; i++){
    for(j = 0; j<c; j++){
    printf("Enter data of Matrix[%d][%d]\n",i,j);
    scanf("%d",&arr[i][j]);
    }
  }
}
void printMatrixData(int r, int c,int arr[][c])
{
	int i,j;
  	printf("Matrix is \n");
  	for(i = 0; i<r; i++){
    for(j = 0; j<c; j++){
    printf("%d   ",arr[i][j]);
    }
    printf("\n");
  	}
}
  int findSaddle(int r, int c, int arr[][c]){
  int min=0, max = 0;
  int index =0;
  int k = 0,status = -1;
  int i,j;
  for(i = 0 ; i<r; i++){
    min = arr[i][0];
    for( j = 0; j<c; j++){
       
       if(arr[i][j]<min){
        min = arr[i][j];
        index = j;
       }

    }
   for(k =0; k<r; k++){
    if(min <arr[k][index]){
      break;
    }
   }
   if(k == r){
    printf("\nSaddle is %d",min);
    status = 1;
   }
  }
  return status;
}
int main(){
  int row,col;
  printf("Enter row, col of Matrix:\n");
  scanf("%d%d",&row,&col);
  int arr[row][col];
  getMatrixData(row,col,arr);
  printMatrixData(row,col,arr);

  int status = findSaddle(row,col,arr);
   if(status == -1){
    printf("No Saddle found\n");
   }
  return 0;
}

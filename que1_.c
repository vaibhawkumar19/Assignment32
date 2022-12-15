/*1. Compute address of matrix using Row-Major and Column-Major Addressing.
Input – Choice of row major or column major, Choice of all address calculation or specific address calculation, Total number of 
rows and columns, Actual row and column number to calculate the address, Data type of the array

Output – Address of all elements or Address of specific calculation*/
#include<stdio.h>
#include<stdlib.h>

void getMatrixData( int r, int c,int arr[][c]){
  
  int i,j;
  for( i = 0; i<r; i++){
    for( j = 0; j<c; j++){
      printf("Enter data of Matrix[%d][%d]\n",i,j);
        scanf("%d",&arr[i][j]);
    }
  }
}

void printMatrixData_rowMajor(int r, int c,int arr[][c]){
	int i,j;
  printf("Row Major Matrix is \n");
  for(i = 0; i<r; i++){
    for(j = 0; j<c; j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}

void printMatrixData_colMajor(int r, int c,int arr[][c]){
int i,j;
  printf("Col Major Matrix is \n");
  for( i = 0; i<r; i++){
    for( j = 0; j<c; j++){
      printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
}

int typeMenu(){
  int choice = 0;
  printf("Choose Data type:\n");
  printf("1.CHAR\n");
  printf("2.FLOAT\n");
  printf("3.INT\n");
  printf("4.DOUBLE");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1:
    return sizeof(char);
  case 2:
    return sizeof(float);
    break;
  case 3:
    return sizeof(int);
    break;
  case 4:
    return sizeof(double);
    break;
  default:
    return -1;
    
  }
}
void rowMajorAddress(int r, int c,int arr[][c]){

  int baseAdd =0;
  int destRow, destCol;


  printf("\n\nRow Major Address Calculation.\n");
  int typeSize = -1;
  typeSize = typeMenu();
  if(typeSize == -1){
    printf("Enter Valid Choise.\n");
  }else{
  printf("Enter Base address:\n");
  scanf("%d",&baseAdd);

  printf("Enter row,col to get Col Major address calculation:\n");
  printf("Row: ");
  scanf("%d",&destRow);
  printf("\nCol:");
  scanf("%d",&destCol);
   if(destRow <= r && destCol <= c){
      int address = baseAdd + (destCol*r + destRow)*typeSize;
      printf("\nAddress  is %d",address);
   }else{
    printf("Enter valid Row Col");
   }
  
  }
  
}

void colMajorAddress(int r, int c,int arr[][c]){

  int baseAdd =0;
  int destRow, destCol;

  printf("\n\nCol Major Address Calculation.\n");
  int typeSize = -1;
  typeSize = typeMenu();

  if(typeSize == -1){
    printf("Enter Valid choice.\n");
  }else{
  printf("Enter Base address:\n");
  scanf("%d",&baseAdd);

  printf("Enter row,col to get Row Major address calculation:\n");
  printf("Row: ");
  scanf("%d",&destRow);
  printf("\nCol:");
  scanf("%d",&destCol);
  if(destRow <= r && destCol <= c){
    int address = baseAdd + (destRow*c + destCol)*typeSize;
    printf("\nAddress  is %d",address);
  }else{
    printf("Enter valid Row, Col.\n");
  }
  
  }
}

int main(){
  int dimension,row, col;
  int choice = 0;
  printf("Enter row, col of Matrix:\n");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  getMatrixData(row,col,matrix);
  printMatrixData_rowMajor(row,col,matrix);
  printMatrixData_colMajor(row,col,matrix); 
  rowMajorAddress(row,col,matrix);
  colMajorAddress(row,col,matrix); 
  return 0;
}

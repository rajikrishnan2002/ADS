#include<stdio.h>
#include<conio.h>
int main()
 {
int arr1[50],arr2[50],size1,size2,i,k,merge[100];
clrscr();
printf("enter array1 size\n");
scanf("%d",&size1);
printf("enter array1 elements\n");
for(i=0;i<size1;i++)
 {
  scanf("%d",&arr1[i]);
  merge[i]=arr1[i];
 }
 k=i;
 printf("enter array2 size\n");
 scanf("%d",&size2);
 printf("enter array2 elements\n");
 for(i=0;i<size2;i++)
  {
   scanf("%d",&arr2[i]);
   merge[k]=arr2[i];
   k++;
  }
  printf("\nthe new array after merging is\n");
  for(i=0;i<k;i++)
  printf("%d",merge[i]);
  getch();
  return 0;
 }
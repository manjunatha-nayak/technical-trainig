#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[5],i;
   printf("\nenter static array elements:");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\nenter static array elements:");
   for(i=0;i<5;i++)
   {
       printf("%d",a[i]);
   }
   int n1;
   printf("\nenter the  number of elemnts for the dynamic array:");
   scanf("%d", n&n1);
   int *b=(int*)malloc(n1*sizeof(int));
   if(b==NULL)
   {
       printf("\nmemory allocation failed");
       return 0;
   }
  printf("\nenter the  number of elemnts for the dynamic array:");
  for(i=0;i<n1;i++)

  {

      printf("%d\t",b[i]);
  }
  int n2;
  printf("\nenter new size of dynamic array:");
  scanf("%d",&n2);
  b=(int*)realloc(b,n2*sizeof(int));
  if(n2>n1)
  {
      printf("\nenter %d more elements to fill resized dynamic arrray:\n",n2-n1);
      for(i=n1;i<n2;i++)
      {
          scanf("%d",&b[i]);
      }
  }

  printf("\n resized dyanmic array elements :\n");
  for(i=0;i<n2;i++)
  {
      printf("%d",b[i]);

  }
  printf("\n");
  free(b);
  return 0;
}

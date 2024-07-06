#include <stdio.h> 

void showDD2(int *v, int n)
{
  int i,j,isDom;
  for (i=0;i<n;i++) {
    isDom=1;
    for (j=i+1;j<n;j++)
      if (v[i]<=v[j]) isDom=0;
    if (isDom==1) printf("%d ",v[i]);
  }
}
//
void showDDn(int *v, int n)
{
   int bigger=v[n-1];
   int i;
   printf("%d ",bigger);
   for (i=n-2;i>=0;i--)
     if (v[i]> bigger) {
       printf("%d ",v[i]);
       bigger=v[i];
     }
}

int main(void) {
  int v[11]={10, 9, 5, 13, 2, 7, 1, 8, 4, 6, 3};
  showDD2(v,11);
  printf("\n=====\n");
  showDDn(v,11);
  return 0;
}
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
  printf("\n");
}

int binSRCH(int *v, int size, int n) {
    int start = 0, end = size, half = (end+start)/2;
    while(start <= end){
      printf("Half = %d\n", half);
        if (v[half] == n) {
            break;
        }
        if (v[half] > n) {
            end = half-1;
            half = (end+start)/2;
        } else {
            start = half+1;
            half = (end+start)/2;
        }
    }
    if (v[half] != n) {
        return -1;
    } else {
        return half;
    }
}
 
int main(void) {
  int v[11]={10, 9, 5, 13, 2, 7, 1, 8, 4, 6, 3};
  int v2[11]={1,2,3,5,6,9,10,15,22,40,80};
  int pos;
  showDD2(v,11);
  printf("\n=====\n");
  showDDn(v,11);
  pos = binSRCH(v2, 11, 22);
  printf("Posição: %d\nValor: %d\n", pos, v2[pos]);
  return 0;
}
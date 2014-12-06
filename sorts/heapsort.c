#include <stdio.h>


void halda(int h[],int n,int k){
  int j,r;
  r=h[k];
 while(k<=n/2){
   j=k+k;
   if (j<n && h[j]>h[j+1]) j++;
   if(r<=h[j]) break;
   h[k]=h[j];k=j;
   }
  h[k]=r; 
 }  
void heapsort(int h[],int n){
  int k,t;
  for(k=n/2; k>=1;k--) halda(h,n,k);
 while(n>1){
  t=h[1]; h[1]=h[n]; h[n]=t;
  halda(h,--n,1);
 }
}

int main(){
  int i,pocet;
  int pole[21];
  int cislo;
  printf("Zadajte pocet cisel k zotriedeniu: (max 20)\n");
  scanf("%d",&pocet);
      for(i=1;i<=pocet;i++) {
	printf("Zadajte cislo do pola \n");
	scanf("%d",&cislo);
	pole[i]=cislo;


      }
 heapsort(pole,pocet);
 printf("Zotriedene poole: \n");
 for(i=1;i<=pocet;i++)
	printf("%d\n",pole[i]);
 getchar();
return(0);





}

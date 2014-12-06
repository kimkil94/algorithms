#include <stdio.h>

//selectsort

void select(int p[],int n){
	int i,j,k;
	int x;
     for(i=0;i<n-1;i++){ //cyklus prejde kazde cislo z pola
	k=i;             //k-testovacie cislo sa nastavi na hodnotu i-teho prvku
	x=p[i];
    // printf("x rovne: %d\n",x);
     for(int c=0;c<n;c++){
        
        printf(" %d",p[c]);
        
        }            //x=testovacia premenna s ktorou dalsi for prejde celu mnozinu
	printf("x rovne: %d\n",x);

     for(j=i+1;j<n;j++)    
	 if(p[j]<x){
	k=j;
	x=p[j];
	}

      p[k]=p[i];
      p[i]=x;
	}
   
  for(int b=0;b<n;b++){
    printf("%d ",p[b]);
  }

}

void InsSort(int p[],int n){
int i,j;
for(i=2;i<=n;i++){
	p[0]=p[i];
	j=i-1;
//	printf("prvok p :%d\n",p[0]);
	 printf("\n");
	 printf("PRVOK p[0]=%d ",p[0]);
	 for(int c=1;c<=j;c++){
            
         printf("%d ",p[c]);
                }
	while(p[0] < p[j]){
	  p[j+1]=p[j];
	  j--;
	 
	}

	p[j+1]=p[0];

}

}
void bubble(int p[],int n){
	int i,j;
	int x;
    for(i=1;i<n;i++){
     printf("\n");
//     for(int c=0;c<n;c++){ printf("%d ",p[c]); }
     for(j=n-1;j>=i;j--){
        //printf("%d",p[5]);
        if(p[j-1] > p[j]){

		x=p[j-1];
		p[j-1]=p[j];
		p[j]=x;
            


          printf("Xje: %d\n",x);
	  for(int c=0;c<n;c++){ printf("%d ",p[c]); }

	   }
	

}


printf("%d",x);


    }
for(int c=0;c<n;c++){ printf("%d ",p[c]); } 
}

void merge(int p[],int q[],int l,int r){
int i,s,j,k;
s=(l+r)/2;
if(l<s) merge(p,q,l,s);
if(s+1<r) merge(p,q,s+1,r);
/*zlucovanie usekov*/
i=l; j=s+1;k=l;
while((i<=s)&&(j<=r)){
  if(p[i]<=p[j])
	q[k]=p[i++];
  else
	q[k]=p[j++];
  k++;
}
while(i<=s){
  q[k]=p[i++];k++;
}
while(j<=r){
q[k]=p[j++]; k++;
}
/*Preniesieme zotriedeny ysek spat z q do p*/
printf("\n");
for(k=1;k<=r;k++){
    p[k]=q[k];

printf("%d ",p[k]);}

}

int main(){

int n=10;
int p[9]={12,15,62,83,34,11,13,19,8};
int f[9];
//printf("SELECT-SORT:\n ");
//select(p,n);
//printf("\n");
//printf("INSERT-SORT\n");
//InsSort(p,n);
//printf("\n");
//printf("BUBBLE-SORT\n");
//bubble(p,n);
printf("\n");
merge(p,f,1,9);

}

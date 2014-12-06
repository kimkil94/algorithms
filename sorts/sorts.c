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
     for(j=n-1;j>=i;j--){
        if(p[j-1] > p[j]){
		x=p[j-1];
		p[j-1]=p[j];
		p[j]=x;


	   }

	}




    }
for(int c=0;c<n;c++){ printf("%d ",p[c]); } 
}



int main(){

int n=10;
int p[9]={1,5,6,8,3,11,13,19,0};
printf("SELECT-SORT:\n ");
select(p,n);
printf("\n");
printf("INSERT-SORT\n");
InsSort(p,n);
printf("\n");
printf("BUBBLE-SORT\n");
bubble(p,n);
printf("\n");


}

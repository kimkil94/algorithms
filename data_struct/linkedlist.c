#include <stdio.h>
#include <stdlib.h>

struct record{
	struct record *next;
	int prvok;


};
int n;
typedef struct record zaznam;
zaznam *p;
zaznam *q;
int Create(int a[],int n);
void pruchod(zaznam * p);
void releas(zaznam * p);
int Create(int a[],int n){
/**vytvori lin. zoznam s hodnotamy prevzatymi z pola a*/
	int i;
	/*p ukazuje na zaciatok zoznamu*/
	p=NULL;
	for(i=0;i<n;i++){

	q=(zaznam*) malloc(sizeof(zaznam));
	/**pridelenie pamate vracani pointer pretypujeme*/
        if(q!=NULL){
	 q->prvok=a[i];
	 q->next=p;
	 p=q;
 	}
	else return 1;
 }
return 0;
}

void prechod(zaznam *p) /*vypise hodnoty ulozene v lin. zozname*/
{
  while(p!=NULL){
  	printf("%d\n",p->prvok);
	p=p->next;

  }
  getchar();
}

void release(zaznam *p) //uvolni pridelenu pamat
{
   while(p!=NULL){
	 q=p->next;
	 free(p);
	 p=q;
    }
}

int main(){
 int a[9]={8,5,6,2,9,1,3,7,4};
 int n=9;
 p=NULL;
 if(Create(a,n) !=1)
  prechod(q);
  release(q);
 return 0;
}

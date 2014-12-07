#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct uzol{
	struct uzol *lavy, *pravy;
	int prvok;
	int pocet;
	int level;
}uzol;

struct uzol *p;
struct uzol *q,*u;

int x;
int jeste;
//funkcia pre ulozenie zaznamu do stromu
int uloz(){
	q=(struct uzol *) malloc(sizeof(struct uzol));
	if(q==NULL) return 1;
	q->lavy=NULL;q->pravy=NULL;
	q->prvok = x; q->pocet=1;jeste=0;
	return 0;

}
int BinTree(int x)/*funkcia pre vytvorenie binarneho vyhladavacieho stromu*/
{
	jeste=1;
	if(p==NULL){
	 if(uloz()==1) return 1;
	 p=q;
	 p->level=0;

	}
	else
	u=p;
	while(jeste){
		if(u->prvok==x){
		  u->pocet=u->pocet +1;jeste=0;
		 }
		else{
		  if(u->prvok>x){
		   if(u->lavy !=NULL) u=u->lavy;
                   else{
                     if(uloz()==1) return 1;
		     q->level=u->level +1;
		     u->lavy=q;  

		     }
	
		     }
                  else{ /*u->prvok <x */
			if(u->pravy!=NULL) u=u->pravy;
     			else
			{
			  if(uloz()==1)return 1;
			 q->level=u->level+1;
			 u->pravy =q;


			}


		     }

		}




	}



return 0;

}

void Tisk(struct uzol *p)
{
	printf("%4d %4d %4d\n",p->prvok,p->pocet,p->level);
	if(p->lavy!=NULL)
	Tisk(p->lavy);
	if(p->pravy!=NULL)
	Tisk(p->pravy);
}	
void Zrus(struct uzol *p){
	if(p->lavy!=NULL)
	  Zrus(p->lavy);
	if(p->pravy!=NULL)
	  Zrus(p->pravy);
	free(p);
}


int main(){
 p=NULL;
 int i;
 int pole[11]={5,8,2,2,7,1,4,6,9,10,3};
 for(i=0;i<11;i++)
 {
	x=pole[i];
	if(BinTree(x)==1){
	 printf("Nedostatok pamate\n");
	 return 1;
	}
 }
/*inicializacia generatora nahodnych cisel srand*/
/*
for(i=1li<KOLKO;i++){
	x=rand()%KOLIK +1;
	if(BinTree(x)==1){
	 printf("NENI PAMAT MORE!");
	 return 1;
         }
}*/
printf("BInarny strom - prechod do hlbky\n");
printf("Kluc pocet uroven\n");
Tisk(p);
scanf("%d",&i);
Zrus(p);
return 0;


}
















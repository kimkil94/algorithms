#include <stdio.h>

int search(int p[],int pocet,int prvok){
 int i,dmez,hmez;
 dmez=0;
 hmez=pocet-1;
 i=(dmez+hmez)/2;
while((dmez<=hmez) && (prvok!=p[i])){
   if(prvok<p[i])
     hmez=i-1;
   else dmez=i+1;
i=(dmez+hmez)/2;
}
if(dmez>hmez) return -1;
else return i;
}

int main(){
int p[11]={1,2,3,4,5,6,7,8,9,10,11};
int n=11;

printf("Prvok sa nachadza na pozicii: %d ",search(p,n,10));


}

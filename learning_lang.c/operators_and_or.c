#include<stdio.h>

int main(){
    int i=-1, j=-1, k=0, n=2, m;
    m= n++ || i++ && j++ && k++ ;
    printf("%d %d %d %d %d\n",i,j,k,n,m);
    //if || is used then we have to make sure that atleast one cond satisfies (check from left to right
    //and once if one cond satisfies we dont need to satisfy he rest)
int p=-1, q=-1, r=0, s=2, t;
    t=  p++ && q++ && r++ || s++ ;
    printf("%d %d %d %d %d\n",p,q,r,s,t);
    //if && is used then we have to satisfy all given conditions 
    return 0;
}
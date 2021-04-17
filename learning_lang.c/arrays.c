#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ans =0;
    for(int i=0; i< n; i++){
        int a,b,c;
        scanf("%d $d $d", &a, &b, &c);
        if(a&&b || b&&c || c&&a){
            ans++;
        }
    }
    return 0;
}
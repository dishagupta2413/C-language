#include<stdio.h>

int main(){
    char ch[5]={'a','e','i','o','u'};
    int c[5]={0};
    int i=0;
    while(sizeof(ch)==5){
        scanf(" %c",&ch[i]);
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            if(ch[i]=='a'){
                c[0]++;
            }
            else if(ch[i]=='e'){
                c[1]++;
            }
            else if(ch[i]=='i'){
                c[2]++;
            }
            else if(ch[i]=='o'){
                c[3]++;
            }
            else if(ch[i]=='u'){
                c[4]++;
            }
        }
        else{
            break;
        }
        i++;
    }
    for(int j=0;j<5;j++){
        printf("The number of times %c was printed is %d\n",ch[j],c[j]);
    }
    return 0;
}
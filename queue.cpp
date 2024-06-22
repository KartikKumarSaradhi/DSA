#include<stdio.h>
#define MAXq 5
int LQ[MAXq];
int f = -1;
int r =-1;
void qinsert(int x){
    if(r==MAXq-1){
        printf("LQ Overflow");
        return;
    }
    if(f==-1 && r==-1){
        f=0;
        r=0;
    }
    else
        r=r+1;
    LQ[r] = x;
}
void qdelete(){
    if(f==-1 && r == -1){
        printf("Queue Empty");
        return;
    }
    printf("Deleted element will be %d",LQ[f]);
    if(f==r){
        f==-1;
        r==-1;
    }
    else{
        f=f+1;
    }
}
void qdisplay(){
    if(f==-1 && r==-1){
        printf("Queue Empty");
    }
    for(int i=f;i<=r;i++){
        printf("%d\n  ",LQ[i]);
    }
}
void main(){
    int op,x;
    int ans = 1;
    while(ans==1){
        printf("\n1. Queue Insertion\n2. Queue Deletion\n3.Queue Display\n");
        printf("Input op\n");
        scanf("%d",&op);
        switch(op){
            case 1 :printf("Input x");
                    scanf("%d",&x);
                    qinsert(x);
                    break;
            case 2 :qdelete();
                    break;
            case 3 :qdisplay();
                    break;
            default : printf("Enter a valid option");
        }
    }
    printf("Do you want to continue");
    scanf("%d",&ans);
}

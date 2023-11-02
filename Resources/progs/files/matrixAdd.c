#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/shm.h>

  int main() {
    int p,k,i,n,l,m,*c;
    int*a,*b;
    printf("enter the order of matrix");
    scanf("%d",&n);
    k=shmget(IPC_PRIVATE,n*sizeof(int),00700);
    a=(int*) shmat(k,0,0);
    l=shmget(IPC_PRIVATE,n*sizeof(int),00700);
    b=(int*) shmat(k,0,0);
    m=shmget(IPC_PRIVATE,n*sizeof(int),00700);
    c=(int*) shmat(k,0,0); printf("enter the elements of a");
    for(i=0;i<n*n;i++) {
      scanf("%d",(a+i));
    }
    printf("enter the elements of b");
    for(i=0;i<n*n;i++) {
      scanf("%d",(b+i));
    }
    p=fork();
    if(p==0) {
    for(i=0;i<(n*n)/2;i++) {
    *(c+i)=*(a+i)+*(b+i);
    }
    printf("matrix addition");
    for(i=0;i<n*n;i++) {
      printf("%d\t",*(c+i));
    }
    if(p!=0) {
      for(i=(n*n)/2;i<n*n;i++) {
        *(c+i)=*(a+i)+*(b+i);
      }
    }
    for(i=0;i<n*n;i++) {
      printf("%d\t",*(c+i));
    }
    return 0;
    }
}
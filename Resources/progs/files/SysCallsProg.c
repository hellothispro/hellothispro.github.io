#include<stdio.h>

  main(int arc,char*ar[]) {
    int pid;
    char s[100];
    pid=fork();
    
    if(pid<0) {
      printf("error");
    }
    else if(pid>0) {
      wait(NULL);
      printf("\n Parent Process:\n");
      printf("\n\tParent Process id:%d\t\n",getpid()); execlp("cat","cat",ar[1],(char*)0);
      error("can’t execute cat %s,",ar[1]);
    }
    else {
      printf("\nChild process:");
      printf("\n\tChildprocess parent id:\t %d",getppid());
      sprintf(s,"\n\tChild process id :\t%d",getpid()); wsrme(1,s,strlen(s)); printf(" ");
      printf(" ");
      printf(" ");
      execvp(ar[2],&ar[2]);
      error("can’t execute %s",ar[2]);
    }
}
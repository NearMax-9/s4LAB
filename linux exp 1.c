#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
    pid_t pid;
    pid = fork();
    printf("hello world\n");

}
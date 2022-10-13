// file management in c
#include<stdio.h>
int main()
{
    FILE *fp;
    // fp = fopen("C:/user/SQW014/Desktop/lib/skill.text","+w");
    fp = fopen("fskill.txt","w+");
    fprintf(fp,"Welcome to skill qode - Decode your skill here...\n");
    fputs("you entring to learning C language now...\n",fp);
    fputs("And C++ language now...\n",fp);
    fclose(fp);
}


/*
r => open a text file to read mode
w => open a text file to write mode
a => open a text file to append mode
*/
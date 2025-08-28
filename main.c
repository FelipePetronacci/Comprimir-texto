#include<stdio.h>

int main(int argc, char* argv[]){
    FILE *fp;
    char *filename= argv[1]; 
    fp = fopen(filename ,"r");
    char c, pc = 0;
    int count = 1;
    while((c = fgetc(fp)) != EOF){
        if(c != pc){
            if(count > 1) printf("%d",count);
            putchar(c);
            count = 1;
        } else{
            count++;
        }
        pc = c;
    }
    if (count > 1) printf("%d", count);
    fclose(fp);
}
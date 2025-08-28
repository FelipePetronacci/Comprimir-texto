#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char *filename= argv[1]; 
    fp = fopen(filename ,"r");
    char buffer[1025];
    while(fgets(buffer, 1025, fp) != NULL){
        for(int i; buffer[i] != EOF; i++){
            if(buffer[i] > 96 && buffer[i] < 123){

            } else if(buffer[i] > 48 && buffer[i] < 58) {
                for (int i = 0; i < (buffer[i] - '0'); i++){
                    putchar(buffer[i-1]);
                }
                
            }
        }
        
        
    }
}
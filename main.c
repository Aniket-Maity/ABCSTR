#include<stdio.h>
#include <string.h>
#include <stdint.h>
void substring(char s[], char sub[], int p, int len){  
   int c = 0;  
   while (c < len) {  
      sub[c] = s[p+c];  
      c++;  
   }  
   sub[c] = '\0';  
}  
int main(){
    char S[1000000],c[1000000];
    int64_t length,i,j,k,countA,countB,countC,varCount,mainCount,curLen=0;
    mainCount=0;
    scanf("%s",&S);
    //printf("%c\n",S[1]);
    length = strlen(S);
    //printf("%d\n",length);
    //printf("%.3s\n", S);
    
    for(i=0;i<length;i++){
        for(j=0;j<=length-i;j++){
            substring(S,c,i,j);
            //printf("%s\n",c);
            curLen = strlen(c);
            countA = 0;
            countB = 0;
            countC = 0;
            varCount = 0;
            if(curLen>2){
                for(k=0;k<curLen;k++){
                    if(c[k]=='A'){
                        countA++;
                        varCount = countA;
                    }
                    else if(c[k]=='B'){
                        countB++;
                    }
                    else if(c[k]=='C'){
                        countC++;
                    }
                }
                //printf("%d %d %d\n",countA,countB,countC);
                if(countA==countB && countB==countC && countA !=0){
                    //printf("equal\n");
                    mainCount++;
                }
            }
        }
        

        
    }
    
    
    printf("%d",mainCount);
}
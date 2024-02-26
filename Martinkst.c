#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_TEXT_LENGTH 1000

 void decrypt(char text[], int shift){
    int i;
    for(i = 0; text[i] != '\0'; ++i){
        char ch = text[i];
        
        if (ch >= 'a' && ch <= 'z'){
            ch = ch - shift;
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
                
               }
               text[i];
            }
            else if(ch >= 'A' && ch <= 'Z'){
              ch = ch - shift;
              if(ch < 'A'){
                  ch = ch + 'Z' - 'A' +1;
              }
              text[i] = ch;
            }
        }
    }
    
    int main() {
        char text[MAX_TEXT_LENGTH];
        printf ("Enter encrypted");
        fgets (text, MAX_TEXT_LENGTH, stdin);
        
        int shift = 3;
        decrypt(text, shift);
        printf ("decrypt text : %s\n" ,text);
        return 0;
    }

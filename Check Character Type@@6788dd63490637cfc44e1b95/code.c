#include <stdio.h>
int main(){
    char m;
    scanf("%c",&m);
    if(m>='0'&& m<='9'){
        printf("Digit");
    }
    else if((m>='A'&&m<='Z')||(m>='a'&&m<='z')){
        if(m=='A'||m=='a'||m=='E'||m=='e'||m=='I'||m=='i'||m=='O'||m=='o'||m=='U'||m=='u'){
        printf("Vowel");
    }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special character");
    }
}
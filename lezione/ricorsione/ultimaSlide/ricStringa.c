#include <stdio.h>
#include <stdbool.h>

bool palindroma(char* s); // wrapper
bool palindromaR(char* s, int primo, int ultimo); // primo = left, ultimo = right
int lenghtR(char* s);

int main(){
    char str[] = "osso";
    if (palindroma(str)) {
        printf("The string '%s' is a palindrome.\n", str);
    } else {
        printf("The string '%s' is not a palindrome.\n", str);
    }
}

bool palindroma(char* s){ // wrapper
    return palindromaR(s, 0, lenghtR(s - 1));
}

bool palindromaR(char* s, int primo, int ultimo){ // primo = left, ultimo = right 
    if(primo >= ultimo){
        return true;
    } else{
        return (s[primo] == s[ultimo]) && palindromaR(s, primo + 1, ultimo - 1); // congiunzione logica
    }
}

int lenghtR(char* s){
    if(*s == '\0'){
        return 0;
    } else{
        return 1 + lenghtR(s + 1);
    }
}
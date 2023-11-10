#include <iostream>
#include <array>
#include <cstring>
#include <string>

using namespace std;

void reverse(char s[], int size){
    
    int array_size = sizeof(s)/sizeof(s[0]);
    char temp[array_size];

//s[end] = temp[start], and so on
//array[] = {'a', 'b', 'c'}
//start=0, end = sizeof(s)-1
    for (int i=0, j=array_size-1; i<size, j>=0; i++, j--){
        temp[i] = s[j];
    }


//print reversed char array
    for (int i=0; i<array_size ; i++){
        cout << temp[i];
    }
}


int main(){

    char char_array[] = "gab";

    //cout << char_array;
    reverse(char_array, sizeof(char_array));

    return 0;
}
//##Day3 of Coding
//----------------
/*
   Problem: Print the word with more than one occurrence from the given String

   This problem given by Spring Of Code by Code Warriors

*/
#include <bits/stdc++.h>
using namespace std;
   
int main()  
{     
    char string[] = "big black bug bit a big black dog on his big black nose";  
    char words[100][100];  
    int i = 0, j = 0, k, length, count;  
      
    //Split the string into words such that each row of array words represents a word  
    for(k=0; string[k]!='\0'; k++){  
          
        //Here, i represents row and j represents column of two-dimensional array words  
        if(string[k] != ' ' && string[k] != '\0'){  
            //Converts the string into lowercase and add it to array words  
            words[i][j++] = tolower(string[k]);  
        }  
        else{  
            words[i][j] = '\0';  
            //Increment row count to store new word  
            i++;  
            //Set column count to 0  
            j = 0;  
        }  
    }  
      
    //Store row count in variable length  
    length = i+1;  
      
    printf("Duplicate words in the given string: \n");  
    for(i = 0; i < length; i++){  
        count = 1;  
        for(j = i+1; j < length; j++){  
           if(strcmp(words[i], words[j]) == 0 && (strcmp(words[j],"0") != 0)){  
               count++;  
               //Set words[j] to 0 to avoid printing visited word  
               strcpy(words[j],"0");  
           }   
        }  
        //Displays the duplicate word if count is greater than 1  
        if(count > 1 )  
            printf("%s\n", words[i]);  
    }  
    
    return 0;  
}  
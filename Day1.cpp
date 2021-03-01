//##Day1 of Coding
//----------------
/*
   Problem: To find Maximum occuring character in string (Hashing concept)

   This problem given by Spring Of Code by Code Warriors

*/
#include<bits/stdc++.h>
#define alpha 26
using namespace std;
char getMaxOccuringChar(string str)              //eg. test
    {
        int occ=0;
        int count[alpha]={0};
        for(int i=0;i<str.length();i++)
        {
            count[str[i]-'a']++;                 //count['t'-'a']=count[116-97]=count[19]++;      ASCII VALUE OF 'a'=97 and 't'=116 
            occ=max(occ,count[str[i]-'a']);      //maximum of occurence finding 
            
        }
        for(int i=0;i<alpha;i++)
        {
             if(count[i]==occ) return (i+'a');   //finding the lexicographically smaller character
        }
        
    }
int main()
{
    string input;
    cin>>input;
    cout<<getMaxOccuringChar(input);
}    


//---------------------------------------------------------------------------------------------------------------------------------------


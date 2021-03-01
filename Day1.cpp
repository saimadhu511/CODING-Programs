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

/*
   Problem: To find LCM and GCD with / without recursion

   This problem given by Spring Of Code by Code Warriors

*/

#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    /* (W/O recursion)
    int rem;
    if(b==0) return a;
    while(b){
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;*/
    if(a==0) return b;
    gcd(b%a,a);
}
int lcm(int a,int b,int gcd)
{
    /* (W/O recursion)
    int max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0&&max%b==0)
         return max;
        ++max; 
    }*/
    return (a*b)/gcd;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2;
	    cin>>n1>>n2;
        int Gcd=gcd(n1,n2);
	    cout<<Gcd<<" "<<lcm(n1,n2,Gcd)<<endl;
	    
	}
	return 0;
}

//-----------------------------------------------------------------------------------------------------------------------

/*
   Problem: To find longest increasing subsequence

   This problem given by Scaler Daily Problem Solving Week - 4

*/

int Solution::lis(const vector<int> &A) {
    int lis[A.size()];
    lis[0]=1;
    for(int i=1;i<A.size();i++)
    {
        lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j]&&lis[i]<lis[j]+1)
             lis[i]=lis[j]+1;
        }
    }
    return *max_element(lis,lis+(A.size()));
}
#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int h =s.size();
char arr[h],fir[h/2],sec[h/2];
int count=0;
strcpy(arr,s.c_str());
if(h%2!=0)
   return -1;
 
else
{
    for(int i=0;i<h/2;i++)
      fir[i]=arr[i];
    for(int j=h/2;j<h;j++)
      sec[j]=arr[j];
    for(int i=0;i<h/2;i++)
    {
         for(int j=h/2;j<h;j++)
         {
              if(fir[i]==sec[j])
              { sec[j]='0';
                break;
             }
        }
    }
    for(int l=h/2;l<h;l++)
    {   if(sec[l]!='0')
    {count++;}
    
    }
    return count;
}
}
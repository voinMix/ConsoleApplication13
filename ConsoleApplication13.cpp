#include <iostream>
#include <sstream>
using namespace std;
 
int main()
{
 string s,min,max,word;
 stringstream str;
 size_t i=0,j,k;
 
 getline(cin,s);
 str<<s;
 str>>min;
 max=min;
 while(str>>word){
  if(min.length()>word.length())
       min=word;
   if(max.length()<word.length())
       max=word;
   }
  j=s.find(min);
  k=s.find(max);
  if(j<k){
     s.replace(k,max.length(),min);
     s.replace(j,min.length(),max);
    }
  else{
    s.replace(j,min.length(),max);
     s.replace(k,max.length(),min);
   }
 
  cout<<s<<"\n";
  system("pause");
  return 0;
}
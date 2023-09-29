#include<bits/stdc++.h>
using namespace std;

int main(){
//  Input a string and concatenate with its reverse string and print it.

// Input : str = "ps"
// Output : "pssp"

string s;
cin>>s;
reverse(s.begin(),s.end());
string r =s;
reverse(s.begin(),s.end());
cout<<s+r;
// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2
string str;
cin>>str;
int n=str.size();
sort(str.begin(),str.end());
cout<<str[n-2];
// Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0
string a;
cin>>a;
int n=a.size();
int cnt=0;
int ans=0;
for(int i=0;i<n;i++){
    if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u' ){
        cnt++;
    }
    else{
        ans += cnt*(cnt+1)/2;
        cnt=0;
    }
}
        ans += cnt*(cnt+1)/2;
  cout<<ans<<endl;

// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False
string t,v;
cin>>t>>v;
sort(t.begin(),t.end());
sort(v.begin(),v.end());
if(t==v) cout<<"True";
else cout<<"False";




    return 0 ;
}
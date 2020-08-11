#include <iostream>
using namespace std;
int n,cnt[256]; 
int main()
{
 string s1,s2;
 cin >> n;
 for (int i=0; i<n; i++)
 {
 cin >> s1 >> s2;
 for (int j='a'; j<='z'; j++)
 {
 int s1cnt=0,s2cnt=0;

 for (int k=0; k<s1.length(); k++)
 if (s1[k]==j) s1cnt++;

 for (int k=0; k<s2.length(); k++)
 if (s2[k]==j) s2cnt++;


 cnt[j]+=max(s1cnt,s2cnt);
 }
 }

 for (int j='a'; j<='z'; j++)
 cout << cnt[j] << endl;
}


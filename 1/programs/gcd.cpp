//horsepool string matching. 

#include <iostream>
using namespace std;

//string matching horsepool function

int main()
{
   string s1, s2;
   cout << "enter the two strings" << endl;
   cin >> s1 >> s2;
   int i = 0, j = 0;
   while (i < s1.length() && j < s2.length())
   {
       if (s1[i] == s2[j])
       {
           i++;
           j++;
       }
       else
       {
           i = 0;
           j = 0;
       }
   }
   if (i == s1.length())
   {
       cout << "the strings are matching" << endl;
   }
   else
   {
       cout << "the strings are not matching" << endl;
   }
   return 0;
}

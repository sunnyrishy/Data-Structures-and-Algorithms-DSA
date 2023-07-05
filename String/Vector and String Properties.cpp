# Vector is taken as a 1D array where each entry of Vector is a String.
* String can be treated as an Array.


 #include<iostream>
 #include<vector>
 #include<algorithm>    // for sorting
 using namespace std;
 
 int main() {
     vector<string> v;
     v.push_back("sunny");
     v.push_back("rishy");
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     for(int i=0;i<v.size();i++){
         sort(v[i].begin(),v[i].end());
         cout<<v[i]<<" ";
     }
     cout<<endl;
  
 }


We can concat two or more string : 
string s = s1 + s2 + "hello world";



-------------------substr------------

  substr(index) - from the index value given to the end index value =, contenct is printed.

  string s = "sunny";
cout<<s.substr(3);

Output : ny


  substr(index, length) - from the indx value given and the length of content to be printed from the indexed value.

string s = "sunny";
cout<<s.substr(1,2);

Output : un




-----------------string.find(" ")-------------------

  string.find(" "); will return the index of the substring given if is a part of the main string;

string s = "sunny";
s.find("nn");

Output : 2

  ---------------------to_string()------------------

  int a = 1234;
string s = to_string(a);

-------------------------------------------------------


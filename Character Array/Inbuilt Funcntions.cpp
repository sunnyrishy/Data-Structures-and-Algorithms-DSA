#include<cstrings> must be imported



1. Compare two strings ----------------   strcmp(str1, str2)

  0 is returned if the strings are equal and non zero is returned if they are not equal.

  #include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[100];
    char str2[100];
    cout<<"Enter two strings : ";
    cin>>str1>>str2;
    if(strcmp(str1, str2) == 0){
        cout<<"Strings are equal"<<endl;
        }
    else {
        cout<<"Strings are not equal"<<endl;
    }
}

It compares the strings by subracting each indexed value i.e str1[0] - str2[0] and goes on, if every value returned 0 then finally it returns 0



2. Length of String ------------------------  strlen(str)

  #include<iostream>
using namespace std;
#include<cstring>

int main() {
    char str[100];
    cout<<"Enter a string : ";
    cin>>str;
    int len = strlen(str);
    cout<<"Length of the string is : "<<len<<endl;
    return 0;
}



3. String copy -------------------------------- strcpy(destination string, source string);

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[100] = "hello";
    char str2[100] = "world";
    cout<<"Before copyting : "<<endl;
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    cout<<"After Copying : "<<endl;
    strcpy(str1, str2);
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    
}



4. String n Copy ------------------------------------strncopy(destination string, source string, n);

Copies only n characters from source to destination.

#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[100] = "sunny";
    char str2[100] = "rishy";
    cout<<"Before copyting : "<<endl;
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    cout<<"After Copying : "<<endl;
    strncpy(str1, str2,3);
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    
}




5. String Concatenation ------------------------------strcat(str1, str2);

String 2 will get appended to the end of String 1.

  #include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[100] = "sunny";
    char str2[100] = "rishy";
    cout<<"Before Concat : "<<endl;
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    cout<<"After Concat : "<<endl;
    strcat(str1, str2);
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    
}

#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;
int main() {

string user_string;
string line_1;
string ref_string;
string pyramid;

cout << "Please enter a string!" << endl;
getline(cin,user_string);

for (int i=user_string.length()-2;i>=0;i--){
  line_1= line_1+user_string[i];
}

ref_string=user_string+line_1;

string num_hashes="#";

while (ref_string.length()>0){

  pyramid+=(ref_string + num_hashes + "\n");
  num_hashes=num_hashes+'#';
  ref_string.erase(ref_string.length()/2,2);
}

reverse(pyramid.begin(),pyramid.end());

for (char c:pyramid){
  if (c=='#'){
    pyramid.replace(pyramid.find('#'),1," ");
  }
}

cout << pyramid;
}

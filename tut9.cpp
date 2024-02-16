#include <iostream>
#include <cstring>
using namespace std;
class kashyap
{
  public:
  string s;
  void binary_chk(string s)
  {
    cin>>s;int c=0;
   for(int i=0;i<s.length(); i++){
    if (s[i]!= '1' && s[i]!='0'){
      cout<<"Not a Binary Number\n";
      c=c+1;
      break;
    }
    
   }
  if(c==0)
    {
      cout<<"It's a Binary number";
    }
    
  }
};

int main(){
    cout<<"Enter a check number"<<endl;
    kashyap om;
    string x;
    om.binary_chk(x);
    return 0;
}
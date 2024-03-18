// problem 2:👇

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string st){
int start = 0;
int end = st.length()-1;

while(start <= end){

	if(st[start] == ""){
	    start++;
	}
	if(st[end] == ""){
	    end--;
	}
	if(st[start] == st[end]){
	    start++;
	    end--;
	}
	else{
	    return false;
	}
	
}

return true;


}


int main(){
  string st = "A man a plan a canal Panama";
  bool ans = checkPalindrome(st);
  cout<<ans<<endl;

return 0;
}


// -----------------

// problem 1:👇

#include<bits/stdc++.h>
using namespace std;

int maxSubsequence(string st)
{
    int max1 = 1;
    int max2 = 1;
  
    for(int i = 0; i < st.length()-1; i++){
	if(st[i] == st[i+1]){
            max1++;
    	}else{
    	   if(max1 > max2){
	     max2 = max1;
	     max1 = 1;
           }
    	}
    }

return max2;
   
}

int main()
{
  string st = "0001100";
  int ans = maxSubsequence(st);
  cout<<ans;

return 0;
}

// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A


#include<bits/stdc++.h>
     
using namespace std;

#define pb push_back 
#define _(x) {cout << #x << " = " << x << " ";}

const double PI = acos(-1);


vector<long long > v; 

int KEY_NOT_FOUNDED = -1 ;


long long finMid (long long imin , long long imax){
	
	return ( (imax + imin ) / 2) ;
}

long long binarySearch(long long target){
	
long long  imin = 0 , imax = v.size()-1 ;
	
while( imin <= imax ){
		
	int mid = finMid(imin , imax) ;
		
	if(v[mid] == target) return mid;
		
	else if(v[mid] < target) imin = mid+1;
		
	else imax = mid-1;
		
}
	
return KEY_NOT_FOUNDED;
}


int main(){
	
ios::sync_with_stdio(false);
	
long long  n , k , num; cin >> n >> k ;
	
   for (int i = 0; i < n; i++)
   {
	cin >> num ;
	   
	v.push_back(num) ;
   }
   
  sort(v.begin() , v.end());

  long long target ;
  
  for (int i = 0; i < k; i++)
  {
	cin >> target ;
	  
	long long res = binarySearch(target);
   
	if(res == -1) cout << "NO\n";
   
	else cout <<"YES\n" ;
  }
  
   
   

}
     

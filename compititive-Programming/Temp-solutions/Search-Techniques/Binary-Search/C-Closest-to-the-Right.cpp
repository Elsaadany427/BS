
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C


#include<bits/stdc++.h>
     
using namespace std;

#define pb push_back 
#define _(x) {cout << #x << " = " << x << " ";}

const double PI = acos(-1);


vector<long long > v; 


long long finMid (long long imin , long long imax){
	
	return ( (imax + imin ) / 2) ;
}

long long binarySearch(long long target){
	
	long long  imin = -1 , imax = v.size() ;
	
	while( imax > imin + 1 ){
		
		long long mid = finMid(imin , imax) ;
				
		if(v[mid] < target) imin = mid;
		
		else imax = mid;
		
	}
	
	return imax;
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
		
	cout << res + 1 << endl; 

  }
  
   
   

}
     

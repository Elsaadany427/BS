
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

#include<bits/stdc++.h>
     
using namespace std;

#define pb push_back 
#define _(x) {cout << #x << " = " << x << " ";}

const double PI = acos(-1);


vector<long long > v; 


long long findMidMin (long long imin , long long imax){
	
	return (imax + imin + 1) / 2 ;
}

long long findMidMax (long long imin , long long imax){
	
	return imin + (imax - imin) / 2;
}


long long closestRight(long long target){
	
	long long  imin = -1 , imax = v.size() ;
	
	while( imax > imin + 1 ){
		
		long long mid = findMidMax(imin , imax) ;
				
		if(v[mid] < target) imin = mid;
		
		else imax = mid;
		
	}
	
	return imax + 1;
}


long long closestLeft(long long target){
	
	long long  imin = -1 , imax = v.size() ;
	
	while( imax > imin + 1 ){
		
		long long mid = findMidMin(imin , imax) ;
				
		if(v[mid] > target) imax = mid;
		
		else imin = mid;
		
	}
	
	return imin + 1;
}




int main(){
	
ios::sync_with_stdio(false);
	
long long  n , num; cin >> n  ;
	
for (int i = 0; i < n; i++)
    {
	cin >> num ;
		   
	v.push_back(num) ;
     }
   
sort(v.begin() , v.end());

long long x , y , k;
  
	cin >> k;
  
for (int i = 0; i < k; i++)
    {
	cin >> x >> y ;
			
	long long minPos = closestRight(x);
			
	long long maxPos = closestLeft(y);
			
	cout << maxPos - minPos + 1 << " "; 

    }
  
   
   

}
     

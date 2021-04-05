
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A


#include<bits/stdc++.h>
     
using namespace std;

#define pb push_back 
#define _(x) {cout << #x << " = " << x << " ";}

const double PI = acos(-1);


vector<long long > v; 

 
long long findMid(long long low , long long high){
	
	return (low + ( high - low ) / 2 );
}
 
// we converted it to know if the size exceeded 18 number
 
long long ok(long long a, long long b){ 
	
	string w = to_string(a) ;
	
	string h = to_string(b) ;
	
	if(w.size() + h.size() > 18) return 1e18 ;
	
	else return a * b ;
}
 
long long n;
 
long long binarySearch(long long a , long long b){
	
	long long low = 1 , high = 1e18;
	
	while(low < high){
		
		long long mid = findMid(low , high);
		
		long long w = mid / a ;
		
		long long h = mid / b ;
		
		long long res = ok( w , h );
		
		if(res >= n) high = mid ;
		
		else low = mid + 1;
	}
	
	return high ;
}

int main(){
	
	ios::sync_with_stdio(false);
	
	long long w , h ;
	
	cin >> w >> h >> n ;
	
	long long res = binarySearch(w,h);
	
	cout << res << endl;
   

}
     
   
   

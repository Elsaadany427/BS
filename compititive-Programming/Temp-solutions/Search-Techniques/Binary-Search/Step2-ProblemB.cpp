
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

#include<bits/stdc++.h>
     
using namespace std;

#define pb push_back 
#define _(x) {cout << #x << " = " << x << " ";}

const double PI = acos(-1);


vector<long long > arr; 

 
long long n , k;
 
double findMid(double low , double high){
	
	return (low + ( high - low ) / 2 );
}
 
bool good(double mid){
	
	double res = 0 ;
	
	for (int i = 0; i < n; i++)
	{
		res += floor(arr[i] / mid);
	}
	return res >= k ;
	
}
 


int main(){
	
	ios::sync_with_stdio(false);
	
	cin >> n >> k ;
		
	arr.resize(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
	}
	
	long long rep = 100 ;
	
	double low = 0 , high = 1e8;
	
	while(rep--){
		
		double mid = findMid(low , high);
		
		if(good(mid)){
			
			low = mid ;
		}
		
		else high = mid ;
		
	}
	
	cout << fixed << setprecision(7) << low << endl;
   

}
     


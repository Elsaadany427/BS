# Search Search Techniques

## Binary search 
A more efficient algorithm that can be used when the list contains elements in sorted order
Consider a list A of 10 elements {2,5,8,12,16,23,38,56,72,91} as shown above. Our task is to find 23 in this list.

In binary search, instead of starting from the first element in the list, we consider the middle element. In this case, the middle element is 16. Now, we observe that 16 < 23 and because the list is sorted, all elements to the left of 16 are also < 23 . This means if 23 is present in the list, it is present to the right of 16.

This way, we can discard half of the elements from our search space. Now, we consider the sub-array from the 6th to 10th element. The middle element this array is 56. Again comparing 56 and 23, we see that 23<56 and so 23 if present in the array will be present to the left of 56. SO we can discard all the elements to the right of 56.

We are left with the subarray {23,38}. Now, the middle element of this subarray is the first element itself. Coomparing this to 23, we see that 23 is present in the list and so we return the position.


Binary search has time complexity O(log(N))

## Implementation 

    int KEY_NOT_FOUNDED = -1 ;
    
    long long binarySearch(long long target){
    
      long long  imin = 0 , imax = v.size()-1 ;

      while( imin <= imax ){

        int mid = imin + ( imax - imin ) / 2 ;

        if(v[mid] == target) return mid;

        else if(v[mid] < target) imin = mid+1;

        else imax = mid-1;

      }

       return KEY_NOT_FOUNDED;
    }
    
  ### Closest in array
  
  * closest left
  * closest right
  
 ### closest left 
 
 maximum element not greater than x (closest to x on the left) 
 
 Consider a list A of 10 elements {2,5,8,12,16,23,38,56,72,91} as shown above. Our task is to find 24 in this list.

In binary search, instead of starting from the first element in the list, we consider the middle element. In this case, the middle element is 16. Now, we observe that 16 < 24 and because the list is sorted, all elements to the left of 16 are also < 24 . 

This way, we can discard half of the elements from our search space. Now, we consider the sub-array from the 6th to 10th element. The middle element this array is 56. Again comparing 56 and 24, we see that 24 < 56. So we can discard all the elements to the right of 56.

We are left with the subarray {23,38}. Now, 23 is left and 38 is right so the 23 is the closest left of 24 .
 
 ## Implementation 
 
 
    long long finMid (long long imin , long long imax){ 


	return ( (imax + imin ) / 2) ;  
    
    }
    
    long long binarySearch(long long target){

	long long  imin = -1 , imax = v.size() ;
	while( imax > imin + 1 ){
		long long mid = finMid(imin , imax) ;
		if(v[mid] > target) imax = mid;
		else imin = mid;
	}
	return imin; 
    }


### closest Right 
 
 minimum element not less than x (closest to x on the right)
 
 Consider a list A of 10 elements {2,5,8,12,16,23,38,56,72,91} as shown above. Our task is to find 24 in this list.

In binary search, instead of starting from the first element in the list, we consider the middle element. In this case, the middle element is 16. Now, we observe that 16 < 24 and because the list is sorted, all elements to the left of 16 are also < 24 . 

This way, we can discard half of the elements from our search space. Now, we consider the sub-array from the 6th to 10th element. The middle element this array is 56. Again comparing 56 and 24, we see that 24 < 56. So we can discard all the elements to the right of 56.

We are left with the subarray {23,38}. Now, 23 is left and 38 is right so the 38 is the closest Right of 24 .
 
 ## Implementation 
 
 
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

### Step1 problems 

[Problem-A Binary search ](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A)

[Prblem-B Closest to the Left](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B)

[Prblem-C Closest to the Right](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C)

[Problem-D Fast search](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D)

### Step2 problems 

[Problem-A Packing Rectangles](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A)

[Prblem-B Ropes](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B)

### Edu 

[Theory for step1](https://codeforces.com/edu/course/2/lesson/6/2)

[Theory for step2](https://codeforces.com/edu/course/2/lesson/6/2)

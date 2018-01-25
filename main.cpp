#include <bits/stdc++.h>

using namespace std;
/*
the problem is to find the last or the first occurance
of an array
ex 1,3,10,10,10,14,15
so which 10 will binary search found ?*/

/*
second problem is to count the repeated number in sorted array
ex ,2,2,2,4,4,4,5,5,5,5,5
so how many 2 ? 3
how many 4 ? 3
how many 5 ? 5

her we have 2 solution first using linear search but still
in worst case O(n)
so to made it o(log n)
get the first & last
the the count = last - first +1;
*/

int BinarySearchFind(int a[],int n,int x,bool flag){
    int low = 0;
    int high = n-1;
    int result = -1;
    while(low <= high){
        int mid = low +(high - low) /2;
        if(a[mid] == x){
            result = mid;
            // if flag --> true the find first else find last
            if(flag)    high = mid -1;
            else        low = mid +1;
        }
        else if (x < a[mid])
            high = mid -1;
        else
            low = mid +1;
    }
    return result;
}

int FindCount(int a[],int n, int x){
    int first = BinarySearchFind(a,n,x,true);

    // if number doesn't exist
    if (first == -1)
        return 0;

    int last = BinarySearchFind(a,n,x, false);
    int  Count = last - first+1;
    return Count;
}


int main() {
    int arr[100],n,x;
    cout<<"Enter Size of array :\n";
    cin>>n;
    cout<<"Enter array elements :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter your Number :\n";
    cin>>x;

    cout<<"Count  = "<<FindCount(arr,n,x);

    return 0;
}
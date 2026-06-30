#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& n, int target) {
        int start =0;
        int end = n.size()-1;

        while(start <= end){
            int mid= (start+end)/2;
            if (target==n[mid])
            return mid;
            else if (target<n[mid])
            end = mid - 1;
            else 
            start= mid +1;
        }
        return -1;
    }
};
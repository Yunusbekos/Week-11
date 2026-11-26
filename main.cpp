#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// Task 1

// void sortArray(int a[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - 1 - i; j++) {
//             if (a[j] > a[j + 1]) {
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
// }
// int countValue(int a[], int n, int x) {
//     sortArray(a, n);
//     int l = 0, r = n;
//     while (l < r) {
//         int mid = l + (r - l) / 2;
//         if (a[mid] < x)
//             l = mid + 1;
//         else
//             r = mid;
//     }
//     int first = l;
//     l = 0;
//     r = n;
//     while (l < r) {
//         int mid = l + (r - l) / 2;
//         if (a[mid] <= x)
//             l = mid + 1;
//         else
//             r = mid;
//     }
//     int last = l;
//     return last - first;
// }
// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int x;
//     cin >> x;
//     cout << countValue(a, n, x);
//
// }


// Task 2

// int largestAltitude(const int gain[], int n) {
//     int a = 0;
//     int largest = 0;
//     for(int i = 0; i < n; i++) {
//         a += gain[i];
//         if(a > largest) {
//             largest = a;
//         }
//     }
//     return largest;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     int gain[n];
//     for(int i = 0; i < n; i++) {
//         cin >> gain[i];
//     }
//     cout << largestAltitude(gain, n);
// }

// Task 3

// void shuffle(const int nums[], int n, int result[]) {
//     for(int i = 0; i < n; i++) {
//         result[2*i]=nums[i];
//         result[2*i+1]=nums[i+n];
//         }
// }
// int main() {
//     int n;
//     cin >> n;
//     int nums[2*n];
//     int result[2*n];
//     for(int i = 0; i < 2*n; i++) {
//         cin >> nums[i];
//     }
//     shuffle(nums, n, result);
//     for(int i = 0; i < 2*n; i++) {
//         cout << result[i] << " ";
//     }
// }


// Task 4

// void reverseString(char s[], int n) {
//     int left = 0;
//     int right = n - 1;
//     while (left < right) {
//         char temp = s[left];
//         s[left] = s[right];
//         s[right] = temp;
//         left++;
//         right--;
//     }
// }
//
// int main() {
//     char s[100001];
//     cin>> s;
//     int n=strlen(s);
//     reverseString(s,n);
//     for(int i=0;i<n;i++) {
//         cout<<s[i];
//     }
// }

// Task 5

// int search(const int nums[], int n, int target) {
//     int low=0;
//     int high=n-1;
//     while (low<=high) {
//         int mid = (low+high)/2;
//         if (nums[mid] == target) {
//             return mid;
//         }
//         else if (nums[mid] < target) {
//             low=mid+1;
//         }
//         else {
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main() {
//     int n;
//     cin >> n;
//     int nums[n];
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }
//     int target;
//     cin >> target;
//     cout << search(nums, n, target) << endl;
// }



// Task 6

// void duplicateZeros(int arr[], int n) {
//     for(int i=0;i<n;i++) {
//         if (arr[i] == 0) {
//             for(int j=n-1;j>i;j--) {
//                 arr[j]=arr[j-1];
//             }
//             i++;
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
//
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     duplicateZeros(arr,n);
// }

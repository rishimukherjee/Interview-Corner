// rishimukherjee
#include <cstdio>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <queue>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string.h>

#define forall(i,a,b)               for(int i=a;i<b;i++)
#define input(t)                    scanf("%d", &t)
#define pb                          push_back
#define maX(a,b)                    ( (a) > (b) ? (a) : (b))
#define miN(a,b)                    ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)               ( (n >> b) & 1)
#define INF 1<<30
#define fill(a, s)                  memset(a, s, sizeof (a))
#define iter(it, x)                 for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define pi                          pair<int, int>
#define edge                        pair<int, pi>


int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

using namespace std;

template<class T>void ToString(T t) {stringstream s;s<<t;return s.str();}

/*
given an array A[] of n numbers and another number x,
determines whether or not there exist two elements in S
whose sum is exactly x.
*/

void solve1(int arr[], int arr_size, int sum){
    // Solves in O(n)
    // Workes only if range of numbers is known.
    bool my_map[100000];
    fill(my_map, false);
    forall(i,0,arr_size){
        int temp = sum - arr[i];
        if(temp >= 0 && my_map[temp] == 1)
            printf("Pair is (%d %d)\n", temp, arr[i]);
        my_map[arr[i]] = true;
    }
}

bool solve2(int arr[], int arr_size, int sum){
    // Solves in O(nlogn)
    sort(arr, arr+arr_size);
    int l = 0, r = arr_size - 1;
    while (l < r){
        if(arr[l] + arr[r] == sum) return true;
        else if(arr[l]+arr[r] < sum) l++;
        else r--;
    }
    return false;
}

int main(){
    //freopen("in", "r+", stdin);
    int A[] = {1, 4, 45, 6, 10, 8};
    int n = 16;
    int arr_size = 6;
    solve1(A, arr_size, n);
    if(solve2(A, arr_size, n))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

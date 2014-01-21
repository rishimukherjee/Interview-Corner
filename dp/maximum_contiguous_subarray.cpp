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

int maxSubArray(int a[], int size){
    int max_till_now = 0, max_ending_here = 0;
    forall(i,0,size){
        max_ending_here += a[i];
        if(max_ending_here < 0) max_ending_here = 0;
        if(max_till_now < max_ending_here)
            max_till_now = max_ending_here;
    }
    return max_till_now;
}

int main(){
    //freopen("in", "r+", stdin);
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int ans = maxSubArray(a,n);
    cout << ans << endl;
    return 0;
}

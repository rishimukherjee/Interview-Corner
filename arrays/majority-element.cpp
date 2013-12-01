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
#define INF                         1<<30
#define fill(a, s)                  memset(a, s, sizeof (a))
#define iter(it, x)                 for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define pi                          pair<int, int>
#define edge                        pair<int, pi>


int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

using namespace std;

template<class T>void ToString(T t) {stringstream s;s<<t;return s.str();}

int findMajority(int a[], int size){
    int maj_index = 0, count = 1;
    forall(i,1,size){
        if(a[maj_index] == a[i])
            count++;
        else count--;
        if(count == 0){
            maj_index = i;
            count = 1;
        }
    }
    int cnt = 0;
    int maj_elem = a[maj_index];
    forall(i,0,size) if(a[i]==maj_elem) cnt++;
    if(cnt > size/2) return maj_elem;
    else return -1;
}

int main(){
    //freopen("in", "r+", stdin);
    int a[] = {1,3,3,3,2};
    int ans = findMajority(a,5);
    cout << ans << endl;
    return 0;
}

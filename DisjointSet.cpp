//Written by __RaiyaN__

#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
typedef long long ll;
#define forn(i,n) for(ll i=0;i < ll (n); i++)

class DisjointSets{
public:
    vector<ll>Parent, Rank, Size;
    ll MaxSize=1;
    DisjointSets(ll n)
    {
        forn(i,n+1) Parent.push_back(i), Rank.push_back(0), Size.push_back(1);
    }
    ll Find(ll x)
    {
        if(Parent[x]==x) return x;
        else Parent[x]=Find(Parent[x]);
        return Parent[x];
    }
    void Union(ll x, ll y)
    {
        ll u=Find(x);
        ll v=Find(y);
        if(u==v) return;
        if(Rank[u] > Rank[v]) Parent[v]=u, Size[u]+=Size[v];
        else
        {
            Parent[u]=v;
            Size[v]+=Size[u];
            if(Rank[u]==Rank[v]) Rank[v]++;
        }
        MaxSize=max(MaxSize, max(Size[u], Size[v]));
        return;
    }
};

int main()
{

    return 0;
}

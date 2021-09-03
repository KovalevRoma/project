https://sites.google.com/view/lebedins/231-%D0%B3%D1%80%D1%83%D0%BF%D0%BF%D0%B0   

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i,j,k,n,m,a,b;
vector<ll>veca;
vector<ll>vecb;
ll ev(ll a,ll b){
    veca.push_back(a);
    vecb.push_back(b);
    if(min(a,b)==0)
        return max(a,b);
    if(a>b)
        a=a%b;
    else
        b=b%a;
    ev(a,b);
}
//нод(a,b)
ll RSA(ll a,ll m)
{
    ll x=0,y=0;
    veca.clear();
    vecb.clear();
    if(m==1)
        return 0;
    else{
            if(ev(a,m)!=1)
                return -1;
            else{
                    if(veca[veca.size()-1]==1)
                        x=1;
                    else
                        y=1;
                    for(i=veca.size()-2;i--;i>=0){
                            if(vecb[i]==vecb[i+1])
                                y=y-(veca[i]/vecb[i])*x;
                            else
                                x=x-(vecb[i]/veca[i])*y;
                    }
            }
   return (x+m*10000000)%m;
    }
}



int binpow (int a, int n, int mod) {
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return (binpow (a, n-1, mod) * a)%mod;
	else {
		int b = (binpow (a, n/2, mod));
		return (b * b)%mod;
	}
}
//возведение в степень и взятие по модулю


int main(){
   vector <ll> prost;
   ll p, q, n, z, d, v, e, m;
       cout<< "enter primes numbers: "<<endl;
       cin>>p>>q;
n=p*q;
z=(p-1)*(q-1);
       for (int i = 0; i < z; i++){
            if((ev(i,z) !=1) && (i!=1))
                 continue;
            else
                 prost.push_back(i);
            }
   ll w=prost.size()-1;
v=rand() %  w +1;
e=prost[v]  ;
d=RSA(e,z);
       cout<<"enter message(max:"<<n-2<<"):"<<endl;
       cin>>m;
         if(m >=n){
                cout<<"error in the message"<<endl;
                system("pause");
                return 0;
         }
       cout<<"open key"<<"{"<<e<<","<<n<<"}"<<endl;
       cout<<"privat key"<<"{"<<d<<","<<n<<"}"<<endl;
ll l=binpow (m, e, n);
       cout<<"cipher: "<<l<<endl;
l=binpow (l, d, n);
       cout<<"verification of the message: "<<l<<endl;
       system("pause");
   return 0;
}

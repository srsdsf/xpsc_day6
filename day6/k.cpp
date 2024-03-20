#include<bits/stdc++.h>
using namespace std;
void output(int n)
{
    map<string,int>mp1;
    map<string,int>mp2;
    map<string,int>mp3;

    vector<string>a;
    vector<string>b;
    vector<string>c;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            string s;
            cin>>s;
            if(i==0)
            {
                mp1[s]++;
                a.push_back(s);
            }
            else if(i==1)
            {
                mp2[s]++;
                b.push_back(s);
            }
            else
            {
                mp3[s]++;
                c.push_back(s);
            }
        }
    }
    int pnt1=0,pnt2=0,pnt3=0;
    for(auto it: a)
    {
        if(mp1[it] > 0 && mp2[it] >0 && mp3[it] > 0)
        {
            continue;
        }
        else if(mp1[it] >0 && mp2[it] >0) 
        {
            pnt1++;
            pnt2++;
        }
        else if(mp1[it] >0 && mp3[it] >0)
        {
            pnt1++;
            pnt3++;
        }
        else
        {
            pnt1+=3;
        }
    }
    for(auto it: b)
    {
        if(mp1[it] > 0 && mp2[it] >0 && mp3[it] > 0)
        {
            continue;
        }
        else if(mp2[it] >0 && mp3[it] >0) 
        {
            pnt2++;
            pnt3++;
        }
        else if(mp2[it]>0 &&  mp1[it] ==0 && mp3[it] ==0)
        {
           pnt2+=3;
        }
    }
    for(auto it: c)
    {
        if(mp1[it] > 0 && mp2[it] >0 && mp3[it] > 0)
        {
            continue;
        }
        else if(mp3[it] >0 && mp1[it]==0 && mp2[it]==0)
        {
            pnt3+=3;
        }
    }
    cout<<pnt1<<" "<<pnt2<<" "<<pnt3<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        output(n);
    }
}
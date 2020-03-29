#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;

    cin>>n>>k;
    int qr,qc;
    cin>>qr>>qc;
    int r1=n-qc,l=qc-1,u=n-qr,d=qr-1,ru,ld,lu,rd;
    ru=min(n-qc,n-qr);
    ld=min(qr-1,qc-1);
    lu=min(n-qr,qc-1);
    rd=min(n-qc,qr-1);

    for(int i=0;i<k;i++)
    {
        int r,c;
        cin>>r>>c;
        if(r==qr)
        {
            if(c>qc)
            {
                int d;
                d=c-qc-1;
                r1=min(r1,d);
            }
            else
            {
                int d;
                d=qc-c-1;
                l=min(l,d);
            }
        }
        else if(c==qc)
        {
            if(r>qr)
            {
                int d;
                d=r-qr-1;
                u=min(u,d);
            }
            else
            {
                int d1;
                d1=qr-r-1;
                d=min(d1,d);

            }
        }
        else if(r-qr==c-qc)
        {
            if(c>qc)
            {
                int x;
                x=c-qc-1;
                ru=min(x,ru);
            }
            else
            {
                int x;
                x=qc-c-1;
                ld=min(ld,x);
            }
        }
        else if((r-qc)==-(c-qr))
        {
            if(c<qc)
            {


            int x;
            x=r-qr-1;
            lu=min(lu,x);
            }

        else
        {
            int x;
            x=qr-r-1;
            rd=min(rd,x);
        }
        }
    }
    cout<<l+r1+u+d+ru+rd+lu+ld;
}

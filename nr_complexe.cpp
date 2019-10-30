#include "nr_complexe.h"


void nr_complexe::citire()
{
    cout<<"Citeste real si imaginar: ";
    cin>>real>>imaginar;
    cout<<endl;
}

void nr_complexe::afisare()
{
    if (imaginar==0)
    {
        cout<<real<<" ";
        return;
    }
    if (real == 0)
        if (imaginar ==1)
        {
            cout<<"i"<<" ";
            return;
        }
        else if (imaginar==-1)
        {
            cout<<"-i"<<" ";
            return;
        }
        else
        {
            cout<<"i*"<<imaginar<< " ";
            return;
        }
    if (imaginar>0)
        cout<<real<<"+"<<"i*"<<imaginar<<" ";
    else
        cout<<real<<"-i*"<<-imaginar<<" ";

cout<<endl;
}

const nr_complexe operator+(nr_complexe &a)
{
    return a;
}

const nr_complexe operator+(nr_complexe &a,nr_complexe &b)
{
    nr_complexe c;
    c.real=a.real+b.real;
    c.imaginar=a.imaginar+b.imaginar;
    a=c;
    return a;
}

const nr_complexe operator+(nr_complexe &a,double val)
{
    nr_complexe b(a);
    b.real=a.real + val;
    return b;
}
const nr_complexe operator+(double val,nr_complexe &a)
{
    nr_complexe b(a);
    b.real=a.real + val;
    return b;
}
void operator-(nr_complexe &a)
{
    nr_complexe b;
    b.real=-a.real;
    b.imaginar= -a.imaginar;
    a=b;
    //return b;
}

const nr_complexe operator-(nr_complexe &a,nr_complexe &b)
{
    nr_complexe c;
    c.real=a.real-b.real;
    c.imaginar=a.imaginar-b.imaginar;
    return c;
}


const nr_complexe operator*(nr_complexe &a,nr_complexe&b)
{
    nr_complexe c;
    c.real = a.real*b.real-a.imaginar*b.imaginar;
    c.imaginar = a.imaginar*b.real + a.real*b.imaginar;
    return c;

}

const nr_complexe operator*(nr_complexe &a,double val)
{
    nr_complexe b;
    b.real = a.real * val;
    b.imaginar = a.imaginar * val;
    return b;
}
const nr_complexe operator*(double val,nr_complexe &a)
{
    nr_complexe b;
    b.real = a.real * val;
    b.imaginar = a.imaginar * val;
    return b;
}


const nr_complexe operator/(nr_complexe &a,nr_complexe&b)
{
    nr_complexe c;
    c.real = (a.real*b.real+a.imaginar*b.imaginar)/(b.real*b.real + b.imaginar*b.imaginar);
    c.imaginar = (a.imaginar*b.real - a.real*b.imaginar)/(b.real*b.real+b.imaginar*b.imaginar);
    return c;

}

const nr_complexe operator/(nr_complexe &a,double val)
{
    nr_complexe b;
    b.real = a.real / val;
    b.imaginar = a.imaginar / val;
    return b;
}
const nr_complexe operator/(double val,nr_complexe &a)
{
    nr_complexe b;
b.real = (val*b.real)/(b.real*b.real + b.imaginar*b.imaginar);
    b.imaginar = ( - val*b.imaginar)/(b.real*b.real+b.imaginar*b.imaginar);

    return b;
}
const nr_complexe operator^(nr_complexe &a,double val)
{
    nr_complexe aux(a);
    int i;
    for (i=2;i<=val;i++)
        aux=aux*aux;
    return aux;
}
void operator += (nr_complexe&a,nr_complexe&b)
{
    a.real+=b.real;
    a.imaginar+=b.imaginar;
}
void operator += (nr_complexe&a,double val)
{
    a.real+=val;
}

void operator -= (nr_complexe&a,nr_complexe&b)
{
    a.real-=b.real;
    a.imaginar-=b.imaginar;
}
void operator -= (nr_complexe&a,double val)
{
    a.real-=val;
}

void operator *= (nr_complexe&a,nr_complexe&b)
{
    a.real*= a.real*b.real-a.imaginar*b.imaginar;
    a.imaginar*=a.imaginar*b.real + a.real*b.imaginar;
}
void operator *= (nr_complexe&a,double val)
{
    a.real*=val;
    a.imaginar*=val;
}
void operator /= (nr_complexe&a,nr_complexe&b)
{
    a.real/=(a.real*b.real+a.imaginar*b.imaginar)/(b.real*b.real + b.imaginar*b.imaginar);
    a.imaginar/=(a.imaginar*b.real - a.real*b.imaginar)/(b.real*b.real+b.imaginar*b.imaginar);
}
void operator /= (nr_complexe&a,double val)
{
    a.real/=val;
    a.imaginar/=val;
}

int operator == (nr_complexe&a,nr_complexe&b)
{
    if (a.real == b.real && a.imaginar == b.imaginar)
        return 1;
    return 0;
}

int operator == (nr_complexe&a,double val)
{
    if (a.real == val && a.imaginar == 0)
        return 1;
    return 0;
}

int operator == (double val,nr_complexe&a)
{
    if (a.real == val && a.imaginar == 0)
        return 1;
    return 0;
}


int operator != (nr_complexe&a,nr_complexe&b)
{
    if (a.real == b.real && a.imaginar == b.imaginar)
        return 0;
    return 1;
}

int operator != (nr_complexe&a,double val)
{
    if (a.real == val && a.imaginar == 0)
        return 0;
    return 1;
}

int operator != (double val,nr_complexe&a)
{
    if (a.real == val && a.imaginar == 0)
        return 0;
    return 1;
}

double abs (nr_complexe&a)
{
    return sqrt(a.real*a.real+a.imaginar*a.imaginar);
}

void sqrt (nr_complexe&a,nr_complexe&b,nr_complexe&c)
{
    nr_complexe aux(a);
    if (a.imaginar>0)
    {
        b.real = abs(sqrt((a.real+abs(a))/2));
        b.imaginar = abs(sqrt(abs(a) - b.real*b.real));
        -b;
        c=b;
    }
    else {
        b.real = abs(sqrt((a.real+abs(a))/2));
        b.imaginar = -abs(sqrt(abs(a) - b.real*b.real));
        -b;
        c=b;
    }
    a=aux;
}
void ecuatie(nr_complexe&a,nr_complexe&b,nr_complexe&c)
{
    nr_complexe delta;
    nr_complexe aux1=b;
    aux1*=b;
    nr_complexe aux2=a;
    aux2*=c;
    nr_complexe aux3=aux2;
    aux3*=4;


    delta = (aux1)- (aux3);

    nr_complexe radacina1,radacina2;
    sqrt(delta,radacina1,radacina2);
    -b;
    aux1=b+radacina1;
    aux2=a;
    aux2*=2;
    aux3 = (aux1)/(aux2);
    nr_complexe sol1=aux3;
        aux1=b-radacina1;
    aux2=a;
    aux2*=2;
    aux3 = (aux1)/(aux2);
    nr_complexe sol2=aux3;
        aux1=b+radacina2;
    aux2=a;
    aux2*=2;
    aux3 = (aux1)/(aux2);
    nr_complexe sol3=aux3;
        aux1=b-radacina2;
    aux2=a;
    aux2*=2;
    aux3 = (aux1)/(aux2);
    nr_complexe sol4=aux3;
    sol1.afisare();
    cout<<endl;
    sol2.afisare();
    cout<<endl;
    sol3.afisare();
    cout<<endl;
    sol4.afisare();
}


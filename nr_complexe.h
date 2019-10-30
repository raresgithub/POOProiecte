#ifndef NR_COMPLEXE_H
#define NR_COMPLEXE_H

#include <iostream>
#include <cmath>
using namespace std;

class nr_complexe
{

    double real;
    double imaginar;

public:
    nr_complexe()
    {
        real=0,imaginar=0;
    }
    nr_complexe(nr_complexe &a)
    {
        real=a.real;
        imaginar=a.imaginar;
    }
    void set_real(double val)
    {
        real=val;
    }
    void set_imaginar(double val)
    {
        imaginar=val;
    }
    double get_real()
    {
        return real;
    }
    double get_imaginar ()
    {
        return imaginar;
    }
    void citire();
    void afisare();
    friend const nr_complexe operator +(nr_complexe&);
    friend const nr_complexe operator +(nr_complexe&,nr_complexe&);
    friend const nr_complexe operator +(nr_complexe&,double);
    friend const nr_complexe operator +(double,nr_complexe&);
    friend void operator -(nr_complexe&);
    friend const nr_complexe operator -(nr_complexe&,nr_complexe&);
    friend const nr_complexe operator * (nr_complexe&,nr_complexe&);
    friend const nr_complexe operator * (nr_complexe&,double);
    friend const nr_complexe operator * (double,nr_complexe&);
    friend const nr_complexe operator / (nr_complexe&,nr_complexe&);
    friend const nr_complexe operator / (nr_complexe&,double);
    friend const nr_complexe operator / (double,nr_complexe&);
    friend const nr_complexe operator ^ (nr_complexe&,double);
    friend  void operator += (nr_complexe&,nr_complexe&);
    friend  void operator += (nr_complexe&,double);
    friend  void operator -= (nr_complexe&,nr_complexe&);
    friend  void operator -= (nr_complexe&,double);
    friend  void operator *= (nr_complexe&,nr_complexe&);
    friend  void operator *= (nr_complexe&,double);
    friend  void operator /= (nr_complexe&,nr_complexe&);
    friend  void operator /= (nr_complexe&,double);
    friend int operator == (nr_complexe&,nr_complexe&);
    friend int operator == (nr_complexe&,double);
    friend int operator == (double,nr_complexe&);
    friend int operator != (nr_complexe&,nr_complexe&);
    friend int operator != (nr_complexe&,double);
    friend int operator != (double,nr_complexe&);
    friend double abs (nr_complexe&);
    friend void sqrt (nr_complexe&,nr_complexe&,nr_complexe&);

    friend void ecuatie(nr_complexe&,nr_complexe&,nr_complexe&);
};

#endif // NR_COMPLEXE_H

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    int z = 25;
    double value = 2.50;
    int a = 10;
    int result;

    //max()
    result = max(x,y);
    cout<<"Maximum value = " << result;

    //min()
    result = min(x,y);
    cout<<endl<<"Minimum value = "<<result;

    //sqrt()
    result = sqrt(z);
    cout<<endl<<"Sqrt = "<<result;

    //round()
    result = round(value);
    cout<<endl<<"Round = "<<result;

    //log()
    result = log(a);
    cout<<endl<<"Log = "<<result;


    //abs()
    int x = -5;
    result = abs(x);
    cout << "Absolute = " << result;

    //acos() & asin() & atan()
    double y = 1.0;
    result = acos(y);
    cout << endl << "acos("<< y <<") = " << result << " radians";
    cout << endl << "acos("<< y <<") = " << result*180 / 3.141592 << " degrees";


    //cbrt
    int z = 2;
    result = cbrt(z);
    cout << endl << "Cube root of " << z << " = " << result;


        int X = 10.569;
    cout<<"X = "<<ceil(X);

    int Y = 10.23;
    cout<<"\nY = "<<ceil(Y);


    //1.  The cos() function in C++ returns the cosine of an angle (argument) given in radian.
    //2.  The cos() function takes a single mandatory argument in radians.
    //3.  The cos() function returns the value in the range of [-1, 1]. The returned value is either in double, float, or long double.

    double z = 30;
    cout<<"\ncos(z) = "<<cos(z);

    //01.  The cosh() is an inbuilt function in C++ STL which returns the hyperbolic cosine of an angle given in radians.

    //02.  The cosh() function takes a single mandatory argument representing a hyperbolic angle in radians.

    double A = 0.5;
    cout<<"\ncosh(0.5) = "<<cosh(A);


    //01.   The exp() function takes a single argument and returns exponential value in type double, float or long double type.
    //02.   The exp() function takes a single mandatory argument and can be any value i.e. negative, positive or zero.

    double B = 2.19;
	cout << "\nexp(x) = " << exp(B);


    //01.   The expm1() function in C++ returns the exponential (Euler's number) e raised to the given argument minus 1.
    //02.   The expm1() function takes a single mandatory argument (can be positive, negative or 0).

    double C = 2.19, result;
	result = expm1(C);
	cout << "e^" << C << " - 1 = " << result;



	//01.  The fabs() function in C++ returns the absolute value of the argument.
    //02.  The fabs() function takes a single argument and returns a value of type double, float or long double type.
    //03.  The fabs() function takes a single argument, x whose absolute value is returned.
    //04.  The fabs() function returns the absolute value of x i.e. |x|.

    double x = -10.25, result;
    result = fabs(x);
    cout << "fabs(" << x << ") = |" << x << "| = " << result << endl;

    long int x = -23;
    double result;

    result = fabs(x);
    cout << "fabs(" << x << ") = |" << x << "| = " << result << endl;




    //C++ fdim()
    int n1=30,n2=15;
    cout<<"fdim:"<<fdim(n1,n2); //if(n1>n2) return (30-15)=15 value //if(n1<n2) return 0;


    //double,float,long double use this function
    //floor()
     double x= 12.44;
    cout<<"floor value:"<<floor(x);


    //hypot(x,y) or (x,y,z)
    int x=5,y=10;
    cout<<"hypot value:"<<hypot(x,y); //hard math slove function

    //fma() //x*y+z only

    int x=5,y=4,z=3;
    cout<<fma(x,y,z);


    return 0;


}









int gcd(int a,int b)
{
  return (b==0) ? a : gcd( b , a%b ) ;
}



// There also exist a __gcd() fn in #include <algorithm>

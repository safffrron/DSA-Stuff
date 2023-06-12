
bool isPrime(int n)
{
  for(int i=0;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      return false;
    }
  }
  return true;
}


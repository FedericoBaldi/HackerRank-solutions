// https://www.hackerrank.com/challenges/30-more-exceptions
class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "n and p should be non-negative";
  }
} myex;

class Calculator{
    public:
    Calculator(){};
    int power(int n, int p){
        if (n < 0 || p < 0){
            myexception exception;
            throw exception;
        }
        else{
          return pow(n,p);  
        }
    }
};
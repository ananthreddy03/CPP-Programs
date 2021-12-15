 #include <iostream>
 using namespace std;



 int main()
 {
 	int n;
   int m;

   cout<<"Enter a Number"<<endl;
   cin>> n;
   cout<<"Enter the Divisor"<< endl;
   cin>> m;



   if(n%m  == 0)
   {
         cout << m << " is a Multiple of :: " << n << endl;
   }
   else
   {
      cout << "The Divisor "<< m <<" is not a multiple of "<< n  << endl;
   }

   // if (n%3 == 0)
   // {
   //    cout << "Remainder is :: " << n+2 << endl;
   //    cout<< "EVEN"<< endl;

   // }
   // else
   // {
   //     cout << "Remainder is :: " << n+2 << endl;
   //    cout<<"ODD"<< endl;

   // }
   




    
    



 	return 0;
 }
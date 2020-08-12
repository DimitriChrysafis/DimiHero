#include <array>
    #include <cmath>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #include <string>
    using namespace std;
    void printDivisors(int n)
    {
        for (int i=1;i<=n;i++)
            if (n%i==0)
                printf("%d ",i);
    }
    int largest(int arr[], int n){
        int i;
        int max = arr[0];
        for (i = 1; i < n; i++)
            if (arr[i] > max)
                max = arr[i];
        return max;
    }
    float findMedian(float a[], int n){
        sort(a, a + n);
        if (n % 2 != 0)
            return (double)a[n / 2];
      
        return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
    }
    int fact(long long n){
        if (n==0){
            return 1;
        }
        if (n > 0) {
            return n * fact(n - 1);
        }else{
            return 0;
        }
    }

    int choose(int n,int r){
        if(n==r) {
            return 1;
            }
        else {
            return (fact(n))/(fact(n-r)*fact(r));
            }
    }
    int gcd(int x, int y) {
       int big = max(x,y);
       int small = min (x,y);
        if(small == 0){
            return big;
        }
        int remainder = big % small;
        return gcd(small, remainder);
    }
    int main(int argc, const char* argv[]) {
        cout << "Type a command.";
        cout << endl;
        cout << "Press '1'  for, choose";
        cout << endl;
        cout << "'2' for factorial ";
        cout << endl;
        cout <<"'3' for modulo";
        cout << endl;
        cout << "'4' for mean";
        cout << endl;
        cout << "'5' for median";
        cout << endl;
        cout <<  "'6' for mode";
        cout << endl;
        cout << "'7' for sorting a list";
        cout << endl;
        cout << "'8' for gcd of numbers";
        cout << endl;
        cout <<   "'9' for converting a number from base 10 to base x";
        cout << endl;
        cout <<  "'10' for adding fractions";
        cout << endl;
        cout <<   "'11' for finding the divisors";
        cout << endl;
        cout <<  "YOU MUST PRESS ENTER AFER TYPING EVERY NUMBER!!!" << endl;
        string i;
        cin >> i;
        if(i == "choose" || i == "1"){
            cout << "Type the two numbers you want and press enter after typing it" << endl;
        int x;
        int y;
        cin >> x;
        cout << "Now input the next number... and press enter after typing itx" << endl;
        cin >> y;
        cout << x << " choose " << y << " is "<<  choose(x,y) << endl;
            }
        if(i == "factorial" || i == "2"){
            cout << "Type the number you want to be factorialed, and you will get your desired output. and press enter after typing it" << endl;
            long long f;
            cin >> f;
            if(f > 30){
                cout << "Sorry, restart the prgram and try a smaller number" << endl;
                return 0;
            }
            cout << f << " factorial = " << fact(f) << endl;
        }
        if(i == "modulo" || i == "mod" || i == "3"){
            cout << "Type the number you want to be modded, and you will get your desired output." << endl;
            int f;
            cin >> f;
            int z;
            cout << "Now input the next number... and press enter after typing it" << endl;
            cin >> z;
            cout << f << " mod " << z << " = "<< f%z << endl;
        }
        if(i == "mean" || i == "4"){
            cout << "How many numbers do you want to find the mean/average of?" << endl;
            int p;
            cin >> p;
            float total = 0;
            int arr[p];
            cout << "Great job! Now, imput the list of numbers you want... and press enter after typing each one" << endl;
            for(int i = 0; i < p; i++){
                cin >> arr[i];
                total = total + arr[i];
            }
            total = total/p;
            cout << "The mean of the numbers is " << total << endl;
        }
        if(i == "sort" || i == "7"){
            cout << "How many numbers do you want sorted? " << endl;
            int num;
            cin >> num;
            cout << "Now input those numbers that you want sorted and press enter after typing each one" << endl;
            int arr[num];
            for(int i=0; i < num; i++){
                cin >> arr[i];
            }
            sort(arr, arr+num);
            cout << "The sorted elements are " << endl;
            for(int i=0; i < num; i++){
                cout << arr[i] << " ";
            }
        }
        if(i == "median"|| i == "5"){
            cout <<"how many numbers do you want the median of? " << endl;
            int n;
            cin >> n;
            cout << "Now type the numbers and press enter after typing each one" << endl;
            float arr[n];
            for(int x=0; x < n; x++){
                cin >> arr[x];
            }
           cout << "The median of the numbers is : " << findMedian(arr,n) << endl;
        }
        if(i == "mode" || i == "6"){
            cout <<"how many numbers do you want the mode of? " << endl;
            int n;
            cin >> n;
            cout << "Now type the numbers and press enter after typing each one and press enter after typing each one" << endl;
            int arr[n];
            for(int x=0; x < n; x++){
                cin >> arr[x];
            }
            int number = arr[0];
            int mode = number;
            int count = 1;
            int countMode = 1;
            for (int i=1; i< n; i++){
                  if (arr[i] == number){
                     ++count;
                  }
            else{
            if (count > countMode){
            countMode = count;
            mode = number;
                        }
                count = 1;
                number = arr[i];
              }
            }

            cout << "The mode of the numbers is : " << mode << endl;
        }
        if(i == "divisor" || i == "divisors" ||i == "div"|| i == "11"){
            long int n,i;
               cout << "Enter the number: ";
               cin >> n;
               cout << endl<<"Divisors of "<<n<<" are";
            
               for(i=1;i<=n;++i){
                   if(n%i==0)
                       cout<<" "<<i;
               }
            cout << endl;
        }
        if(i == "gcd" || i == "greatestcommondivisor"|| i == "9"){
            int x;
            int y;
             cout << "Enter the numbers: and press enter after typing each one";
            cin >> x;
            cin >> y;
            int z = gcd(x,y);
            cout <<"The gcd of " << x << " and " << y << " is " << z << endl;
        }
        if(i == "bases" || i == "convertbases"){
            cout << "Here, you can input a number n and a base m. The number n is in base 10. Then, I will output n in base m" << endl;
            int athingie, aweirdnumber, breakfast;
            unsigned int mythingamajig;
            string iusestrings, answer;
            cout << "Now, input n, in base 10. Make sure to press enter after you do." << endl;
            cin >> mythingamajig;
            cout << "Now input m, the base you want it to be converted to. Make sure to press enter after you do." << endl;
            cin >> breakfast;

            athingie = mythingamajig;

            while (mythingamajig != 0){
                aweirdnumber = mythingamajig % breakfast;

                if (aweirdnumber < 10)
                    iusestrings = '0' + aweirdnumber;
                else
                    iusestrings = aweirdnumber - 10 + 'A';

                answer = iusestrings + answer;

                mythingamajig /= breakfast;
            }
            cout << answer << endl;
            return 0;
        }
        if(i == "addfraction"  || i == "addfractions"|| i == "10"){
            int num1,den1;
               cout << "Enter numerator and denominator of first number. Press enter after typing the numerator, and do not include a slash also, press enter after typing the denominator " << endl;
               cin >> num1 >> den1;
               int num2,den2;
               cout << "Enter numerator and denominator of second number: Press enter after typing the numerator, and do not include a slash also, press enter after typing the denominator" << endl;
               cin >> num2 >> den2;
               int lcm = (den1*den2)/gcd(den1,den2);
               int sum=(num1*lcm/den1) + (num2*lcm/den2);
               int num3=sum/gcd(sum,lcm);
               lcm=lcm/gcd(sum,lcm);
               cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm << endl;
        }
    }

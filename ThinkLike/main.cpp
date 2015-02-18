#include <iostream>

using namespace std;

void PrintHalfTriangle(int n);
void PrintSideTriangle(int n);
int LuhnCheckSum();
int doubleDigitValue(int digit);

int main()
{
    unsigned short n = 1;
    cout << "Hello world!" << endl;



    char digit;
    int checksum = 0;
    int position = 1;
    cout<<" enter a number iwth even number of digits: ";
    digit = cin.get();

    while(digit != 10){

    if(position % 2 == 0) checksum += digit - '0';
    else checksum += 2* (digit - '0');

    digit = cin.get();
    position++;

    }

    cout<< "Checksum is "<< checksum<< ". \n";




    //n = LuhnCheckSum();

    //cout<<n;





    return 0;
}

int LuhnCheckSum(){

    char digit;
    int Val =0;
    /*
    cout<<"Enter a one-digit number: ";
    digit = cin.get();
    int sum = (int)digit - 48;
    */
    for(int i = 1; i <=7; i++){

    cout<<"\nEnter a one-digit number: ";
    cin >>digit;
    int sum = (int)digit - 48;

    if(i%2 == 0){

     sum = doubleDigitValue(sum);

    }


    Val =  Val + sum;


    }

    return Val;

}

int doubleDigitValue(int digit){

    int doubleDigit = digit*2;
    int sum;

    if(doubleDigit>10) sum = 1 + doubleDigit % 10;
    else sum = doubleDigit;

    return sum;
}


void PrintHalfTriangle(int n){


    for(int col=0; col<n; col++){

        for(int row =0; row<(n-col); row++){
            cout<<"#";
        }

        cout<<"\n";

    }

    return;
}



void PrintSideTriangle(int n){

    int j;

    for(int col = 0; col<n*2; col++){

        if(col<n){j=col;}
        else{j=(n*2-col);}

        for(int row = 0; row<j;row++){
            cout<<"#";
        }

        cout<<"\n";

    }



}

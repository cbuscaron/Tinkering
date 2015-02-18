#include <iostream>

using namespace std;

void PrintHalfTriangle(int n);
void    PrintSideTriangle(int n);
void    LuhnCheckSum();

int main()
{
    unsigned short n = 0;
    cout << "Hello world!" << endl;

while(n != 99){
    cin >> n;

    LuhnCheckSum();


}
    return 0;
}

void    LuhnCheckSum(){

        int digit;
        int sum;
        while(digit!=99){
        cout<<"Enter a single digit number, 0-9: ";
        cin>>digit;
        if(digit==99) break;

        int doubledDigit = digit*2;


        if(doubledDigit >= 10) sum += 1+ doubledDigit%10;
        else sum += doubledDigit;
        }


        cout<<"Sum of digits in doubled number: "<<sum<<"\n";


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



void    PrintSideTriangle(int n){

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

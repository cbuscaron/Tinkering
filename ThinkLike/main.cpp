#include <iostream>

using namespace std;

int main()
{
    unsigned short n = 0;
    cout << "Hello world!" << endl;

while(n != 99){
    cin >> n;
    int j;

    for(int col = 0; col<n*2; col++){


        if(col<n){j=col;}

        else{j=(n*2-col);}

        for(int row = 0; row<j;row++){
            cout<<"#";
        }

        cout<<"\n";

    }

   /* //Half Tirangle
    for(int col=0; col<n; col++){

        for(int row =0; row<(n-col); row++){
            cout<<"#";
        }

        cout<<"\n";

    }
    */
}
    return 0;
}

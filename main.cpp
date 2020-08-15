/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

typedef struct food{
    std::string name;
    int price;
}food;

/*class Table{
    int num;
    vector <food> iznos;     mozda nekad kasnije...?
};*/

int main()
{
    vector <food> hrana;
    
   /* cout << "Izaberite sto: " << endl;
    
    int tnmb;
    cin >> tnmb; */
    
    cout << "Izaberite stavku sa menija: " <<endl;
    cout << "***  0. Pljeskavica......250din  ***" <<endl;
    cout << "***  1. Pomfrit...........90din  ***" <<endl;
    cout << "***  2. Pilece belo......250din  ***" <<endl;   
    hrana.push_back({"pljeskavica", 250}); // 0
    hrana.push_back({"pomfrita", 90});
    hrana.push_back({"pileceg", 250});
    
    int i = hrana.size();
    //printf("%d\n", i);
    cout << endl;
    
    int ukupno = 0, amount, firsty = 1;
    char choice;
    while(choice != 'n'){    
        if(firsty == 0){
            printf("\n");
            printf("Jos nesto?\nd\\n");
        }
        
        cin >> choice;
        if(choice == 'd'){
            printf("\n");
            cin >> choice;
        }
        
        if(((int)choice - 48) >= i && choice != 'd' && choice != 'n'){
            cout << "Ne postoji ta stavka!\n";
            continue;
        }
        
        if(choice != 'n'){    
            cout << "Koliko " << hrana[((int)choice - 48)].name << "?" <<endl;
        }
        
        else{
            break;
        }
        
        cin >> amount;
        //cout << (int)choice <<endl;
        ukupno = ukupno + ((hrana[((int)choice - 48)].price) * amount);
        firsty = 0;
    } 
    
    
    cout << "Ukupna cena je: " << ukupno << "din" <<endl;
    return 0;
}





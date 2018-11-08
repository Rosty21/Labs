#include <iostream>
#include "liblab3.h"

using namespace std;

void Bubblesort (int a1[],int x[], int sz){ // Ѕульбальшка
            int i,j;
            for (i=0; i < sz; i++){ // ≥ - номер проходу
                for (j = sz - 1; j > i; j--){ // внутр цикл проходу
                    if (a1[j-1] > a1[j]){
                    x[sz] = a1[j-1]; a1[j-1]=a1[j]; a1[j] = x[sz]; // зам≥на м≥сц€ми двох сус≥дн≥х елемент≥в
                    }
                }
            }
    }

    void Selectsort (int a2[],int x[], int sz){ // ¬иб≥рка

    int i,j,k;
    for (i = 0; i < sz; i++){ // ≥ - номер проходу
        k = i; x[sz] = a2[i];

        for (j = i+1; j < sz; j++) // цикл вибора найменшого елемента
            if (a2[j] < x[sz]){
                k = j; x[sz] = a2[j]; // ≥ндекс найменшого елемента
            }
        a2[k] = a2 [i]; a2[i] = x[sz]; // зам≥на м≥сц€ми найменшого з а[i]
        }
    }

    void Insertsort (int a3[],int x[], int sz){ //¬ставка

    int i,j;
    for (i=0; i < sz; i++){ // цикл проход≥в, ≥ - номер прохода
          x[sz] = a3[i];

          // пошук м≥сц€ елемента в готов≥й посл≥довност≥
            for ( j =i-1; j>=0 && a3[j] > x[sz]; j--)
                a3[j+1] = a3[j]; // зсувв елемента направо поки не д≥йшли

            a3[j+1] = x[sz]; // м≥сце знайдено, вставити
        }
    }

    void Output (int sz, int a[]){ // ‘ункц≥€ дл€  виводу масиву
    for(int i = 0; i < sz; i ++) {
    cout << a[i] << ' ';
        }
    cout << "\n";
    }

    int Menu(){ // ‘ункц≥€ меню
    int var;
    cout << "\n\n\nChoose one\n";
    cout << "1.Bubble\n"
         << "2.Select\n"
         << "3.Insert\n"
         << "4.Exit" << endl;
    cout << ">>>> ";
    cin >> var;
    return var;
}

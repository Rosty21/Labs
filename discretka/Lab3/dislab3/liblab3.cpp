#include <iostream>
#include "liblab3.h"

using namespace std;

void Bubblesort (int a1[],int x[], int sz){ // �����������
            int i,j;
            for (i=0; i < sz; i++){ // � - ����� �������
                for (j = sz - 1; j > i; j--){ // ����� ���� �������
                    if (a1[j-1] > a1[j]){
                    x[sz] = a1[j-1]; a1[j-1]=a1[j]; a1[j] = x[sz]; // ����� ������ ���� ������ ��������
                    }
                }
            }
    }

    void Selectsort (int a2[],int x[], int sz){ // ������

    int i,j,k;
    for (i = 0; i < sz; i++){ // � - ����� �������
        k = i; x[sz] = a2[i];

        for (j = i+1; j < sz; j++) // ���� ������ ���������� ��������
            if (a2[j] < x[sz]){
                k = j; x[sz] = a2[j]; // ������ ���������� ��������
            }
        a2[k] = a2 [i]; a2[i] = x[sz]; // ����� ������ ���������� � �[i]
        }
    }

    void Insertsort (int a3[],int x[], int sz){ //�������

    int i,j;
    for (i=0; i < sz; i++){ // ���� �������, � - ����� �������
          x[sz] = a3[i];

          // ����� ���� �������� � ������ �����������
            for ( j =i-1; j>=0 && a3[j] > x[sz]; j--)
                a3[j+1] = a3[j]; // ����� �������� ������� ���� �� �����

            a3[j+1] = x[sz]; // ���� ��������, ��������
        }
    }

    void Output (int sz, int a[]){ // ������� ���  ������ ������
    for(int i = 0; i < sz; i ++) {
    cout << a[i] << ' ';
        }
    cout << "\n";
    }

    int Menu(){ // ������� ����
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

#include<iostream>
using namespace std;
void add(int a[], int x[], int q);
void complement(int a[], int n) {
   int i;
   int x[8] = { NULL };
   x[0] = 1;
   for (i = 0; i < n; i++) {
      a[i] = (a[i] + 1) % 2;
   }
   add(a, x, n);
}
void add(int ac[], int x[], int q) {
   int i, c = 0;
   for (i = 0; i < q; i++) {
      ac[i] = ac[i] + x[i] + c;
      if (ac[i] > 1) {
        ac[i] = ac[i] % 2;
         c = 1;
      }else
         c = 0;
      }
   }
   void ashr(int ac[], int qr[], int &qn, int q) {
      int temp, i;
      temp = ac[0];
      qn = qr[0];
      std::cout<< "\t\tashr\t\t";
      for (i = 0; i < q - 1; i++) {
         ac[i] = ac[i + 1];
         qr[i] = qr[i + 1];
      }
      qr[q - 1] = temp;
   }
   void display(int ac[], int qr[], int qrn) {
    int i;
      for (i = qrn - 1; i >= 0; i--)
         std::cout<< ac[i];
      std::cout<< " ";
      for (i = qrn - 1; i >= 0; i--)
         std::cout << qr[i];
   }
   int main(int argc, char **argv) {
      int mt[10], br[10], qr[10], sc, ac[10] = { 0 };
      int brn, qrn, i, qn, temp;
      std::cout<< "--Enter the multiplicand and multipier in signed 2's complement form if negative--";
      std::cout<< " Number of multiplicand bit=";
      cin >> brn;
      std::cout << " multiplicand=";
      for (i = brn - 1; i >= 0; i--)
         cin >> br[i]; //multiplicand
      for (i = brn - 1; i >= 0; i--)
         mt[i] = br[i];
      complement(mt, brn);
      std::cout << "No. of multiplier bit=";
      cin >> qrn;
      sc = qrn;
      std::cout << "Multiplier=";
      for (i = qrn - 1; i >= 0; i--)
         cin >> qr[i];
         qn = 0;
temp = 0;
         std::cout << "qn\tq[n+1]\t\tBR\t\tAC\tQR\t\tsc";
         std::cout << "\t\t\tinitial\t\t";
         display(ac, qr, qrn);
         std::cout << "\t\t" << sc << " ";
         while (sc != 0) {
            std::cout << qr[0] << "\t" << qn;
            if ((qn + qr[0]) == 1) {
               if (temp == 0) {
                  add(ac, mt, qrn);
                  std::cout << "\t\tsubtracting BR\t";
                  for (i = qrn - 1; i >= 0; i--)
                     std::cout << ac[i];
                  temp = 1;
               }
            else if (temp == 1) {
               add(ac, br, qrn);
               std::cout << "\t\tadding BR\t";
               for (i = qrn - 1; i >= 0; i--)
                  std::cout << ac[i];
                  temp = 0;
            }
            std::cout << "\t";
            ashr(ac, qr, qn, qrn);
         }
         else if (qn - qr[0] == 0)
            ashr(ac, qr, qn, qrn);
            display(ac, qr, qrn);
            std::cout << "\t";
            sc--;
            std::cout << "\t" << sc << " ";
   }
   std::cout << "Result=";
   display(ac, qr, qrn);
}
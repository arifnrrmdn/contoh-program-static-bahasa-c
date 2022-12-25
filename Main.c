#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//deklarasi fungsi
void angka();

//deklarasi variabel
int i = 10;

int main()
{
    system("cls");
    printf("Nilai i sebelum fungsi dipanggil = %d\n",i);
    angka();
    printf("Nilai i setelah fungsi dipanggil = %d\n",i+3);
    angka();
    getch();
    return 0;
}

//definisi fungsi
void angka(){
    static int i = 5;
    i+=3;
    printf("Nilai i dalam fungsi = %d\n",i);
}
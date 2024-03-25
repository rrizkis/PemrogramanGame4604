#include <iostream>
using namespace std;

void use_herbs(int herbs, int hp_char){
    cout << "Sisa Herbs Anda sekarang : " << herbs << endl;
    cout << "HP Anda sekarang : " << hp_char << endl;
}

void use_manapotion(int mana_potion, int mana_char){
    cout << "Mana Anda sekarang : " << mana_char << endl;
    cout << "Sisa Mana Potion Anda sekarang : " << mana_potion << endl;
}

void use_hppotion(int hp_potion, int hp_char){
    cout << "Sisa HP Potion Anda sekarang : " << hp_potion << endl;
    cout << "HP Anda sekarang : " << hp_char << endl;
}

int main()
{
    int herbs = 10;
    int mana_potion = 5;
    int hp_potion = 8;
    int swords[5] = {1,2,3,4,5};
    int mana_char = 50;
    int hp_char = 80;
    int equipped_sword;
    int damage = 10;
    int pilihan;
    char lanjut;

    cout << "Selamat datang di Hutan Ajaib." << endl;
    do{
        cout << "Berikut daftar item yang Anda miliki :" << endl;
        cout << "1. Herbs" << endl;
        cout << "2. Mana potion" << endl;
        cout << "3. HP potion" << endl;
        cout << "4. Sword" << endl;
        cout << "Untuk melanjutkan petualangan, silahkan pilih item yang ingin dipakai :";
        cin >> pilihan;

        if (pilihan == 1){
            use_herbs(herbs - 1, hp_char + 10);
        }
        else if (pilihan == 2){
            use_manapotion(mana_potion - 1, mana_char + 50);
        }
        else if (pilihan == 3){
            use_hppotion(hp_potion - 1, hp_char + 50);
        }
        else if (pilihan == 4){
            cout << "Silahkan pilih pedang yang ingin Anda pakai : ";
            cin >> equipped_sword;
            if (equipped_sword >= 1 && equipped_sword <= 5){
                cout << "Anda menggunakan pedang " << swords[equipped_sword - 1] << ". Damage Anda sekarang " << damage + equipped_sword * 10 << endl;
            }
            else{
                cout << "Anda belum unlock pedang tersebut" << endl;
            }
        }
        else {
            cout << "What are you talking about bruh?" << endl;
        }
        cout << "Apakah Anda ingin memilih item yang lain lagi? (y/n)";
        cin >> lanjut;
    }while (lanjut == 'y' || lanjut == 'Y');

    cout << "Terimakasih sudah bermain! :)" << endl;
    return 0;
}

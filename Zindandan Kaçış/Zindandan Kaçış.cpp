#include <iostream>
using namespace std;

int main() {

    string oyuncuAdi;
    int secim;

    cout << "=== ZINDANDAN KACIS MACERASI === \n";
    cout << "Karakterin Adi Ne Olsun Kahraman? \n Adin : ";
    cin >> oyuncuAdi;

    cout << "\nHos Geldin " << oyuncuAdi << " ! Gozlerini karanlik, rutubetli bir zindanda aciyorsun \n";
    cout << "Kapi kilitli ama yerde pasli bir anahtar ve bir tas parcasi duruyor \n \n";

    cout << "[1] Pasli anahtari al ve kapiyi acmaya calis.\n";
    cout << "[2] Tas parcasiyla kapinin kilidini kirmaya calis.\n";
    cin >> secim;

    if (secim == 1) {

        cout << "\n[BASARI] Harika! Anahtar kilide tam oturdu. Kapi gicirdayarak acildi!\n";
        cout << "Karanlik uzun bir koridora adim atiyorsun...\n\n";

        // --- 2. BOLUM: KORIDOR VE YOL AYRIMI ---

        cout << "Ilerde yol ikiye ayriliyor. Hangi yone gitmek istersin?\n";
        cout << "[1] Sol taraf: Zindandaki arkadasin \"Beni burada birakacak misin?\" diyor.\n";
        cout << "[2] Sag taraf: Soguk bir ruzgar esiyor ve hafif bir isik siziyor.\n";
        cout << "Secimin (1 veya 2): ";
        cin >> secim;

        if (secim == 1) {

            cout << "\nArkadasinla bulusuyorsun ve birlikte kacmaya karar veriyorsunuz.\n";
            cout << "Ancak, gardiyanlar sizi fark ediyor ve kovalamaca basliyor!\n";
            cout << "Kacinmak icin bir secim yapmalisin:\n";
            cout << "[1] Sag tarafa kos.\n";
            cout << "[2] Sol tarafa kos.\n";
            cin >> secim;

            if (secim == 1) {
                cout << "\n[BASARI] Sag tarafa kosuyorsun ve gardiyanlardan kaciyorsun!\n";
                cout << "Zindandan kacmayi basardiniz! Tebrikler!\n";
            }
            else if (secim == 2) {
                cout << "\n[HATA] Sol tarafa kosuyorsun ama gardiyanlar seni yakaladi.\n";
                cout << "Zindana geri donmek zorunda kaliyorsun. Oyun bitti.\n";
            }
        }
        else if (secim == 2) {
            cout << "\nSoguk ruzgar esiyor ve isik sizi cezbediyor.\n";
            cout << "Ancak, bu yol bir tuzak! Gardiyanlar sizi fark ediyor ve yakaliyor.\n";
            cout << "Zindana geri donmek zorunda kaliyorsunuz. Oyun bitti.\n";
        }
    }
    else if (secim == 2) {
        cout << "\nKut! Tas parcasi elinde ufalandi ve seslere uyanan dev bir canavar uyandi!\n";
        cout << "Canavarin aksam mezesi oldun! Oyun bitti.\n";
    }

    return 0;
}
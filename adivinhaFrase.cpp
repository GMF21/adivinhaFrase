#include <iostream>

using namespace std;

void escolherFrase(string &frase) {
    cout << "Insere a frase: ";
    getline(cin, frase);
}

void exibirFraseOculta(string &frase, string &acertos) {
    for (char c : frase) {
        if (c == ' ') {
            cout << " ";
        } else if (acertos.find(c) != string::npos) {
            cout << c;
        } else {
            cout << "_";
        }
    }
    cout << endl;
}

int main() {
    string frase, acertos;
    char letra;

    escolherFrase(frase);
    
    cout << "Adivinhe a frase!" << endl;
    
    while (true) {
        exibirFraseOculta(frase, acertos);
        
        cout << "Digite uma letra: ";
        cin >> letra;
        
        if (acertos.find(letra) == string::npos) {
            acertos += letra;
        }
    }

    return 0;
}

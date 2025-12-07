#include <iostream>
#include <string>

void compareStdStrings() {
    std::string s1 = "alpha";
    std::string s2 = "beta";

    std::cout << "Confronto std::string:\n";
    if (s1 == s2) {
        std::cout << "Le stringhe sono uguali.\n";
    } else if (s1 < s2) {
        std::cout << s1 << " è minore di " 
            << s2 << " (ordine lessicografico).\n";
    } else {
        std::cout << s1 << " è maggiore di " 
            << s2 << " (ordine lessicografico).\n";
    }
}
// Output atteso: alpha è minore di beta (ordine lessicografico).i


#include <cstring> // Necessario per strcmp

void compareCStrings() {
    const char* cs1 = "world";
    const char* cs2 = "hello";

    int result = std::strcmp(cs1, cs2);

    std::cout << "\nConfronto Stringhe-C (risultato strcmp: " 
        << result << "):\n";
    if (result == 0) {
        std::cout << "Le stringhe sono uguali.\n";
    } else if (result < 0) {
        std::cout << cs1 << " è minore di " << cs2 << ".\n";
    } else {
        std::cout << cs1 << " è maggiore di " << cs2 << ".\n";
    }
}

#include <cstddef> // Necessario per size_t

int main() {
    compareStdStrings();
    compareCStrings();
    // 1. Definizione di due array di caratteri (stringhe-C terminate da null)
    const char arr1[] = "Hello, "; // Lunghezza: 7 caratteri + 1 (\0)
    const char arr2[] = "World!";    // Lunghezza: 6 caratteri + 1 (\0)

    // Calcolo della dimensione necessaria per l'array di destinazione
    // Lunghezza totale = (lunghezza arr1) + (lunghezza arr2) + 1 (per il terminatore finale)
    constexpr size_t len1 = sizeof(arr1) - 1; // Rimuovi il \0 di arr1
    constexpr size_t len2 = sizeof(arr2) - 1; // Rimuovi il \0 di arr2
    constexpr size_t total_len = len1 + len2 + 1; // 7 + 6 + 1 = 14

    // 2. Definizione del terzo array per la concatenazione
    char concat_array[total_len]; 

    // 3. Uso di strcpy: Copia arr1 in concat_array
    // strcpy copia la stringa e il suo terminatore nullo.
    std::strcpy(concat_array, arr1);
    // Ora concat_array contiene: "Hello, \0"

    // 4. Uso di strcat: Accoda arr2 a concat_array
    // strcat trova il \0 nell'array di destinazione e inizia la copia da lì,
    // sovrascrivendo il vecchio \0 e aggiungendo un nuovo \0 alla fine.
    std::strcat(concat_array, arr2);
    // Ora concat_array contiene: "Hello, World!\0"

    // Output del risultato
    std::cout << "Array 1: " << arr1 << "\n";
    std::cout << "Array 2: " << arr2 << "\n";
    std::cout << "Concatenazione: " << concat_array << "\n";

    return 0;
}
// Output atteso: Concatenazione: Hello, World!

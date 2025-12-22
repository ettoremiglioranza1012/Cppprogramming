#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

int main(void) {

    // containers declaration
    std::vector<double> valori_numerici;
    std::vector<std::string> errori_di_conversione;

    while( (true) ) {
        std::string input_stringa;
        std::cin >> input_stringa;

        if (input_stringa == "FINE") {
            break;
        }

        try {
            // uniform init gives error if trying to convert to wrong type
            double valore_convertito {std::stod(input_stringa)}; 
            valori_numerici.push_back(valore_convertito);
        } catch (const std::invalid_argument& e) {
            // Handling conversion error
            errori_di_conversione.push_back(input_stringa);
        } catch (const std::out_of_range& e) {
            // Handling of overflow/underflow error
            errori_di_conversione.push_back(input_stringa);
        }
    }
    double mean = 0.0;
    if (!valori_numerici.empty()) {
        auto cit = valori_numerici.cbegin();
        auto cend = valori_numerici.cend();
        size_t size = valori_numerici.size();
        double sum = 0;
        for (; cit != cend; ++cit) {
            sum += *cit; 
        }
        mean = sum / size;
    }
    
    // report
    std::cout << "Total number of numeric values: "
        << valori_numerici.size() << std::endl;
    std::cout << "Mean of values: "
        << mean << std::endl;
    std::cout << "Total number of conversion error: "
        << errori_di_conversione.size() << std::endl;
    if (!errori_di_conversione.empty()) {
        std::cout << "Conversion errors: ";
        auto cit = errori_di_conversione.cbegin();
        auto cend = errori_di_conversione.cend();
        for(; cit != cend; ++cit) {
            std::cout << *cit << "\t";
        }
        cout << std::endl;
    }
    return 0;
}

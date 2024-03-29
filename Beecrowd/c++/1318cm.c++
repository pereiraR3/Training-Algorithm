#include <iostream>
#include <map> // Usar map em vez de set
using namespace std;

int main() {
    int origin_carts, number_people, cart_for_people;

    while (true) {
        cin >> origin_carts >> number_people;

        if (origin_carts == 0 && number_people == 0) {
            break; // Termina o loop se ambas as entradas forem 0
        }

        map<int, int> cart_counts; // Mapa para contar as repetições de cada cart

        for (int i = 0; i < number_people; ++i) {
            cin >> cart_for_people;
            cart_counts[cart_for_people]++; // Incrementa a contagem para este cart
        }

        int counter = 0;
        for (const auto& pair : cart_counts) {
            if (pair.second > 1) { // Se houver mais de uma repetição
                counter++;
            }
        }

        cout << counter << endl; // Imprime o número de carts com mais de uma repetição

        // Não é necessário limpar cart_counts, pois ele é recriado a cada loop
    }

    return 0;
}

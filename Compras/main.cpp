#include <iostream>
#include <map>

int main() {

    int N;

    std:: cin >> N;

    if(N < 1 || N > 10) {
        return -1;
    }

    while (N > 0) {
        int M;

        std:: cin >> M;

        if(M < 1 || M > 50) {
            return -1;
        }

        std::map<std::string, double> products;
        std::string product_name; double price;

        for(int i = 0; i < M; i++) {
            std:: cin >> product_name; std::cin >> price;
            products[product_name] = price;
        }

        int P;
        std:: cin >> P;
        if(P < 1 || P > M) {
            return -1;
        }

        double final_price = 0.00; int quantity;

        for(int i = 0; i < P; i++) {
            std::cin >> product_name;
            std::cin >> quantity;
            final_price += products[product_name] * quantity;
        }

        std::cout << "Bs. " << final_price << std::endl;
        N--;
    }

    return 0;
}

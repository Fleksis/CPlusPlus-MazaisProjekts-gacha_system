#include <iostream>
#include <string>

int main(){
    int S_wish = 0, S_4star = 1, S_pity_4star = 0, S_5star = 0, S_pity_5star = 0;
    int E_wish = 0, E_4star = 0, E_pity_4star = 0, E_5star = 0, E_pity_5star = 0;

    int D_wish = 0, P_number;
    std::string wish_izvele = " ";
    std::string wish_stop = " ";

    srand((unsigned int)time(NULL));

    while (wish_stop != "stop" || "Stop") {
        std::cout << "Ievadi kādu banneri tu gribi wishot (Standart vai Event) : ";
        std::cin >> wish_izvele;
        if (wish_izvele == "Standart" || wish_izvele == "standart" || wish_izvele == "s"){

            std::cout << "Cik daudz tu gribi wishot (1 vai 10): ";
            std::cin >> D_wish;
            if (D_wish == 1)
            {
                P_number = rand() % 1000 + 1;
                std::cout << P_number << std::endl;

                S_wish = S_wish + 1;

                if (S_wish != 90){
                    if (S_5star == 1 && P_number <= 16 && S_4star == 10) {
                        S_wish = 1;
                        S_5star = 1;
                        std::cout << "Apsveicu, tu dabuju 5star characteri! " << S_wish << "\n\n";
                        continue;
                    }
                    else if (S_4star == 10) {
                        S_4star = 1;
                        std::cout << "Apsveicu, tu dabuju 4star charateri! " << S_wish << "\n\n";
                        continue;
                    }
                    else if (S_5star != 1 || S_4star != 1) {
                        if (P_number <= 16){
                            std::cout << "5star " << S_wish << "\n\n";
                            S_wish = 0;
                            S_5star = 0;
                            S_4star = S_4star + 1;
                            continue;
                        }
                        else if (P_number >= 17 && P_number <= 130) {
                            std::cout << "4star " << S_wish << "\n\n";
                            S_4star = 1;
                            S_5star = S_5star + 1;
                            continue;
                        }
                        else if (P_number >= 131) {
                            std::cout << "3star " << S_wish << "\n\n";
                            S_4star = S_4star + 1;
                            S_5star = S_5star + 1;
                            continue;
                        }
                    }
                }
                else if(S_wish == 90) {
                  std::cout << "Apsveicu, tu dabuju 5star characteri! " << S_wish << "\n\n";
                  S_wish = 0;
                }
                else {
                  std::cout << "Kaut kas salūza!";
                }
            }else {
              std::cout << "error";
            }
        }
    }
    return 0;
}
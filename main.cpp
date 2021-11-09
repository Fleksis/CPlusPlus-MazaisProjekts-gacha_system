#include <iostream>
#include <string>

int softPity3(int iespejamiba3){
  int star3Soft = 43;
  iespejamiba3 = iespejamiba3 + star3Soft;
  return iespejamiba3;
}

int softPity5(int iespejamiba5){
  int star5Soft = 43;
  iespejamiba5 = iespejamiba5 + star5Soft;
  return iespejamiba5;
}


int main()
{
    /*
    /Standarta banners\
    S_wish: Standarta wish
    S_4star: 4star Garanta skaits.
    S_5star: 5star Garanta skaits.

    /Statistika\
    S_3starSkaits: Cik daudz izkrita 3 star lietas pa 1 sesiju.
    S_4starSkaits: Cik daudz izkrita 4 star lietas pa 1 sesiju.
    S_5starSkaits: Cik daudz izkrita 5 star lietas pa 1 sesiju.

    /Iespējamība\
    iespejamiba3: programmā tiek norādīts sākotnējā iespējamība dabūt 3star lietu, kur pēc tam tiks mainīta
    iespejamiba5: programmā tiek norādīts sākotnējā iespējamība dabūt 5star lietu, kur pēc tam tiks mainīta

    wish_stop: Cilvēks ievadot vārdu "stop" vai "Stop" tiks apstādināta programma un izvadīs statistiku 
    wish_izvele: Cilvēka izvēle kāds banners tiks verts vaļā.
    */
    int S_wish = 0, S_4star = 1, S_5star = 0;//Standarta bannera garanta skatiļi
    int E_wish = 0, E_4star = 0, E_5star = 0;//Eventa bannera garanta skatiļi
    int S_3starSkaits = 0, S_4starSkaits = 0, S_5starSkaits = 0; //Statestika
    int iespejamiba3 = 148, iespejamiba5 = 17;

    int D_wish = 0, P_number;
    std::string wish_izvele = " ";
    std::string wish_stop = " ";

    srand((unsigned int)time(NULL));

    while (wish_stop != "stop" || wish_stop == "Stop") {
        std::cout << "Ievadi kādu banneri tu gribi wishot (Standart vai Event): ";
        std::cin >> wish_izvele;
        wish_stop = wish_izvele;
        if (wish_stop == "stop" || wish_stop == "Stop") {
          std::cout << "-=Sasniegumi=- \n";
          std::cout << S_5starSkaits << std::endl;
          std::cout << S_4starSkaits << std::endl;
          std::cout << S_3starSkaits << std::endl;
          break;
        }
        else if (wish_izvele == "Standart" || wish_izvele == "standart" || wish_izvele == "s"){
            std::cout << "Cik daudz tu gribi wishot (1 vai 10): ";
            std::cin >> D_wish;
            //D_wish = 1;
            if (D_wish == 1){
                P_number = rand() % 1000 + 1;
                // std::cout << P_number << std::endl;
                // P_number = 1000;
                // std::cout << "Ievadi skaitli: " << P_number << std::endl;

                //std::cout << "Ievadi skaitli: ";
                //std::cin >> P_number;
                S_wish = S_wish + 1;

                if (S_wish <= 74){
                    if (P_number <= 6 && S_4star == 10) {
                        S_wish = 1;
                        S_5star = 1;
                        std::cout << "Apsveicu, tu dabuju 5star characteri! " << S_wish << "\n\n";
                        S_5starSkaits = S_5starSkaits + 1;
                        continue;
                    }
                    else if (S_4star == 10) {
                        S_4star = 1;
                        std::cout << "Apsveicu, tu dabuju 4star charateri! " << S_wish << "\n\n";
                        S_4starSkaits = S_4starSkaits + 1;
                        continue;
                    }
                    else if (S_5star != 90 || S_4star != 10) {
                        if (P_number <= 6){
                            std::cout << "5star " << S_wish << "\n\n";
                            S_wish = 0;
                            S_5star = 0;
                            S_4star = S_4star + 1;
                            S_5starSkaits = S_5starSkaits + 1;
                            continue;
                        }
                        else if (P_number >= 6 && P_number <= 57) {
                            std::cout << "4star " << S_wish << "\n\n";
                            S_4star = 1;
                            S_5star = S_5star + 1;
                            S_4starSkaits = S_4starSkaits + 1;
                            continue;
                        }
                        else if (P_number >= 58) {
                            std::cout << "3star " << S_wish << "\n\n";
                            S_4star = S_4star + 1;
                            S_5star = S_5star + 1;
                            S_3starSkaits = S_3starSkaits + 1;
                            continue;
                        }
                    }
                } 
                else if (S_wish >= 75 && S_wish <= 89){
                    iespejamiba3 = softPity3(iespejamiba3);
                    iespejamiba5 = softPity5(iespejamiba5);
                    //std::cout << iespejamiba3 << std::endl << iespejamiba5 << std::endl;
                    if (P_number <= 16 && S_4star == 10) {
                        S_wish = 1;
                        S_5star = 1;
                        std::cout << "Apsveicu, tu dabuju 5star characteri! " << S_wish << "\n\n";
                        S_5starSkaits = S_5starSkaits + 1;
                        continue;
                    }
                    else if (S_4star == 10) {
                        S_4star = 1;
                        std::cout << "Apsveicu, tu dabuju 4star charateri! " << S_wish << "\n\n";
                        S_4starSkaits = S_4starSkaits + 1;
                        continue;
                    }
                    else if (S_5star != 90 || S_4star != 10) {
                        if (P_number <= iespejamiba5){
                            std::cout << "5star " << S_wish << "\n\n";
                            S_wish = 0;
                            S_5star = 0;
                            S_4star = S_4star + 1;
                            S_5starSkaits = S_5starSkaits + 1;
                            continue;
                        }
                        else if (P_number >= iespejamiba3 && P_number <= iespejamiba5) {
                            std::cout << "4star " << S_wish << "\n\n";
                            S_4star = 1;
                            S_5star = S_5star + 1;
                            S_4starSkaits = S_4starSkaits + 1;
                            continue;
                        }
                        else if (P_number >= iespejamiba3 || P_number <= 869) {
                            std::cout << "3star " << S_wish << "\n\n";
                            S_4star = S_4star + 1;
                            S_5star = S_5star + 1;
                            S_3starSkaits = S_3starSkaits + 1;
                            continue;
                        }
                        else {
                          std::cout << "errors kaut kāds";
                        }
                    }
                }
                else if(S_wish == 90) {
                  std::cout << "Apsveicu, tu dabuju 5star characteri! " << S_wish << "\n\n";
                  iespejamiba3 = 148;
                  iespejamiba5 = 17;
                  S_5starSkaits = S_5starSkaits + 1;
                  S_wish = 0;
                  continue;
                }
                else {
                  std::cout << "Kaut kas salūza!";
                }
            }
            else if (D_wish != 1 || D_wish != 10){
                std::cout << "Tika ievadīts nepareiz sakaitlis, lūdzu ievadiet velreiz:  \n\n";
                D_wish = 0;
                continue;
            }
        }
    }
    return 0;
}
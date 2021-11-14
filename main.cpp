#include <iostream>
#include <string>

/* To Do list(1.done+- / 2. / 3. / 4. / 5.done)
1. garanta pārbaudi var izdarīt tā, lai pārbauda vienu reizi koda sākumā, savādāk atkārtojas 4 reizes viens un tas pats
2. Pārbaudīt visus sazarojumus, jo ir sazarojumi kurus var noīsināt!
3. Pārbaudīt vairākas reizes mīkstā garanta matemātisko stāvokli, savādāk plīst pušu visu laiku
4. Izdomāt kautko ar swichiem, savādāk atkārtojas 42349082390482390 reizes.
5. safixot CharIzvele_5 funkciju, kad returno tukšumu un nemet nekādu erroru.
6. Pārveidot izkrišanas izvadi, lai būtu smukāka, lasāmāka, saprotamāka.
*/

std::string WepIzvele_3(std::string Wep_3[5][3]){
    int i, j;
    std::string Wep3;
    for (int k = 0; k < 5; k++){
        i = rand() % 3;
        j = rand() % 5;
    }
    while (Wep_3[j][i] == " ") {
        if (Wep_3[j][i] == " "){
        i = i - 1;
        }
    }
    Wep3 = Wep_3[j][i];
    return Wep3;
}

std::string WepIzvele_4(std::string Wep_4[5][4]){
    int i, j;
    std::string Wep4;
    for (int k = 0; k < 5; k++){
        i = rand() % 4;
        j = rand() % 5;
    }
    while (Wep_4[j][i] == " ") {
        if (Wep_4[j][i] == " "){
        i = i - 1;
        }
    }
    Wep4 = Wep_4[j][i];
    return Wep4;
}

std::string WepIzvele_5(std::string Wep_5[5][2]){
    int i, j;
    std::string Wep5;
    for (int k = 0; k < 5; k++){
        i = rand() % 2;
        j = rand() % 5;
    }
    Wep5 = Wep_5[j][i];
    return Wep5;
}

std::string CharIzvele_4(std::string Char_4[20]){
    int i;
    std::string Char4;
    for (int k = 0; k < 5; k++){
        i = rand() % 20;
    }
    Char4 = Char_4[i];
    return Char4;
}

std::string CharIzvele_5(std::string Char_5[5]){
    int i;
    std::string Char5;//= "5star chars kurš met noname erroru";
    for (int k = 0; k < 5; k++){
        i = rand() % 5;
    }
    Char5 = Char_5[i];
    return Char5;
}

int totalsRandoms(int P_number){
    for (int i = 0; i < 50; i++){
        P_number = rand() % 1000 + 1;
    }

    //std::cout << P_number << std::endl;
    //P_number = 1000;
    //std::cout << "Ievadi skaitli: " << P_number << std::endl;
    //std::cout << "Ievadi skaitli: ";
    //std::cin >> P_number;
    return P_number;
}

int softPity3(int iespejamiba3){
    const int star3Soft = 43;
    iespejamiba3 = iespejamiba3 + star3Soft;

    return iespejamiba3;
}

int softPity5(int iespejamiba5){
    const int star5Soft = 43;
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
    S_3starSkaits: Cik daudz izkrita no standarta bannera 3 star lietas pa 1 sesiju.
    S_4starSkaits: Cik daudz izkrita no standarta bannera 4 star lietas pa 1 sesiju.
    S_5starSkaits: Cik daudz izkrita no standarta bannera 5 star lietas pa 1 sesiju.

    /Iespējamība\
    iespejamiba3: programmā tiek norādīts sākotnējā iespējamība dabūt 3star lietu, kur pēc tam tiks mainīta
    iespejamiba5: programmā tiek norādīts sākotnējā iespējamība dabūt 5star lietu, kur pēc tam tiks mainīta

    wish_stop: Cilvēks ievadot vārdu "stop" vai "Stop" tiks apstādināta programma un izvadīs statistiku 
    wish_izvele: Cilvēka izvēle kāds banners tiks verts vaļā.
    */
    int S_wish = 0, S_4star = 1, S_5star = 0;//Standarta bannera garanta skatiļi
    int E_wish = 0, E_4star = 0, E_5star = 0;//Eventa bannera garanta skatiļi(Pagaidām netiek izmantots)
    int S_3starSkaits = 0, S_4starSkaits = 0, S_5starSkaits = 0; //Statistika
    int iespejamiba3 = 148, iespejamiba5 = 17; //bāzes iespēja no 0-75 wisham
    int P_number, number_of_error = 0;
    int k;
    std::string D_wish;
    std::string wish_izvele;
    std::string wish_stop;

    std::string Wep_3[5][3] = {
        {"Skyrider Sword","Cool Steel","Harbinger of Dawn"},//sword
        {"Bloodtainted Greatsword","Debate Club","Ferrous Shadow"},//ClayMore
        {"Black Tassel"," "," "},//Polearm
        {"Thrilling Tales of Dragon Slayers","Emerald Orb","Magic Guide"},//Catalyst
        {"Slingshot","Raven Bow","Sharpshooter's Oath"}//Bow

    };
    std::string Wep_4[5][4] = {
        {"Lion's Roar", "Sacrificial Sword", "The Flute", "Favonius Sword"},//sword
        {"Rainslasher", "Sacrificial Greatsword", "Favonius Greatsword", "The Bell"},//ClayMore
        {"Favonius Lance", "Dragon's Bane", " ", " "},//Polearm
        {"Eye of Perception", "Sacrificial Fragments", "The Widsith", "Favonius Codex"},//Catalyst
        {"Sacrificial Bow","The Stringless","Rust","Favonius Warbow"}//Bow
    };
    std::string Wep_5[5][2] = {
        {"Skyward Blade", "Aquila Favonia"},//sword
        {"Wolf's GravestoneSkyward", "Pride"},//ClayMore
        {"Primordial Jade Winged-Spear", "Skyward Spine"},//Polearm
        {"Skyward Atlas", "Lost Prayer to the Sacred Winds"},//Catalyst
        {"Amos' Bow", "Skyward Harp"}//Bow
    };
    std::string Char_4[20] = {
        "Kujou Sara", "Sayu", "Yanfei", "Rosaria", "Xinyan",
        "Sucrose", "Diona", "Chongyun", "Noelle", "Bennett",
        "Fischl", "Ningguang", "Xingqiu", "Beidou", "Xiangling",
        "Amber", "Razor", "Kaeya", "Barbara", "Lisa" //Characteri
    };
    std::string Char_5[5] = {
        "Keqing", "Mona", "Diluc", "Qiqi", "Jean" //Characteri
    };

    srand((unsigned int)time(NULL));

    while (wish_stop != "stop" || wish_stop == "Stop") {
        std::cout << "Ja vēlies apturēt spēli, tad raksti \"stop\"!\nIevadi kādu banneri tu gribi wishot (Standart / (s) vai Event / (e)): ";
        std::cin >> wish_izvele;
        wish_stop = wish_izvele;
        if (wish_stop == "stop" || wish_stop == "Stop") {
            std::cout << "-=Sasniegumi=- \n";
            std::cout << S_5starSkaits << std::endl;
            std::cout << S_4starSkaits << std::endl;
            std::cout << S_3starSkaits << std::endl;
            std::cout << number_of_error << std::endl;
            break;
        }
        else if (wish_izvele == "Standart" || wish_izvele == "standart" || wish_izvele == "s"){
            std::cout << "Cik daudz tu gribi wishot (1 vai 10): ";
            std::cin >> D_wish;
            //D_wish = "10";
            if (D_wish == "1"){
                P_number = totalsRandoms(P_number);
                //std::cout << P_number << std::endl;
                S_wish = S_wish + 1;
                if (S_wish <= 74){
                    if (P_number <= 6 && S_4star == 10) {
                        iespejamiba3 = 148;
                        iespejamiba5 = 17;
                        S_5starSkaits = S_5starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "5 starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                                break;
                        }
                        S_wish = 1;
                        continue;
                    }
                    else if (S_4star == 10) {
                        S_4star = 1;
                        S_4starSkaits = S_4starSkaits + 1;

                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "4 star: " << WepIzvele_4(Wep_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "4 star: " <<  CharIzvele_4(Char_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                                break;
                        }
                        continue;
                    }

                    if (P_number <= 6){
                        iespejamiba3 = 148;
                        iespejamiba5 = 17;
                        S_4star = S_4star + 1;
                        S_5starSkaits = S_5starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "5 starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                                break;
                        }
                        S_wish = 1;
                        continue;
                    }
                    else if (P_number >= 6 && P_number <= 57) {
                        S_4star = 1;
                        S_4starSkaits = S_4starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "4 star: " <<  WepIzvele_4(Wep_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "4 star: " <<  CharIzvele_4(Char_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++; 
                                std::cout << "4 star: " <<  "Switch error" << std::endl << std::endl;
                                break;
                        }
                        continue;
                    }
                    else if (P_number >= 58) {
                        S_4star = S_4star + 1;
                        S_3starSkaits = S_3starSkaits + 1;
                        std::cout << "3 star: " <<  WepIzvele_3(Wep_3) << " " << S_wish << std::endl << std::endl;
                        continue;
                    }
                } 
                else if (S_wish >= 75 && S_wish <= 89){
                    iespejamiba3 = softPity3(iespejamiba3);
                    iespejamiba5 = softPity5(iespejamiba5);
                    // std::cout << "Chance3: " << iespejamiba3 << std::endl << "Chance5: " << iespejamiba5 << std::endl;
                    std::cout << "Chance: " << (1000 - iespejamiba3) + iespejamiba5 << std::endl;
                    if (P_number <= 16 && S_4star == 10) {
                        iespejamiba3 = 148;
                        iespejamiba5 = 17;
                        S_5starSkaits = S_5starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "5 starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                                break;
                        }
                        S_wish = 1;
                        continue;
                    }
                    else if (S_4star == 10) {
                        S_4star = 1;
                        S_4starSkaits = S_4starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "4 star: " <<  WepIzvele_4(Wep_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "4 star: " <<  CharIzvele_4(Char_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                        }
                        continue;
                    }
                    else if (P_number <= iespejamiba5){
                        iespejamiba3 = 148;
                        iespejamiba5 = 17;
                        S_4star = S_4star + 1;
                        S_5starSkaits = S_5starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "5 starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                                break;
                        }
                        S_wish = 1;
                        continue;
                    }
                    else if (P_number > iespejamiba5 && P_number < iespejamiba3) {
                        S_4star = 1;
                        S_4starSkaits = S_4starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "4 star: " <<  WepIzvele_4(Wep_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "4 star: " <<  CharIzvele_4(Char_4) << " " << S_wish << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                                break;
                        }
                        continue;
                    }
                    else if (P_number >= iespejamiba3) {
                        S_4star = S_4star + 1;
                        S_3starSkaits = S_3starSkaits + 1;
                        std::cout << "3 star: " <<  WepIzvele_3(Wep_3) << " " << S_wish << std::endl << std::endl;
                        continue;
                    }
                    else {
                      std::cout << "0-74/5star vai 4star vai 3star salūza";
                    }
                }
                else if(S_wish == 90) {
                    iespejamiba3 = 148;
                    iespejamiba5 = 17;
                    S_5starSkaits = S_5starSkaits + 1;
                    k = rand() % 2 + 1;
                    switch(k){
                        case 1:
                            std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish << std::endl << std::endl;
                            break;
                        case 2:
                            std::cout << "5starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish << std::endl << std::endl;
                            break;
                        default:
                            number_of_error++;
                            std::cout << "Switch error" << std::endl << std::endl;
                            break;
                    }
                    S_wish = 1;
                  continue;
                }
                else {
                    number_of_error++;
                    std::cout << "nenostrādāja 0-90 / S_wish pārsniedza skaitli 90";
                }
            }
/*============================================================================================================*/
            else if (D_wish == "10") {
                for (int i = 0; i < 10; i++){
                    P_number = totalsRandoms(P_number);
                    //std::cout << P_number << std::endl;
                    S_wish = S_wish + 1;
                    if (S_wish <= 74){
                        if (P_number <= 6 && S_4star == 10) {
                            iespejamiba3 = 148;
                            iespejamiba5 = 17;
                            S_5starSkaits = S_5starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "5starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            S_wish = 1;
                            continue;
                        }
                        else if (S_4star == 10) {
                            S_4star = 1;
                            S_4starSkaits = S_4starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "4 starGarants: " <<  WepIzvele_4(Wep_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "4 starGarants: " <<  CharIzvele_4(Char_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            continue;
                        }
                        else if (P_number <= 6){
                            iespejamiba3 = 148;
                            iespejamiba5 = 17;
                            S_4star = S_4star + 1;
                            S_5starSkaits = S_5starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "5starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            S_wish = 1;
                            continue;
                        }
                        else if (P_number >= 6 && P_number <= 57) {
                            S_4star = 1;
                            S_4starSkaits = S_4starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "4 star: " <<  WepIzvele_4(Wep_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "4 star: " <<  CharIzvele_4(Char_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            continue;
                        }
                        else if (P_number >= 58) {
                            S_4star = S_4star + 1;
                            S_3starSkaits = S_3starSkaits + 1;
                            std::cout << "3 star: " <<  WepIzvele_3(Wep_3) << " " << S_wish  << std::endl << std::endl;
                            continue;
                        }
                    } 
                    else if (S_wish >= 76 && S_wish <= 89){
                        iespejamiba3 = softPity3(iespejamiba3);
                        iespejamiba5 = softPity5(iespejamiba5);
                        // std::cout << "Chance3: " << iespejamiba3 << std::endl << "Chance5: " << iespejamiba5 << std::endl;
                        std::cout << "Chance: " << (1000 - iespejamiba3) + iespejamiba5 << std::endl;
                        if (P_number <= iespejamiba5 && S_4star == 10) {
                            iespejamiba3 = 148;
                            iespejamiba5 = 17;
                            S_5starSkaits = S_5starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "5starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            S_wish = 1;
                            continue;
                        }
                        else if (S_4star == 10) {
                            S_4star = 1;
                            S_4starSkaits = S_4starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "4 star: " <<  WepIzvele_4(Wep_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "4 star: " <<  CharIzvele_4(Char_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            continue;
                        }
                        else if (P_number <= iespejamiba5){
                            iespejamiba3 = 148;
                            iespejamiba5 = 17;
                            S_4star = S_4star + 1;
                            S_5starSkaits = S_5starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "5starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            S_wish = 1;
                            continue;
                        }
                        else if (P_number > iespejamiba5 && P_number < iespejamiba3) {
                            S_4star = 1;
                            S_4starSkaits = S_4starSkaits + 1;
                            k = rand() % 2 + 1;
                            switch(k){
                                case 1:
                                    std::cout << "4 star: " <<  WepIzvele_4(Wep_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                case 2:
                                    std::cout << "4star: " <<  CharIzvele_4(Char_4) << " " << S_wish  << std::endl << std::endl;
                                    break;
                                default:
                                    number_of_error++;
                                    std::cout << "Switch error" << std::endl << std::endl;
                                    break;
                            }
                            S_wish = 1;
                            continue;
                        }
                        else if (P_number >= iespejamiba3) {
                            S_4star = S_4star + 1;
                            S_3starSkaits = S_3starSkaits + 1;
                            std::cout << "3 star: " <<  WepIzvele_3(Wep_3) << " " << S_wish  << std::endl << std::endl;
                            continue;
                        }
                        else {
                            number_of_error++;
                            std::cout << "75-89 / 5star vai 4star vai 3star salūza";
                        }
                    }
                    else if(S_wish == 90) {
                        iespejamiba3 = 148;
                        iespejamiba5 = 17;
                        S_5starSkaits = S_5starSkaits + 1;
                        k = rand() % 2 + 1;
                        switch(k){
                            case 1:
                                std::cout << "5 starWep: " <<  WepIzvele_5(Wep_5) << " " << S_wish  << std::endl << std::endl;
                                break;
                            case 2:
                                std::cout << "5starChar: " <<  CharIzvele_5(Char_5) << " " << S_wish  << std::endl << std::endl;
                                break;
                            default:
                                number_of_error++;
                                std::cout << "Switch error" << std::endl << std::endl;
                                break;
                        }
                        S_wish = 1;
                        continue;
                    }
                    else {
                        number_of_error++;
                        std::cout << "nenostrādāja 0-90 / S_wish pārsniedza skaitli 90";
                    }
                }
                
            }
/*========================================================================================================*/
            else if (D_wish != "1" || D_wish != "10"){
                std::cout << "Tika ievadīta nezināma vienība, lūdzu ievadiet velreiz!\n\n";
                continue;
            }
        }
    }
    return 0;
}
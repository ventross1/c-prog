#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int option_1 = 1;       //všechny volby projistotu jsem dal pro každou volbu co hráč udělá jiné číslo proto je to od 1 až do 5 protože hráč si může vybrat i u esa
int option_2 = 2;
int option_3 = 3;
int option_4 = 4;
int option_5 = 5;
int player = 0;         //variable kde hráč zapisuje svojí volbu
int money = 1000;       //peníze který má hráč na sázení chci udělat to save txt a ukládat mezi hrama
char pcards[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10}; //pole karet pro hráče nevim proč to nefungovalo s intem ale jde to s charem
char aicards[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10}; //pole karet pro ai
char ran[] = {1, 2}; //pole pro náhodnou volbu ai
int volba = 0; //random volba z pole pro ai
char player_c = 0;      //hráčovy karty
int sazka = 0;          //tady se píšou kolik hráč sází
int pwin = 0;           //značení pro hráčovu výhru
int ploss = 0;          //značení pro hráčovu prohru
int ai_c = 0;           //ai karty
int remiza = 0;
int pstart(){    //random karty pro hráče
    return pcards[rand()% 13];
}

int aistart(){    //random karty pro ai
    return aicards[rand()% 13];
}

int ai(){
    if(aistart() == 1){       //když ai dostane eso může si vybrat high nebo low
        volba = ran[rand()% 2];
        if(volba == 1){
            ai_c += 11;
        }
        if(volba == 2){
            ai_c += 1;
        }
    }
    if(ai_c >= 16 && ai_c < 19){
        volba = ran[rand()% 2];
        if(volba == 1){
            ai_c += aistart();
        }
        if(volba == 2){
        }
    }
    if(ai_c >= 19){}
    if(ai_c <= 9){          //moc malá karta automaticky bere kartu
    ai_c += aistart();
    }
    if(ai_c >= 10 && ai_c <= 15){      //náhodně vybýrá jestli má brát kartu nebo ne
        volba = ran[rand()% 2];
        if(volba == 1){
            ai_c += aistart();
        }
        if(volba == 2){
        }
    }
    return ai_c;
}


int game(){
    player_c = pstart();
    for(int i = 0; i <= 53; i++){   //cyklus ve kterým je celá hra
    ai();
    if(pstart() == 1){       //když hráč dostane eso může si vybrat high nebo low
        printf("tvoje karta je eso chcete high(11) napiste 4 nebo low(1) napiste 5\n");
        scanf(" %i", &player);
        if(option_4 == player){
            player_c += 11;
        }
        if(option_5 == player){
            player_c += 1;
        }
    }
    //printf("tvoje karty = %d, ai karty = %d hit = 1, stand = 2, fold = 3;\n", player_c, ai_c);
    //scanf(" %i", &player);
    if(option_1 == player){     //hit přidá a přičte další kartu hráčovi
        player_c += pstart();
    }
    if(option_2 == player){     //nic nedělá a ukončí hru
        volba = ran[rand()% 2];
           if(volba == 1){
               ai();
           }
           if(volba == 2){
        
           }
       if(player_c > ai_c){
           printf("hrac %d vyhral proti ai %d", player_c, ai_c);
           pwin = 1;
           break;
       }
       if(player_c < ai_c){
           printf("hrac %d prohral proti ai %d", player_c, ai_c);
           ploss = 1;
           break;
       }
    }
    if(option_3 == player){     //ukončí hru hráč vzdát ztratí půlku sázky
        printf("fold\n");
        ploss = 1;
        break;
    }
    if(ai_c == 21){
        if(ai_c == player_c){
            printf("remíza");
            ploss = 2;
        }
        if(ai_c != player_c){
            printf("ai vyhra");
            ploss = 1;
        }
        break;
    }
    if(ai_c > 21 && player_c > 21){
        printf("remiza");
        ploss = 2;
        remiza = 1;
    }
    if(ai_c > 21 && remiza != 1){
        printf(" %d ai trop %d hrac vyhraj jste", ai_c, player_c);
        pwin = 1;
        break;
    }
    if(player_c == 21){         //blackjack výhra dvojnásobek výhry
        printf("blackjack vyhra", player_c);
        pwin = 2;
        break;
    }
    if(player_c > 21 && remiza != 1){
        printf(" %d trop prohral jste", player_c);  //přehraje hráč přes 21 tak prohra
        ploss = 1;
        break;
    }
    printf("tvoje karty = %d, ai karty = %d hit = 1, stand = 2, fold = 3;\n", player_c, ai_c);
    scanf(" %i", &player);
}
}

int main(){
    srand(time(NULL));
    for(int a = 1; a > 0; a = 1){
        if(pwin == 1){
            money += sazka;
            printf(" sazka %d total %d\n", sazka, money);     //sázky výhra
        }
        if(pwin == 2){
            sazka * 2;
            money += sazka;
            printf(" dvojnasobek sazky total %d", money);  //sázka dvojtá výhra
        }
        if(ploss == 1){
            money -= sazka;
            printf(" sazka %d total %d\n", sazka, money);         //sázka prohra
        }
        if(ploss == 2){
            printf(" sazka vracena\n");
        }
        pwin = 0;
        ploss = 0;
        ai_c = 0;
        printf("kolik chcete vsadit? total %d\n", money);   //místo kde se zadá kolik chce hráč sadit
        scanf(" %i", &sazka);
        game();
    }
return 0;
}
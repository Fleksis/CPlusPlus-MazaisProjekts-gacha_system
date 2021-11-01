# Gachas sistēmas simulēšana.

## 1. Kas ir gacha sistēma?

#### Kā gacha sistēma strādā
* Gača jeb "Gacha" ir veids kā spēlēs var kontrolēt cik ilgā laikā spēlētājs kaut ko dabūs, piemēram kā, xp, level up progress, lietas, rare items utt. Ar gaču daudzas spēļu kompanijas arī pelna naudu, lielākai daļai gachas spēlēm, gacha strādā lai cilvēks mēģinātu dabūt kādu personāžu spēlē vai uz ļoti retām lietām kuras var dabūt tikai griežot gachu. Cilvēks krājot speciālu valūtu un ar to valūtu ver vaļā , lai dabūtu to reto spēles personāžu vai lietu. Gachai vēl ir tas saucamais "**garants**" ar kuru tu ar 100% iespēju dabūsi reto lietu, tas ir atkarīgs no tā cik daudz reizes tika verts vaļā.

#### Kā izstrādātājs izmanto gachas sistēmu
* Gachu katrs iztrādātājs var pielāgot pa savam, lai cilvēkam vajadzētu patērēt daudz vai maz laika, lai tiktu līdz garantam. Daudzās spēlēs, lai tiktu līdz garantam ir vajadzība patērēt salīdzinoši daudz laika aptuveni pusotrs mēnesis, bet tas ir kā kurā spēlē pielāgots.

## 2. Kā mana simulēšana strādā?

#### No kurienes tiks ņemts paraugs
 * Es ņemšu kā paraugu vienu spēli, kurā šī gachas sistēma strādā salīdzinoši vienkārši, bet tur ir savas nianses. Pati gachas sistēma tiks ņemta no šīs spēles un tiks izmantots kā paraugs.

#### Kā mana gacha simulēšana strādās
* Sāksim ar to kādi ir rarity veidi:
- 1zvaigžņu 0% (Viss biežāk sastopams)
- 2zvaigžņu 0%
- 3zvaigžņu 94.3% (Krīt ja nenostrādā 4zvaigžņu vai 5zvaigžņu apstrāde)
- 4zvaigžņu 5.1% (10 kastē garantēts)
- 5zvaigžņu 0.6% (90 kastē garantēts) (Viss retākais)
* izmantošu tikai 3, 4 un 5zvaigžņu rarity, jo tikai šie krīt no kastēm.

![iespētējamība](bildes/iespējamība.png)

* #### Pity noteikšana
Pity, saucamais mīkstais garants, kad kaut kādā momentā iespējamība dabūt 4zvaigžņu vai 5zvaigžņu lietu palielinās, bet tā kā tas nav nekur pateikts konkrēti ar kādu griezienu sākas mīkstais garants, tapēc tiks paņemts apmēram vidējais rādītājs.

- 3zvaigžņu (85.4%)
- 4zvaigžņu (13% ar 7 Griezienu)
- 5zvaigžņu (1.6% ar 75 Griezienu)

#### Sīkākas detaļas
- Ja 4zvaigžņu garants sakrīt ar 5zvaigžņu garantu, tad prioritātē izkritīs 5zvaigžņu lieta un nākošaja griezienā arī ir 4zvaigžņu lietas garants.
- katru reizi kad izkrīt 5zvaigžņu lieta, tad automātiski tiek garanta skaitlis restartēts uz 0, tad sāk skaitīt garantu par jaunu.
- būs iespēja izvēlēties griezt 1 vai 10 reizes.
- būs dota izvēle starp 2 banneriem, viens banners būs ar noteiktu lietu ko varēs dabūt tikai konkrētajā eventa bannerī, bet otrs būs standarta banners kurš ir tikai ar standarta lietām.
- Tiks izmantotas in-game lietu nosaukumi.

## 3. Eventa banners
* Eventa banners sevī satur īpašas lietas vai pesonāžus.
* Eventa bannerī kritīs viss kas ir standarta bannerī, bet klāt nāks viens 5zvaigžņu lieta, kuru varēs dabūt tikai eventa bannerī.
* kad cilvēkam pirmo reizi izkritīs 5zvaigžņu lieta no eventa banner, tad būs 50/50 iespēja, ka izkritīs tieši eventa bannera īpašā lieta, bet kad izkrītīs otro reizi 5zvaigžņu lieta, tad jau būs 100% iespēja dabūt īpašo eventa bannera lieta. kad tiek dabūts eventa īpašā lieta, tad nākošajā 5zvaigžņu lietas kritienā iespēja atkal dabūt īpašo 5zvaigžņu lietu kļūs atkal 50/50.

## 4. Kā cilvēks darbosies ar programmu.

Cilvēks spēs izvēlēties kādu un cik reizes griezt banneri, tad nejaušā veidā tiks noteikts kas izkritīs un to kas izkritīs varēs redzēt: **(Kāds rarity, kāda lieta, lietas klase)**. Programma saglabā statistiku, kamēr programma ir atverta.
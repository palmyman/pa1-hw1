pa1-hw1
=======

Programming in C - Homework 1 (position of circles)
Úkolem je napsat program, který rozhodne vzájemnou polohu 2 kružnic.

Vstupem programu je zadání dvou kružnic. Každá kružnice je zadaná svým středem (x a y souřadnice) a poloměrem. Čísla jsou zadaná v pořadí x y r, jedná se o desetinná čísla.

Výstupem programu je rozhodnutí o vzájemné poloze kružnic. Celkem může nastat 6 variant vzájemné polohy:

    kružnice splývají,
    jedna kružnice leží zcela uvnitř druhé,
    jedna kružnice se zevnitř dotýká druhé,
    kružnice se protínají,
    kružnice se dotýkají zvenku,
    kružnice leží zcela mimo sebe.

Program rozhodne o poloze a vypíše ji. Dále, pokud je to relevantní, program vypíše plochu překryvu kružnic. Formát výstupu pro všech 6 variant je uveden v ukázkovém běhu níže. Pozor, za výstupem je odřádkování (\n).

Program musí být schopen detekovat nesprávný vstup. Pokud je na vstupu nesmyslné zadání, program to zjistí, vypíše chybové hlášení a ukončí se. Formát chybového hlášení je uveden v ukázce níže. Pozor, za případným chybovým hlášením je odřádkování (\n). Chybové hlášení zasílejte na standardní výstup (printf), nezasílejte jej na chybový výstup. Za chybu je považováno:

    nečíselná hodnota nějaké souřadnice,
    nečíselná hodnota poloměru,
    poloměr nulový nebo záporný.


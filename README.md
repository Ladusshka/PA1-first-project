Úkolem je vytvořit program, který pro čtveřici bodů v rovině rozhodne, zda tvoří obdélník.

Vstupem programu je čtveřice bodů v rovině. Každý bod je tedy zadán jako dvojice desetinných čísel - souřadnice x a y. Pořadí bodů na vstupu respektuje pořadí bodů na obvodu zadávaného obdélníku. Pokud jsou body zadané proházeně, program je vyhodnotí tak, že netvoří obdélník (viz předposlední ukázka).

Výstupem programu je rozhodnutí, zda zadané body tvoří obdélník nebo ne. Pokud body tvoří čtverec, považuje to program rovněž za obdélník (je to speciální případ obdélníku). Za výpisem (formát viz ukázka) je znak odřádkování (\n).

Program musí být schopen detekovat nesprávný vstup. Pokud je na vstupu nesmyslné zadání, program to zjistí, vypíše chybové hlášení a ukončí se. Formát chybového hlášení je uveden v ukázce níže. Pozor, za případným chybovým hlášením je odřádkování (\n). Chybová hlášení zasílejte na standardní výstup (printf), nezasílejte jej na chybový výstup. Za chybu je považováno:

nečíselná hodnota souřadnice,
chybějící/nesprávný oddělovač (závorka, čárka) nebo
chybějící souřadnice.
Při programování si dejte pozor na přesnou podobu výpisů. Výstup Vašeho programu kontroluje stroj, který požaduje přesnou shodu výstupů Vašeho programu s výstupy referenčními. Za chybu je považováno, pokud se výpis liší. I chybějící nebo přebývající mezera/odřádkování je považováno za chybu. Abyste tyto problémy rychle vyloučili, použijte přiložený archiv se sadou vstupních a očekávaných výstupních dat. Podívejte se na videotutoriály (courses -> videotutoriály -> Testování), jak testovací data použít a jak testování zautomatizovat.

Váš program bude spouštěn v omezeném testovacím prostředí. Je omezen dobou běhu (limit je vidět v logu referenčního řešení) a dále je omezena i velikost dostupné paměti (ale tato úloha by ani s jedním omezením neměla mít problém).

Ukázka práce programu:
Bod #1:
(0,0)
Bod #2:
(20,0)
Bod #3:
(20,50)
Bod #4:
(0,50)
Body tvori obdelnik.
Bod #1:
( -10.5 , 15.8 )
Bod #2:
(178.23,15.8)
Bod #3:
( 178.23, -67.2)
Bod #4:
(-10.5, -67.2)
Body tvori obdelnik.
Bod #1:
 (0,-4)
Bod #2:
(4, 0)
Bod #3:
(0, 4)
Bod #4:
(-4, 0)
Body tvori obdelnik.
Bod #1:
(0, -4)
Bod #2:
(4, 0)
Bod #3:
(0, 4)
Bod #4:
(-6, 0)
Body netvori obdelnik.
Bod #1:
(0, 0)
Bod #2:
(20, 0)
Bod #3:
(0, 50)
Bod #4:
(20, 50)
Body netvori obdelnik.
Bod #1:
(61494, 576)
Bod #2:
(865814, 31074)
Bod #3:
(804818, 1639714)
Bod #4:
(498, 1609216)
Body tvori obdelnik.
Bod #1:
(6149.4, 57.6)
Bod #2:
(86581.4, 3107.4)
Bod #3:
(80481.8, 163971.4)
Bod #4:
(49.8, 160921.6)
Body tvori obdelnik.
Bod #1:
(50, 50)
Bod #2:
(35, test)
Nespravny vstup.
Bod #1:
10,20
Nespravny vstup.

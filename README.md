# Problema celor 8 turnuri
Proiectul consta in generarea aleatorie a 8 turnuri pe tabla de sah, astfel incat acestea sa nu se atace pe linie sau coloana, in limbajul de programare C++. Am ales sa folosesc mediul de programare Visual Studio Code, deoarece este un mediu versatil care contine o multitudine de extensii, are o interfata simpla si e usor de inteles.

Programul contine urmatoarele functii:
- Functia de verificare, care parcurge matricea pe coloana pentru a verifica daca mai exista un alt turn pe acea coloana, in caz afirmativ functia va returna FALSE, iar in caz contrar va returna TRUE.

- Functia de resetare, care permite resetarea tablei de sah pentru o noua generare.

- Functia de plasare, care dupa resetarea tablei de sah, parcurge linie cu linie matricea, generand aleator o pozitie pe coloana, apoi verifica daca mai exista un alt turn pe acea coloana, in caz afirmativ, va genera o alta pozitie pe coloana, iar in caz contrar, va plasa turnul pe pozitia respectiva.

- Functia de afisare, care permite utilizatorului, prin mesajul aparut de a introduce caracterul 'G' pentru a genera sau 'X' pentru a iesi din program. Dupa introducerea caracterului 'G', se apeleaza functia plasare, se parcurge matricea, verificand daca pozitia curenta este ocupata afisand in aceasta situatie 'T', in rest afisand 0.  


Precizez faptul ca, generarea aleatorie a turnurilor, se realizeaza cu ajutorul functiei'srand(time(NULL))', iar pentru stabilirea coloanei 'rand()%8'. 


In concluzie, acest proiect furnizeaza o solutie pentru plasarea a 8 turnuri pe o tabla de sah, permitand generarea multiplelor plasari aleatorii, care pot fi vizualizate in interactiune cu utilizatorul.
 

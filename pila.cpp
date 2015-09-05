/*
 * Tale sorgente è distribuito secondo licenza CC BY-NC-SA 4.0: 
 * 			http://creativecommons.org/licenses/by-nc-sa/4.0/legalcode
 * 
 * Tu sei libero di:
 *    - condividere — riprodurre, distribuire, comunicare al pubblico, 
 * 		esporre in pubblico, rappresentare, eseguire e recitare 
 * 		questo materiale con qualsiasi mezzo e formato; 
 *    - modificare — remixare, trasformare il materiale e basarti su di 
 * 		esso per le tue opere.
 * 	
 * Il licenziante non può revocare questi diritti fintanto che tu 
 * rispetti i termini della licenza alle seguenti condizioni:
 * 		- devi riconoscere l'autore originario e fornire un link alla 
 * 		  licenza;
 *      - non puoi usare il materiale per scopi commerciali;
 *      - se modifichi, o comunque ti basi su questo materiale devi 
 * 		  distribuire i tuoi elaborati con la stessa licenza.
 * 			
 * Autore: Riccardo Monterisi
 * */
#include <cstdlib>
#include <iostream>
#include "pila.h"
using namespace std;

template <class T>
Pila<T>::Pila()
{
   creaPila();
};
        
template <class T>
Pila<T>::~Pila() {};
        
template <class T>
void Pila<T>::creaPila()
{
    testa = -1; 
};

template <class T>
bool Pila<T>::pilaVuota() const
{
   return (testa == -1);
};

template <class T>
T Pila<T>::leggiPila() const
{
   tipoelem letto;
   
    letto = VET[testa];
    
    return letto;
};

template <class T>
void Pila<T>::fuoriPila()
{
     testa--;
};

template <class T>
void Pila<T>::inPila(tipoelem in)
{
   testa++;
   VET[testa] = in;  
};
        

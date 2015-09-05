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
#ifndef _PILA
#define _PILA

#include <cstdlib>
#include <iostream>
#include <assert.h>

using namespace std;

template <class T>
class Pila
{
    
      public:
        typedef T tipoelem;
             
        Pila();
	 	Pila(int);
        ~Pila();
        
        void creaPila();
        bool pilaVuota() const;
        T leggiPila() const;
        void fuoriPila();
        void inPila(tipoelem);
	    void stampaPila();

     private:
        T *VET;
        int testa;
		int MAX_DIM; 
};
  
//---implementazioni

template <class T>
Pila<T>::Pila()
{
   VET = new tipoelem[100]; // dimensione standard della pila
   MAX_DIM = 100; 
   creaPila();
};
 
template <class T> 
Pila<T>::Pila(int N)
{
   VET = new tipoelem[N]; // dimensione N della pila
   MAX_DIM = N; 
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
    
   assert(!pilaVuota());
   letto = VET[testa];
  
   return letto;
};

template <class T>
void Pila<T>::fuoriPila()
{
     assert(!pilaVuota());
     testa--;
};

template <class T>
void Pila<T>::inPila(tipoelem in)
{
    assert(testa < MAX_DIM);
    testa++;
    VET[testa] = in;  
};

template <class T>        
void Pila<T>::stampaPila()
{
	tipoelem Elemento;
	
	if (!pilaVuota()) 
	{
	    Elemento = leggiPila();
		fuoriPila();
		cout << Elemento << " " << endl;
		stampaPila();
		inPila(Elemento);
	}
};

#endif //_PILA

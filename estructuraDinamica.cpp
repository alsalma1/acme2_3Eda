/*
 *  estructuraDinamica.h
 *  EstructuraDinamica
 *
 *  Created by Santi Espigule.
 *  Copyright (c) 2004 IMA-UdG.
 *
 * JSS - 2009
 *    cal afegir-hi els metodes a implementar
* JSS - 2022
 *    es obligatori implementar el destructor 
 */

#include "estructuraDinamica.h"
#include <iostream>


estructuraDinamica::estructuraDinamica( )
{
// aquest constructor es dona fet i no es pot canviar
	final = NULL;
}

estructuraDinamica::~estructuraDinamica() {
    if (final != nullptr) {
        node *primero = final->seguent;
        node *p = primero;

        while (p != final) {
            node *aux = p;
            p = p->seguent;
            delete aux;
        }

        delete final;
        final = nullptr;
    }
}

int estructuraDinamica::nElements() const{
	int n = 0;
	if(final != nullptr){
		node * inici = final->seguent;
		node * actual = inici;

		n = 1;
		actual = actual->seguent;
		while(actual != inici){
			n++;
			actual = actual->seguent;
		}
	}
	return n;
	
}

void estructuraDinamica::OmplirInici(int n){
    
        node * p = new node;
        if(final == nullptr){
            p->dada = 1;
            p->seguent = p;
            final = p;
        }
        else{
            node * inici = final->seguent;
            for(int i=2;i<=n; i++){
                node * p = new node;
                p->dada = i;
                final->seguent = p;
                final = p;
                inici = p;
        }
    }
}

void estructuraDinamica::Llistar() const
{
// aquest metode es dona fet i no es pot canviar
    node *p;

    if (final != NULL) 
    {
        p = final->seguent;
        while (p != final) 
        {
            cout << p->dada << " ";
            p = p->seguent;
        }
        cout << final->dada;
    }
    cout << endl;
}

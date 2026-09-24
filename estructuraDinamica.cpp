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

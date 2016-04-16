//
//  Elenco.cpp
//  lab_01
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//

#include "Elenco.hpp"

Elenco::Elenco(){}
Elenco::~Elenco(){}

Elenco::Elenco(Persona p){
    this->persone.push_back(p);
}

Persona Elenco::get(int i)
{
    /* Creo una variabile Persona temporanea */
    Persona *tmp = nullptr;
    
    /* Contatore temporaneo interno al ciclo, da confrontare con 'i' */
    int j = 0;
    
    if (persone.begin() == persone.end()) {
        std::cout << "egt(): c'è un solo elemento nella lista" << std::endl;
    }
    
    /* 
     Questo ciclo for scorre tutta la lista a partire dal primo elemento
     */
    for (std::list<Persona>::iterator iterator = persone.begin(),
         end = persone.end();
         iterator != end;
         ++iterator)
    {
        // Se i == j significa che sono all'elemento i-esimo della lista
        // ovvero quello cercato
        if (j == i)
        {
            tmp = &*iterator;    // ritorna il puntatore all'elemento voluto
            break;  // -> interrompi l'iterazione: non ha senso continuare
        }
        j++;
    }
    
    
    return *tmp;
}

void Elenco::add(Persona p){
    
    this->persone.push_back(p);
    
}

Persona Elenco::remove(int i){
    /* Creo una variabile Persona temporanea */
    Persona *tmp = nullptr;
    
    /* Contatore temporaneo interno al ciclo, da confrontare con 'i' */
    int j = 0;
    
    /*
     Questo ciclo for scorre tutta la lista a partire dal primo elemento
     */
    for (std::list<Persona>::iterator iterator = persone.begin(),
         end = persone.end();
         iterator != end;
         ++iterator)
    {
        // Se i == j significa che sono all'elemento i-esimo della lista
        // ovvero quello cercato
        if (j == i)
        {
            // Rimuove l'elemento dalla lista: non ci si deve preoccupare
            // dell'integrità della lista: fa tutto il C++
            tmp = &*iterator;
            this->persone.erase(iterator);
            break;  // -> interrompi l'iterazione: non ha senso continuare
        }
        j++;
    }
    return *tmp;
}

void Elenco::clear(){
    // Fa lo swap con un elemento vuoto, in questo modo si
    // libera davvero la memoria
    std::list<Persona>().swap(this->persone);
}

int Elenco::size(){
    return static_cast<int>(this->persone.size());
}












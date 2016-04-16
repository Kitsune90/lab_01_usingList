//
//  Elenco.hpp
//  lab_01
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//

#ifndef Elenco_hpp
#define Elenco_hpp

#include "Persona.hpp"

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

#endif /* Elenco_hpp */

class Elenco {
public:
    std::list<Persona> persone;
    int numeroPersone;
    
public:
    Persona get(int i);
    void add(Persona p);
    Persona pop();
    Persona remove(int i);
    int size();
    void clear();
    
    /*
     * Costruttori e distruttori
     */
    Elenco();
    Elenco(Persona p);
    ~Elenco();
};


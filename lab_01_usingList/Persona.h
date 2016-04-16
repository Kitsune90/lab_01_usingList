//
//  Persona.h
//  lab_01
//
//  Created by Cristiano Cavo on 16/04/16.
//  Copyright © 2016 Cristiano Cavo. All rights reserved.
//

#ifndef __PERSONA_H
#define __PERSONA_H

class Persona {
private:
    char* nome;
    char* cognome;
    
    void copyName(const char* nome, const char* cognome);
    
public:
    Persona();
    Persona(const char* nome, const char* cognome);
    Persona(const Persona& p);
    
    const char* getNome();
    const char* getCognome();
    
    Persona& operator=(const Persona& p);
    
    ~Persona();
};

#endif

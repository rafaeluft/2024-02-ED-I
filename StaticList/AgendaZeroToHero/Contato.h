#ifndef CONTATO_H
#define CONTATO_H

typedef struct {
    unsigned int id;
    char nome[128];
    char telefone[16];
} Contato;

void Contato_print(Contato c);
Contato Contato_ui_novo();

#endif
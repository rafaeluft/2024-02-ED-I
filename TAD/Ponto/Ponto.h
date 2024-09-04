#ifndef PONTO_H
#define PONTO_H

typedef struct _ponto Ponto;
/**
 * Cria instâncias de Ponto preenchendo-as 
 * com os parâmetros
 * @param float x o valor da coordenada x
 * @param float y o valor da coordenada y
 * @return Ponto* endereço do novo ponto
 */
Ponto* Ponto_create(float, float);
/**
 * Libera a memória de instâncias de Ponto
 * @param Ponto* ponteiro para o ponto a ser deletado
 */
void Ponto_destroy(Ponto*);
/**
 * Imprime um ponto formatado em 2 casas decimais 
 * para cada variável
 * @param Ponto* ponteiro para o ponto
 */
void Ponto_print(Ponto*);
/**
 * Escreve o valor da coordenada x no ponteiro recebido como parâmetro.
 * @param Ponto* Instância de um ponto preenchido
 * @param float* Ponteiro para uma variavel float (possivelmente passada via &)
 */
void Ponto_get_x(Ponto*, float*);
/**
 * Escreve o valor da coordenada y no ponteiro recebido como parâmetro.
 * @param Ponto* Instância de um ponto preenchido
 * @param float* Ponteiro para uma variavel float (possivelmente passada via &)
 */
void Ponto_get_y(Ponto*, float*);
/**
 * Atualiza o valor da coordenada x do Ponto passado
 * @param Ponto* Instância de um ponto
 * @param float Valor da nova coordenada x (passado por cópia)
 */
void Ponto_set_x(Ponto*, float);
/**
 * Atualiza o valor da coordenada y do Ponto passado
 * @param Ponto* Instância de um ponto
 * @param float Valor da nova coordenada y (passado por cópia)
 */
void Ponto_set_y(Ponto*, float);
/**
 * Calcula o valor da distância euclidiana entre dois pontos.
 * @param Ponto* ponteiro para o primeiro ponto
 * @param Ponto* ponteiro para o segundo ponto
 * @return float o valor da distância euclidiana calculada entre os pontos.
 */
float Ponto_dist(Ponto*, Ponto*);

#endif
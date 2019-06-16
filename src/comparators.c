/*
 * Arquivo  : comparators.c
 * Tipo     : Complemento de biblioteca 
 *            Contem o corpo das funcoes do arquivo "comparators.h"
 * 
 * Autor: Guilherme Esdras (guilherme.esdras@academico.ifpb.edu.br)
 * Data: 06/2019 - Junho de 2019
 * Curso: Engenharia de Computacao / 2 Periodo / 2019.1
 * Instituicao: IFPB - Campus Campina Grande
 * 
 * Descricao do Arquivo:
 * 
 *      Esse arquivo contem a implementacao e corpo das funcoes 
 *      comparativas da biblioteca "comparators.h".
 * 
 */

/* Biblioteca (.h) necessaria para as funcoes implementadas */
#include "../include/comparators.h"

int comparadorDeInt(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int comparadorDeChar(const void *a, const void *b) {
    return strcmp( (char*)a, (char*)b );
}
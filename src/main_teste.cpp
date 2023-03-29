#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <getopt.h>
#include <string.h>
#include "fatorial.h"
#include "fibonacci.h"
#include "msgassert.h"

// definicoes de operacoes a serem testadas
#define OPFATORIAL 1
#define OPFIBONACCI 2

typedef struct opt{
  int opescolhida;
} opt_tipo;

void uso()
// Descricao: imprime as opcoes de uso
// Entrada: nao tem
// Saida: impressao das opcoes de linha de comando
{
  fprintf(stderr,"OPCOES:\n");
  fprintf(stderr,"\t-t \t\t(fatorial) \n");
  fprintf(stderr,"\t-b \t\t(fibonacci) \n");
}


void parse_args(int argc,char ** argv, opt_tipo * opt)
// Descricao: le as opcoes da linha de comando e inicializa variaveis
// Entrada: argc, argv, opt
// Saida: opt
{
     // variaveis externas do getopt
     extern char * optarg;
     extern int optind;

     // variavel auxiliar
     int c;

     // inicializacao variaveis globais para opcoes
     opt->opescolhida = -1;
     opt->tam = -1;

     // getopt - letra indica a opcao, : junto a letra indica parametro
     // no caso de escolher mais de uma operacao, vale a ultima
     while ((c = getopt(argc, argv, "isnd:h")) != EOF)
       switch(c) {
         case 't':
		  avisoAssert(opt->opescolhida==-1,
		              "Mais de uma operacao escolhida");
	          opt->opescolhida = OPFATORIAL;
                  break;
         case 'b':
		  avisoAssert(opt->opescolhida==-1,
		              "Mais de uma operacao escolhida");
	          opt->opescolhida = OPFIBONACCI;
                  break;
         default:
                  uso();
                  exit(1);

       }
       // verificacao da consistencia das opcoes
       erroAssert(opt->opescolhida>0,"necessario escolher operacao");
}


int main(int argc, char ** argv)
// Descricao: programa principal para execucao das operacoes
// Entrada: argc e argv
// Saida: depende da operacao escolhida
{
  int fat, fib;
  opt_tipo opt;
  // avaliar linha de comando
  parse_args(argc,argv,&opt);

  // execucao dependente da operacao escolhida
  switch (opt.opescolhida){
    case OPFATORIAL:
         
	 break;
    case OPFIBONACCI:
         
	 break;
   default:
         // nao deve ser executado, pois ha um erroAssert em parse_args
         uso();
	 exit(1);
  }

  return 0;
}

#include "fatorial.h"
#include "fibonacci.h"
#include "msgassert.h"

using namespace std;

char caso;

void parse_args(int argc, char const *argv[])
{
  // passa o arquivo a ser lido como argumento da linha de comando
  erroAssert(argv[1], "Sem caso selecionado");
  caso = char(argv[1]);
}

void descricao() {
    cout << "OPÇOES:" << endl;
    cout << "\t-t: fatorial" << endl;
    cout << "\t-b: fibonacci" << endl;
}

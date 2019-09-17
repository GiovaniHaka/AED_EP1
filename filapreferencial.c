#include "filapreferencial.h"

PFILA criarFila(){
	PFILA res = (PFILA) malloc(sizeof(FILAPREFERENCIAL));
	res->inicio = NULL;
	res->fimPref = NULL;
	res->inicioNaoPref = NULL;
	res->fim = NULL;
	return res;
}

int tamanho(PFILA f){
	PONT atual = f->inicio;
	int tam = 0;
	while (atual) {
		atual = atual->prox;
		tam++;
	}
	return tam;
}

PONT buscarID(PFILA f, int id){
	PONT atual = f->inicio;
	 while (atual) {
		if (atual->id == id) return atual;
		atual = atual->prox;
	}
	return NULL;
}

void exibirLog(PFILA f){
	int numElementos = tamanho(f);
	printf("\nLog fila [elementos: %i] - Inicio:", numElementos);
	PONT atual = f->inicio;
	while (atual){
		printf(" [%i;%i]", atual->id, atual->idade);
		atual = atual->prox;
	}
	printf("\n\n");
}


int consultarIdade(PFILA f, int id){
	PONT atual = f->inicio;
	 while (atual) {
		if (atual->id == id) return atual->idade;
		atual = atual->prox;
	}
	return -1;
}



bool inserirPessoaNaFila(PFILA* f, int id, int idade){
    if (id < 0 || idade < 0) return false;
    int verificaId = id;
    if (buscarID(f, verificaId) == id) return false;
    PONT elem = (PONT) malloc(sizeof(ELEMENTO));
    int anterior;
    int posterior;
    if (tamanho(f) == 0){
        elem -> id = id;
        elem -> idade = idade;
        elem -> prox = null;
        f -> inicio = elem;
        f -> fim = elem;
        f -> fimPref= elem;
    }else{
        if (idade >= IDADEPREFERENCIAL){
            elem -> id = id;
            elem -> idade = idade;


            elem -> prox = f -> inicioNaoPref;
            f -> fimPref = elem;
            f ->
        }
    }


	return false;
}

bool atenderPrimeiraDaFila(PFILA* f, int* id){




	return false;
}


bool desistirDaFila(PFILA* f, int id){



	return false;
}

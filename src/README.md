# Implementação de uma *Pilha* em C++

## Instruções de compilação:

Para compilar o programa basta executar o comando <code>make pilha</code> no diretório raiz. Depois é só executar <code>./pilha</code>, e o programa será executado.

Para mudar o tipo de implementação você deve mudar a liha 17 do arquivo pilha.cpp:
<code>#define TIPO_PILHA LISTA_LINKADA</code> para implementação da pilha como uma lista,
<code>#define TIPO_PILHA ARRAY</code> para implementação como um vetor.

#

## Requerimentos:
1. *g++*
2. *cppcheck*
3. *cpplint*
4. *valgrind*
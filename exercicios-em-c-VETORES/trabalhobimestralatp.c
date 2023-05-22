#include <stdio.h>
#define TF 30

int main() {
    int vetProd[TF], vetEstoque[TF], vetProdSE[TF],i,j,TLP=0,TLZ=0,opcao,cod,pos,prod,qtde;
    float vetPreco[TF];
    printf("1 - Cadastro\n2 - Venda\n0 - Sair\n");
    scanf("%d",&opcao);
    while(opcao != 0){
        if(opcao == 1){
            if(TLP<TF){
                printf("Codigo do produto: ");
                scanf("%d",&cod);
                //busca pos ideal para inserir
                pos=0;
                while(pos < TLP && cod > vetProd[pos])
                    pos++;
                //remanejamento
                for(i=TLP; i > pos; i--){
                    vetProd[i] = vetProd[i-1];
                    vetPreco[i] = vetPreco[i-1];
                    vetEstoque[i] = vetEstoque[i-1];
                }
                //insere nos vets
                vetProd[pos] = cod;
                printf("Preço do produto: ");
                scanf("%f", &vetPreco[pos]);
                printf("Estoque: ");
                scanf("%d", &vetEstoque[pos]);
                TLP++;
            }else{
                printf("Nao tem espaço!\n");
            }
        }else if(opcao == 2){
            printf("Produto para venda: ");
            scanf("%d",&prod);
            pos = 0;
            while(pos < TLP && prod != vetProd[pos])
                pos++;
            if(pos < TLP){//achou
                printf("Quantidade: ");
                scanf("%d",&qtde);
                if(qtde <= vetEstoque[pos])
                    vetEstoque[pos] -= qtde;
                else
                    printf("Sem estoque\n");
                if(vetEstoque[pos] == 0){
                    vetProdSE[TLZ] = vetProd[pos];
                    TLZ++;
                    //remanejamento para excluir
                    for(i=pos;i<TLP-1;i++){
                        vetProd[i] = vetProd[i+1];
                        vetPreco[i] = vetPreco[i+1];
                        vetEstoque[i] = vetEstoque[i+1];
                    }
                    TLP--;
                }
            }else{
                printf("Produto nao encontrado\n");
            }
        }else
            printf("Opcao invalida.\n");

        printf("1 - Cadastro\n2 - Venda\n0 - Sair\n");
        scanf("%d",&opcao);
    }
    for(i=0;i<TLP;i++){
        printf("Produto: %d, Preco: %.2f, Estoque: %d\n",vetProd[i],vetPreco[i],vetEstoque[i]);
    }
    for(i=0;i<TLZ;i++){
        printf("Produto: %d sem estoque\n",vetProdSE[i]);
    }

}
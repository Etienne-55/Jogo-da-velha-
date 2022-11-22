#include <stdio.h>
#include <conio.h>

char quadrado[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void tabuleiro();
int jogadas();

int main()
{
    int jogador = 1, i, escolha;

    char marcar;
    //Entrada: coleta uma coordenada na matriz para marcar uma jogada.
    do
    {
        tabuleiro();
        jogador = (jogador % 2) ? 1 : 2;

        printf("Jogador %d, Informe um numero:  ", jogador);
        scanf("%d", &escolha);
        
        marcar = (jogador == 1) ? 'X' : 'O';
        
        if (escolha == 1 && quadrado[1] == '1')
            quadrado[1] = marcar;
            
        else if (escolha == 2 && quadrado[2] == '2')
            quadrado[2] = marcar;
            
        else if (escolha == 3 && quadrado[3] == '3')
            quadrado[3] = marcar;
            
        else if (escolha== 4 && quadrado[4] == '4')
            quadrado[4] = marcar;
            
        else if (escolha == 5 && quadrado[5] == '5')
            quadrado[5] = marcar;
            
        else if (escolha == 6 && quadrado[6] == '6')
            quadrado[6] = marcar;
            
        else if (escolha == 7 && quadrado[7] == '7')
            quadrado[7] = marcar;
            
        else if (escolha == 8 && quadrado[8] == '8')
            quadrado[8] = marcar;
            
        else if (escolha == 9 && quadrado[9] == '9')
            quadrado[9] = marcar;

//Saida: Informa o resultado do jogo ou jogada.
    else
    {
        printf("Jogada invalida ");

        jogador--;
        getch();
    }
        i = jogadas();

        jogador++;
    }   while (i ==  - 1);
    
        tabuleiro();
    
        if (i == 1)
        printf("==>\ajogador %d venceu ", --jogador);
        else
        printf("==>\aEmpate");

        getch();

    return 0;
}

// Combinaçoes que resultam em vitória.
int jogadas()
{
    if (quadrado[1] == quadrado[2] && quadrado[2] == quadrado[3])
        return 1;
        
    else if (quadrado[4] == quadrado[5] && quadrado[5] == quadrado[6])
        return 1;
        
    else if (quadrado[7] == quadrado[8] && quadrado[8] == quadrado[9])
        return 1;
        
    else if (quadrado[1] == quadrado[4] && quadrado[4] == quadrado[7])
        return 1;
        
    else if (quadrado[2] == quadrado[5] && quadrado[5] == quadrado[8])
        return 1;
        
    else if (quadrado[3] == quadrado[6] && quadrado[6] == quadrado[9])
        return 1;
        
    else if (quadrado[1] == quadrado[5] && quadrado[5] == quadrado[9])
        return 1;
        
    else if (quadrado[3] == quadrado[5] && quadrado[5] == quadrado[7])
        return 1;
        
    else if (quadrado[1] != '1' && quadrado[2] != '2' && quadrado[3] != '3' &&
        quadrado[4] != '4' && quadrado[5] != '5' && quadrado[6] != '6' && quadrado[7] 
        != '7' && quadrado[8] != '8' && quadrado[9] != '9')

        return 0;
    else
        return  - 1;
}
//Codigo do tabuleiro.
    void tabuleiro()
{
    
    printf("\n\n\tJogo da velha\n\n");

    printf("Jogador 1 (X)  -  Jogador 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", quadrado[1], quadrado[2], quadrado[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", quadrado[4], quadrado[5], quadrado[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", quadrado[7], quadrado[8], quadrado[9]);

    printf("     |     |     \n\n");
}
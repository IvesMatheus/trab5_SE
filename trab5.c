#include <stdio.h>
#include <conio.h>

int main()
{
    int P, T;

    scanf("%d%d", &P, &T);

    int I[P][T], O[P][T], x, y;

    for(x = 0; x < P; x++)
    {
        for(y = 0; y < T; y++)
            scanf("%d", &I[x][y]);
    }

    for(x = 0; x < P; x++)
    {
        for(y = 0; y < T; y++)
            scanf("%d", &O[x][y]);
    }

    int aux, M[P], S[P];

    scanf("%d", &aux);

    while(aux != -1)
    {
        M[0] = aux;
        for(x = 1; x < P; x++)
            scanf("%d", M[x]);

        for(x = 0; x < P; x++)
            scanf("%d", S[x]);

        //CHAMA FUNÇÃO RECURSIVA QUE VERIFICA REDE


    }
}

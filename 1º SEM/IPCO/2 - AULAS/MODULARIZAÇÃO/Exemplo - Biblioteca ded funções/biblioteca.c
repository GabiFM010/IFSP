// todas as funções matematicas -> joga aqui

int soma(int n1, int n2)
{
    return (n1 + n2);
}

// int subtrai(int n1, int n2)
// {
//     return (n1 - n2);

// }

int subtrai(int opcao, int n1, int n2)
{
    if (opcao == 1)
    {
        return (n1 - n2);
    } else
    {
        return (n2 - n1);
    }
}


int divide(int n1, int n2)
{
    return (n1 / n2);
}

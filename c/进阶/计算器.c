// #include <stdio.h>
// void menu()
// {
//     printf("\n");
//     printf("   this is a caculattor  \n");
//     printf("┌────────────────────────┐\n");
//     printf("│   [1] Add     [2] Sub  │\n");
//     printf("│   [3] Mul     [4] Div  │\n");
//     printf("│   [0] Exit             │\n");
//     printf("└────────────────────────┘\n");
// }
// int Add(int x, int y)
// {
//     return x + y;
// }

// int Sub(int x, int y)
// {
//     return x - y;
// }

// int Mul(int x, int y)
// {
//     return x * y;
// }

// int Div(int x, int y)
// {
//     return x / y;
// }

// int main()
// {
//     int res = 0;
//     int x, y = 0;
//     int input = 0;
//     do
//     {
//         menu();
//         printf("please make your choice:");
//         scanf("%d", &input);
//         // printf("please intout two number");
//         //}while(input){
//         switch (input)
//         {
//         case 1:
//             printf("please intout two number");
//             scanf("%d %d", &x, &y);
//             res = Add(x, y);
//             printf("%d\n", res);
//             break;

//         case 2:
//             printf("please intout two number");
//             scanf("%d %d", &x, &y);
//             res = Sub(x, y);
//             printf("%d\n", res);
//             break;

//         case 3:
//             printf("please intout two number");
//             scanf("%d %d", &x, &y);
//             res = Mul(x, y);
//             printf("%d\n", res);
//             break;

//         case 4:
//             printf("please inpout two number");
//             scanf("%d %d", &x, &y);
//             res = Div(x, y);
//             printf("%d\n", res);
//             break;

//         case 0:
//             printf("you have exited the app");

//         default:
//             printf("choice unvalid");
//             break;
//         }
//     } while (input);

//     return 0;
// }

#include <stdio.h>
void menu()
{
    printf("\n");
    printf("   this is a caculattor  \n");
    printf("┌────────────────────────┐\n");
    printf("│   [1] Add     [2] Sub  │\n");
    printf("│   [3] Mul     [4] Div  │\n");
    printf("│   [0] Exit             │\n");
    printf("└────────────────────────┘\n");
}
int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}

int Mul(int x, int y)
{
    return x * y;
}

int Div(int x, int y)
{
    return x / y;
}

void cale(int (*pf)(int, int))
{
    int x = 0;
    int y = 0;
    int res = 0;
    printf("please input two number");
    scanf("%d %d", &x, &y);
    res = pf(x, y);
    printf("%d\n", res);
}

int main()
{
    // int res = 0;
    // int x, y = 0;
    int input = 0;
    do
    {
        menu();
        scanf("%d", &input);
        // printf("please intout two number");
        //}while(input){
        switch (input)
        {
        case 1:
            cale(Add);
            break;

        case 2:
            cale(Sub);
            break;

        case 3:
            cale(Mul);
            break;

        case 4:
            cale(Div);
            break;

        case 0:
            printf("you have exited the app\n");
            break;

        default:
            printf("choice unvalid");
            break;
        }
    } while (input);

    return 0;
}
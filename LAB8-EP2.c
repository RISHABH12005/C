#include<stdio.h>
int main()
{
    int month;
        printf("Enter the month No.");
        scanf("%d",&month);
        switch(month)
        {
            case 3 ... 5:
                printf("Spring");
                break;
                case 6 ... 8:
                    printf("Summer");
                    break;
                    case 9 ... 11:
                        printf("Autumn");
                        break;
                        case 1 ... 2:case 12:
                            printf("Winter");
                            break;
                        default:
                            printf("Enter valid month No.");
                            break;
        }
        return 0;
}

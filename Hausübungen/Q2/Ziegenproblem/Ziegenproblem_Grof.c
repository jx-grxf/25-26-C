#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int carDoor;
    int playerDoor;
    int hostDoor;
    int switchDoor;

    int totalExperiments = 0;

    int wonChanger = 0;
    int wonKeeper = 0;

    int lostChanger = 0;
    int lostKeeper = 0;

    char userChoice = ' ';
    int userExperiments = 0;

    double wonChangerPCT = 0.0;
    double wonKeeperPCT = 0.0;
    double lostChangerPCT = 0.0;
    double lostKeeperPCT = 0.0;

    srand(time(NULL));

    printf("===ZIEGENPROBLEM===\n");

    do
    {

        printf("How many times would you like to do the experiment?\n");
        scanf("%d", &userExperiments);

        totalExperiments = 0;
        wonKeeper = wonChanger = 0;
        lostKeeper = lostChanger = 0;

        

        for (int i = 0; i < userExperiments; i++)
        {
            totalExperiments++;

            carDoor = rand() % 3;
            playerDoor = rand() % 3;

            if (playerDoor == carDoor)
            {
                do
                {
                    hostDoor = rand() % 3;
                } while (hostDoor == playerDoor);

                do
                {
                    switchDoor = rand() % 3;
                } while (switchDoor == carDoor || switchDoor == hostDoor);
            }
            else
            {
                do
                {
                    hostDoor = rand() % 3;
                } while (hostDoor == carDoor || hostDoor == playerDoor);

                switchDoor = carDoor;
            }

            printf("Experiment %d\nCar Door: %d, Player Door: %d, Host Door: %d, Switch Door: %d.\n", i, carDoor, playerDoor, hostDoor, switchDoor);

            if (playerDoor == carDoor)
            {
                wonKeeper++;
            }
            else
            {
                lostKeeper++;
            }

            if (switchDoor == carDoor)
            {
                wonChanger++;
            }
            else
            {
                lostChanger++;
            }
        }

        wonChangerPCT = (double)wonChanger / totalExperiments * 100;
        wonKeeperPCT = (double)wonKeeper / totalExperiments * 100;

        lostChangerPCT = (double)lostChanger / totalExperiments * 100;
        lostKeeperPCT = (double)lostKeeper / totalExperiments * 100;

        printf("===============================================\n");
        printf("| in %%   |   Keeper   |   Changer   |\n");
        printf("===============================================\n");
        printf("| Won    |    %.2lf    |    %.2lf    |\n", wonKeeperPCT, wonChangerPCT);
        printf("| Lost   |    %.2lf    |    %.2lf    |\n", lostKeeperPCT, lostChangerPCT);
        printf("===============================================\n");
        printf("| Total experiments:            %d |\n", totalExperiments);
        printf("===============================================\n");

        printf("Do you want to do another experiments |y/n|? \n");
        scanf(" %c", &userChoice);

    } while (userChoice != 'n');

    return 0;
}
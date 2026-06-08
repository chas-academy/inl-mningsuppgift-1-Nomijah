#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Your code goes here
    int throws[100];
    int stats[6] = {0, 0, 0, 0, 0, 0};
    int sum = 0;

    for (int i = 0; i < 100; i++)
    {
        int dice_roll = (rand() % 6) + 1;
        throws[i] = dice_roll;
        sum += dice_roll;
        if (dice_roll == 1)
        {
            stats[0]++;
        }
        else if (dice_roll == 2)
        {
            stats[1]++;
        }
        else if (dice_roll == 3)
        {
            stats[2]++;
        }
        else if (dice_roll == 4)
        {
            stats[3]++;
        }
        else if (dice_roll == 5)
        {
            stats[4]++;
        }
        else
        {
            stats[5]++;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", stats[i]);
    }
    printf("%d\n", sum);
    printf("%.1f\n", sum / 100.0);

    return 0;
}

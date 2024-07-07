/* PROGRAMMING FUNDAMENTAL'S PROJECT FOR FALL 2022 BS(CS)
 * Shape of each piece is represented by rows in the array.
 * TIP: Name the array what is already been coded to avoid any unwanted errors.
 */
int BLOCKS[8][8] = {{0, 1, 2, 3}, {0, 2, 4, 6}, {0, 2, 3, 4}, {0, 1, 2, 4}, {0, 2, 4, 5}, {1, 3, 2, 4}, {0, 2, 3, 5}, {0, 0, 0, 0}};

int I1[4][4] = {{0, 1, 2, 3}, {0, 0, 0, 0}, {0, 1, 2, 3}, {0, 0, 0, 0}};
int I2[4][4] = {{0, 0, 0, 0}, {0, 1, 2, 3}, {0, 0, 0, 0}, {0, 1, 2, 3}};
int T1[5][5] = {{1, 0, 1, 2}, {0, 1, 1, 1}, {0, 1, 2, 1}, {0, 0, 0, 1}};
int T2[5][5] = {{0, 1, 1, 1}, {1, 0, 1, 2}, {0, 0, 0, 1}, {0, 1, 2, 1}};
int R1[5][5] = {{0, 0, 1, 2}, {0, 1, 1, 1}, {0, 1, 2, 2}, {0, 0, 0, 1}};
int R2[5][5] = {{0, 1, 1, 1}, {2, 2, 1, 0}, {0, 0, 0, 1}, {0, 1, 2, 0}};
int L1[5][5] = {{2, 2, 1, 0}, {0, 1, 1, 1}, {0, 0, 1, 2}, {0, 0, 0, 1}};
int L2[5][5] = {{0, 1, 1, 1}, {0, 0, 1, 2}, {1, 0, 0, 0}, {0, 1, 2, 2}};
int Z1[5][5] = {{0, 1, 1, 2}, {0, 0, 1, 1}, {0, 1, 1, 2}, {0, 0, 1, 1}};
int Z2[5][5] = {{0, 0, 1, 1}, {2, 1, 1, 0}, {0, 0, 1, 1}, {2, 1, 1, 0}};
int S1[5][5] = {{0, 1, 1, 2}, {0, 0, 1, 1}, {0, 1, 1, 2}, {0, 0, 1, 1}};
int S2[5][5] = {{1, 1, 0, 0}, {0, 1, 1, 2}, {1, 1, 0, 0}, {0, 1, 1, 2}};

void rotation(bool &rotate, int &number, int &temp, int &x, int &z)
{
    if (rotate == 1)
    {
        if (temp == 1)
        {
            if (z >= 6)
                z = 5;
            int y;
            if (number == 1)
            {
                y = 0;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (I1[y][i]) + z;
                    point_1[i][1] = (I2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (I1[y][i]) + z;
                    shadow1[i][1] = (I2[y][i]) + x;
                }
            }

            else if (number == 2)
            {
                y = 1;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (I1[y][i]) + z;
                    point_1[i][1] = (I2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (I1[y][i]) + z;
                    shadow1[i][1] = (I2[y][i]) + x;
                }
            }

            else if (number == 3)
            {
                y = 2;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (I1[y][i]) + z;
                    point_1[i][1] = (I2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (I1[y][i]) + z;
                    shadow1[i][1] = (I2[y][i]) + x;
                }
            }

            else if (number == 4)
            {
                y = 3;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (I1[y][i]) + z;
                    point_1[i][1] = (I2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (I1[y][i]) + z;
                    shadow1[i][1] = (I2[y][i]) + x;
                }
            }
            if (number == 4)
                number = 0;
        }

        else if (temp == 2)
        {
            if (z >= 6)
                z = 6;
            int y;
            if (number == 1)
            {
                y = 0;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (T1[y][i]) + z;
                    point_1[i][1] = (T2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (T1[y][i]) + z;
                    shadow1[i][1] = (T2[y][i]) + x;
                }
            }

            else if (number == 2)
            {
                y = 1;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (T1[y][i]) + z;
                    point_1[i][1] = (T2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (T1[y][i]) + z;
                    shadow1[i][1] = (T2[y][i]) + x;
                }
            }

            else if (number == 3)
            {
                y = 2;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (T1[y][i]) + z;
                    point_1[i][1] = (T2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (T1[y][i]) + z;
                    shadow1[i][1] = (T2[y][i]) + x;
                }
            }

            else if (number == 4)
            {
                y = 3;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (T1[y][i]) + z;
                    point_1[i][1] = (T2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (T1[y][i]) + z;
                    shadow1[i][1] = (T2[y][i]) + x;
                }
            }
            if (number == 4)
                number = 0;
        }

        else if (temp == 3)
        {
            if (z >= 6)
                z = 6;
            int y;
            if (number == 1)
            {
                y = 0;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (R1[y][i]) + z;
                    point_1[i][1] = (R2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (R1[y][i]) + z;
                    shadow1[i][1] = (R2[y][i]) + x;
                }
            }

            else if (number == 2)
            {
                y = 1;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (R1[y][i]) + z;
                    point_1[i][1] = (R2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (R1[y][i]) + z;
                    shadow1[i][1] = (R2[y][i]) + x;
                }
            }

            else if (number == 3)
            {
                y = 2;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (R1[y][i]) + z;
                    point_1[i][1] = (R2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (R1[y][i]) + z;
                    shadow1[i][1] = (R2[y][i]) + x;
                }
            }

            else if (number == 4)
            {
                y = 3;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (R1[y][i]) + z;
                    point_1[i][1] = (R2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (R1[y][i]) + z;
                    shadow1[i][1] = (R2[y][i]) + x;
                }
            }
            if (number == 4)
                number = 0;
        }

        else if (temp == 4)
        {
            if (z >= 6)
                z = 6;
            int y;
            if (number == 1)
            {
                y = 0;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (L1[y][i]) + z;
                    point_1[i][1] = (L2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (L1[y][i]) + z;
                    shadow1[i][1] = (L2[y][i]) + x;
                }
            }

            else if (number == 2)
            {
                y = 1;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (L1[y][i]) + z;
                    point_1[i][1] = (L2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (L1[y][i]) + z;
                    shadow1[i][1] = (L2[y][i]) + x;
                }
            }

            else if (number == 3)
            {
                y = 2;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (L1[y][i]) + z;
                    point_1[i][1] = (L2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (L1[y][i]) + z;
                    shadow1[i][1] = (L2[y][i]) + x;
                }
            }

            else if (number == 4)
            {
                y = 3;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (L1[y][i]) + z;
                    point_1[i][1] = (L2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (L1[y][i]) + z;
                    shadow1[i][1] = (L2[y][i]) + x;
                }
            }
            if (number == 4)
                number = 0;
        }

        else if (temp == 5)
        {
            if (z >= 6)
                z = 6;
            int y;
            if (number == 1)
            {
                y = 0;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (Z1[y][i]) + z;
                    point_1[i][1] = (Z2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (Z1[y][i]) + z;
                    shadow1[i][1] = (Z2[y][i]) + x;
                }
            }

            else if (number == 2)
            {
                y = 1;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (Z1[y][i]) + z;
                    point_1[i][1] = (Z2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (Z1[y][i]) + z;
                    shadow1[i][1] = (Z2[y][i]) + x;
                }
            }

            else if (number == 3)
            {
                y = 2;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (Z1[y][i]) + z;
                    point_1[i][1] = (Z2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (Z1[y][i]) + z;
                    shadow1[i][1] = (Z2[y][i]) + x;
                }
            }

            else if (number == 4)
            {
                y = 3;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (Z1[y][i]) + z;
                    point_1[i][1] = (Z2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (Z1[y][i]) + z;
                    shadow1[i][1] = (Z2[y][i]) + x;
                }
            }
            if (number == 4)
                number = 0;
        }

        else if (temp == 6)
        {
            if (z >= 6)
                z = 6;
            int y;
            if (number == 1)
            {
                y = 0;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (S1[y][i]) + z;
                    point_1[i][1] = (S2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (S1[y][i]) + z;
                    shadow1[i][1] = (S2[y][i]) + x;
                }
            }

            else if (number == 2)
            {
                y = 1;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (S1[y][i]) + z;
                    point_1[i][1] = (S2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (S1[y][i]) + z;
                    shadow1[i][1] = (S2[y][i]) + x;
                }
            }

            else if (number == 3)
            {
                y = 2;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (S1[y][i]) + z;
                    point_1[i][1] = (S2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (S1[y][i]) + z;
                    shadow1[i][1] = (S2[y][i]) + x;
                }
            }

            else if (number == 4)
            {
                y = 3;
                for (int i = 0; i < 4; i++)
                {
                    point_1[i][0] = (S1[y][i]) + z;
                    point_1[i][1] = (S2[y][i]) + x;
                    for (int i = 0; i < 4; i++)
                    {
                        gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0;
                    }
                    shadow1[i][0] = (S1[y][i]) + z;
                    shadow1[i][1] = (S2[y][i]) + x;
                }
            }
            if (number == 4)
                number = 0;
        }

        else if (temp == 0)
            number = 0;
    }
    rotate = 0;
}
void correction(int &pp, int &number, int &temp)
{
    if (pp == 1)
    {
        if (temp == 1)
        {
            if (number == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (I2[0][i]);
                }
            }
            if (number == 2)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (I2[1][i]);
                }
            }
            if (number == 3)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (I2[2][i]);
                }
            }
            if (number == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (I2[3][i]);
                }
            }
        }

        if (temp == 2)
        {
            if (number == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (T2[0][i]);
                }
            }
            if (number == 2)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (T2[1][i]);
                }
            }
            if (number == 3)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (T2[2][i]);
                }
            }
            if (number == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (T2[3][i]);
                }
            }
        }
        if (temp == 3)
        {
            if (number == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (R2[0][i]);
                }
            }
            if (number == 2)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (R2[1][i]);
                }
            }
            if (number == 3)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (R2[2][i]);
                }
            }
            if (number == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (R2[3][i]);
                }
            }
        }
        if (temp == 4)
        {
            if (number == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (L2[0][i]);
                }
            }
            if (number == 2)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (L2[1][i]);
                }
            }
            if (number == 3)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (L2[2][i]);
                }
            }
            if (number == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (L2[3][i]);
                }
            }
        }
        if (temp == 5)
        {
            if (number == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (Z2[0][i]);
                }
            }
            if (number == 2)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (Z2[1][i]);
                }
            }
            if (number == 3)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (Z2[2][i]);
                }
            }
            if (number == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (Z2[3][i]);
                }
            }
        }
        if (temp == 6)
        {
            if (number == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (S2[0][i]);
                }
            }
            if (number == 2)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (S2[1][i]);
                }
            }
            if (number == 3)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (S2[2][i]);
                }
            }
            if (number == 4)
            {
                for (int i = 0; i < 4; i++)
                {
                    shadow1[i][1] = (S2[3][i]);
                }
            }
        }
    }
}

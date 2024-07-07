
void fallingPiece(float& timer, float& delay, int& colorNum, int& temp, int& r, int& x, int& z, int& ww, int& bb, int& ff, int& a)

{
    int s = rand() % 8; // made for first block
    int u=0; 
    int b=0;
    bb = temp; // bb is the previous block
    if (timer> delay)
    {
    	/*if (r == 0)
        {
            temp = s;
    		for (int i=0;i<4;i++)
                {
                    point_1[i][0] = (BLOCKS[s][i] % 2) ;
                    point_1[i][1] = (BLOCKS[s][i] / 2) - 1;
                    shadow1[i][0] = (BLOCKS[s][i] % 2 );
                    shadow1[i][1] = (BLOCKS[s][i] / 2) - 1;
                }
        }*/
        if (temp !=7)            
            for (int i=0;i<4;i++)
            {
                point_2[i][0]=point_1[i][0];
                point_2[i][1]=point_1[i][1];
                point_1[i][1]+=1;
                u++;
                if (u == 4)
                    x++; // counter for vertical movement
            }
        if (temp == 7)
        {
            for (int i=0;i<4;i++)
            {
                point_2[i][0]=point_1[i][0];
                point_2[i][1]=point_1[i][1];
                point_1[i][1]+=1;
            }
        }
            r++; // was made for grid shrink
        if (!anamoly() )	
        {
            for (int i = 0; i < 4; i++)
            {
                gameGrid[shadow1[i][1] - 1][shadow1[i][0]] = 0; // would remove the shadow
            }
            for (int i=0;i<4;i++)
            {
                gameGrid[point_2[i][1]][point_2[i][0]] = colorNum; 
            }
            z = rand() % 9;
            int n=rand()%8;
            temp = n;
            ww++; // counter for speeding blocks up
            x = 0; // resetting 
            u = 0;
            colorNum = rand()%7 +1;
            if (temp !=7)
                for (int i=0;i<4;i++)
                {
                    point_1[i][0] = (BLOCKS[n][i] % 2);
                    point_1[i][1] =  BLOCKS[n][i] / 2;
                    shadow1[i][0] = (BLOCKS[n][i] % 2);
                    shadow1[i][1] = BLOCKS[n][i] / 2;
                }
            if (temp == 7)
            {
                for (int i=0;i<4;i++)
                {
                    point_1[i][0] = (BLOCKS[7][i] % 2) + z;
                    point_1[i][1] =  BLOCKS[7][i] / 2;
                    shadow1[i][0] = (BLOCKS[7][i] % 2) + z;
                    shadow1[i][1] = BLOCKS[7][i] / 2; 
                    a = z; // random position assigning to bomb           
                }
            }
            }
            timer=0;   
	}
}   


void bomb_break (int& temp, int& bb, int& ff, int& z, int& a, int& x, int& g)
{
    int q;
    if (temp!=7) // checks the new block
    {
        if (bb == 7) // checks the previous block
        {
            for(int i =0 ; i < 20 ; i++)
            {
                if (gameGrid[i][a] !=0 )
                {
                    q = i; // storing the current vertical postition of the first existing block
                    if (gameGrid[q+1][a] == gameGrid[q][a]) // checks if bomb and the block under it has the same colour
                    {
                        for (int i =0 ; i < 20 ; i++) 
                        {
                            for (int j=0; j < 10 ; j++)
                            {
                                gameGrid[i][j] = 0; // empties the whole grid
                            }
                        }
                    // g = 0;
                    }
                    else if(q == 19) // checks if block falls on an empty space
                    {
                        gameGrid[q][a] = 0; 
                    }
                    else // if colours dont match
                    {
                        gameGrid[q+1][a] = 0;
                        gameGrid[q+1][a] = 0;
                        gameGrid[q][a] = 0;     // removing the blocks under, left, right, bottomleft , bottom right
                        gameGrid[q][a-1] = 0;
                        gameGrid[q+1][a+1] = 0;
                        gameGrid[q+1][a-1] = 0;

                    }
                    break;
                }
            }

        }
    }
}     

void movement(int& delta_x, int& temp, int& z, int& pp, int& number)
{
	int u=0;
	int h=0;
      
    if (temp != 7)
    {
	    if (delta_x == 2)
    	{
    		for (int i=0 ; i < 4 ; i++) // checking left boundry
    		{
    			if (point_1[i][0] - 1 == -1)
    				u++;
    		}
    		
    		if (u==0) // validation for boundries
    		{
    			for (int i=0 ; i < 4 ; i++) // block movement
    			{
    				point_1[i][0]-=1;
    			}
    			for (int i=0; i < 4 ; i++)
        		{
            		gameGrid[shadow1[i][1]-1][shadow1[i][0]] = 0; // removing shadow
        		}
                if (pp!=1) // checking if block has rotated or not
                {
        		    for (int i=0 ; i < 4 ; i++)
    			    {
    				    shadow1[i][1] = BLOCKS[temp][i] / 2; 
                    }
                }
                correction(pp, number, temp); // correction for shadow movement

    		    for (int i=0 ; i < 4 ; i++)	
    			    shadow1[i][0]-=1;   // shadow movement after correction
    		}	
    	}
    	
     
    
    	else if(delta_x == 1)
    	{
    		for (int i=0 ; i < 4 ; i++)
    		{
    			if (point_1[i][0] + 1 == 10)// checking right boundries
    				h++;
    		}
    	
    		if (h==0) // validation for boundries
    		{
    			for (int i=0 ; i < 4 ; i++)
    			{	
    				point_1[i][0]+=1;    // block movement
    			}
    			for (int i=0; i < 4 ; i++)
        		{
            		gameGrid[shadow1[i][1]-1][shadow1[i][0]] = 0;  // removing shadow
        		}
                if (pp !=1)  // checking if block has rotated or not
                {
        		    for (int i=0 ; i < 4 ; i++)
    			    {
    				    shadow1[i][1] = BLOCKS[temp][i] / 2;
    			    }
                }
                correction(pp, number, temp); // correction for shadow movement

    			for (int i=0 ; i < 4 ; i++)
    				shadow1[i][0]+=1;	  // shadow movement after correction
    		}
    	}
    		
    }
}
    
void linebreak (bool& clear, int& g)
{
    int counter=0;
    bool down=0;
    int y=0;
    int r =0;
    for (int i=19; i >= 0 ; i--)
    {
        for (int j=9; j >= 0 ; j--)
        {
            if (gameGrid[i][j] != 0 && gameGrid[i][j] != 31)  // checking if a line is complete 
                counter++; // simple counter logic
                // y = i;
        }

        if (counter == 10) 
        {
            // for (int i=0 ; i < 10 ; i++)
            // {
            //     if (gameGrid[y][i] == 1)
            //     {
            //         r++;  // validation for game shrink 
            //     }
            // }
            // if (r!=10)
            // {
                down = 1; // checks if line was removed
                for (int p=0; p < 10 ; p++)
                {
                    gameGrid[i][p] = 0;     // empties that line
                } 
                // g++;
            // }
        }
        counter = 0;

        if (down == 1)
        {
            for (i ; i!=0; i--)
            {
                for (int j=0 ; j < 10 ; j++ )
                {   
                    gameGrid[i][j] = gameGrid[i-1][j];  // move the blocks down a line when line is removed upon completion
                }
            }
            down = 0; // reseting
        }
    }
    
    
}

bool gameover (bool& over)
{
    for (int i=0; i < 10 ; i++)
        {
            if(gameGrid[0][i] != 0) // simple function for checking if a block has value in the first row
                over = 1;
        }       
        
    return over;
}

void instant (int& temp, float& timer, float& delay, float& uu)
{
        delay = 0.00001; // extreme delay for blocks for block to instantly fall down
   
   for (int i=0 ; i < 4 ; i++)
   {
   	if (point_1[i][1] == 0)      // checks if new block appeared
        delay = uu;   // reseting the delay
   }                  // uu is basically the increased delay that is gradually increasing
   	
}

void up (float& delay, int& ww, float& uu, int& g)
{
    int q=0;
    if (ww == 4)  // checks the number of blocks appeared
    {
        uu -=0.01; // speeding up the block speed
        ww = 0;  // reseting
    }
    
}


void showshadow(int &colorNum, int &temp, int& pp)
{
    {
        for (;;) // for display to not come in discrete times but all at once
        {
            if (!shadowcheck()) // anamoly but for shadow display
                break;
            for (int i = 0; i < 4; i++)
            {
                shadow1[i][1] += 1;  // shadow display instantly falls down
            }
        }
    }
    if (!shadowcheck())
    {
        for (int i = 0; i < 4; i++)
        {
            gameGrid[shadow1[i][1]-1][shadow1[i][0]] = 31; // saving shadow value in grid
        }
    }
    if (temp != 1)
    {
        for (int i = 0; i < 4; i++)
        {
            if (point_1[i][1] + i == shadow1[i][1] - 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    gameGrid[shadow1[i][1]-1][shadow1[i][0]] = 0;
                }
            pp = 0;
            }
        }
    }

    if (temp == 1)
    {
        for (int i = 0; i < 4; i++)
        {

            if (gameGrid[point_1[i][1] + 1][point_1[i][0]] > 0)
            {
                for (int i = 0; i < 4; i++)
                {
                    gameGrid[shadow1[i][1]-1][shadow1[i][0]] = 0;
                }
            pp = 0;
            }
        }
    }
}
      
      


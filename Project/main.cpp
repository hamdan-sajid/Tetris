/* PROGRAMMING FUNDAMENTAL'S PROJECT FOR FALL 2022 BS(CS)
 * You don't need to change anything in the driver code/main function except the part(s) where instructed.
 * You are expected to define your functionalities in the "functionality.h" header and call them here in the instructed part(s).
 * The game is started with a small box, you need to create other possible in "pieces.h" file in form of array.
    E.g., Syntax for 2 pieces, each having four coordinates -> int Pieces[2][4];
 * Load the images into the textures objects from img directory.
 * Don't make any changes to the "utils.h" header file except for changing the coordinate of screen or global variables of the game.
 * SUGGESTION: If you want to make changes in "utils.h", do it once you complete rest of the functionalities.
 * TIP: You can study SFML for drawing scenes, sprites and window.
 * */

#include <SFML/Graphics.hpp>
#include <time.h>
#include "utils.h"
#include "pieces.h"
#include "functionality.h"
using namespace sf;
int main()
{
    srand(time(0));
    RenderWindow window(VideoMode(320, 480), title);
    Texture obj1, obj2, obj3, obj5, obj8, obj6;

    obj1.loadFromFile("img/tiles.png");
    obj2.loadFromFile("img/background.png");
    obj3.loadFromFile("img/frame.png");
    obj5.loadFromFile("img/no1.png");
    obj8.loadFromFile("img/no3.png");
    obj6.loadFromFile("img/no2.png");
    
    Sprite sprite(obj1), background(obj2), frame(obj3), menu(obj5), help(obj8), cont(obj6);

    int delta_x = 0, colorNum = 1;
    float timer = 0, delay = 0.3;
    bool rotate = 0, clear = 1;
    bool over = 0, inst;
    int number = 0, temp = 0;
    int r = 0, x = 0, z = 4;
    int ww = 0, bb = 0;
    float uu = 0.3;
    int k, ff;
    int a=0, g=0;
    int pp;
    bool xx=0;
    int qq=0;
    int www=0;
    int jjj=0;
    Clock clock;
     for (;;)
        {   
            Event aa;
            window.draw(menu);
            window.display();
            window.pollEvent(aa);
            
            if (aa.key.code == Keyboard::Num1)
            {
                break;
            }
            if (aa.key.code == Keyboard::Num4)
            {
                window.close();
                www = 1; // checks if the user wants to exit the game
                break;
            }
            if (aa.key.code == Keyboard::Num3)
            {
                for (;;)
                {
                    Event rr;
                    window.draw(help);
                    window.display();
                    window.pollEvent(rr);
                    if (rr.key.code == Keyboard::H)
                    {
                        jjj =1; // checks if user wants to exit the help menu
                        break;
                    }
                }
            }  
        }
    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time; 
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
            if (e.type == Event::KeyPressed)
            {
                if (e.key.code == Keyboard::Up)
                {
                    rotate = true;
                    number++; // checks the pattern on which the block is currently rotated
                    pp =1; // checks if the block is rotated
                }
                else if (e.key.code == Keyboard::Left)
                {
                    delta_x = 2; // 2 means left movement

                    movement(delta_x, temp, z, pp, number);
                }
                else if (e.key.code == Keyboard::Right)
                {
                    delta_x = 1; // 1 means right movement
                    movement(delta_x, temp, z, pp, number);
                }
                delta_x = 0;
            }
            if (Keyboard::isKeyPressed(Keyboard::Down))
                delay = 0.05;

            if (delay > timer)
                delay = uu; // basically speeding up the game when a certain number of blocks placed

            if (e.key.code == Keyboard::H)
            {
                for (;;)
                {
                 Event aa;
                    window.draw(cont);
                    window.display();
                    window.pollEvent(aa);
            
                    if (aa.key.code == Keyboard::Num1)
                    {
                        break;
                    }
                    if (aa.key.code == Keyboard::Num4)
                    {    
                        www = 1; // checks if the user wants to exit the game
                        break;
                    }
                    if (aa.key.code == Keyboard::Num3)
                    {
                        for (;;)
                        {
                            Event rr;
                            window.draw(help);
                            window.display();
                            window.pollEvent(rr);
                            if (rr.key.code == Keyboard::H)
                            {
                                jjj =1; // checks if user wants to exit the help menu
                                break;
                            }
                        }
                    }     
                }
                  
            } 
        }

        if (Keyboard::isKeyPressed(Keyboard::Space))
        {
            instant(temp, timer, delay, uu);
        }

        fallingPiece(timer, delay, colorNum, temp, r, z, x, ww, bb, ff, a);
        linebreak(clear, g);
        gameover(over);
        rotation(rotate, number, temp, z, x);
        up(delay, ww, uu, g);
        bomb_break(temp, bb, z, ff, a, x, g);
        // shrink (ww, g, bb ,temp);
        showshadow(colorNum, temp, pp);

        if (over == 1) // means the block has touched the upper boundry
        {
            over = 0; 
            break;
        }
        if (www == 1) // basically quits the game if choosen in menu
        {
            break; 
        }
        window.clear(Color::Black);
        window.draw(background);
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (gameGrid[i][j] == 0)
                    continue;
                sprite.setTextureRect(IntRect(gameGrid[i][j] * 18, 0, 18, 18));
                sprite.setPosition(j * 18, i * 18);
                sprite.move(28, 31); // offset
                window.draw(sprite);
            }
        }
        for (int i = 0; i < 4; i++)
        {
            sprite.setTextureRect(IntRect(colorNum * 18, 0, 18, 18));
            sprite.setPosition(point_1[i][0] * 18, point_1[i][1] * 18);
            sprite.move(28, 31);
            window.draw(sprite);
        }
        //---The Final on Which Everything is Drawn Over is Loaded---//
        window.draw(frame);
        //---The Window that now Contains the Frame is Displayed---//
        window.display();
    }
    return 0;
}

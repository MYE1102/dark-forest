//
//  Block.hpp
//  SampleGame
//
//  Created by Margaret Patrick on 1/26/17.
//  Edited by Ye Eun Myung on 03/08/2017
//  Copyright © 2017 De Anza College Developers' Guild. All rights reserved.
//

/*
*
*/

#ifndef Block_hpp
#define Block_hpp

#include <stdio.h>
#include <string>

#include <SFML/Graphics.hpp>
#include "ResourcePath.h"

class Block{
    public:
         /* INIT
         * sets all values passed, creates the "image" of the block
         * eventually the goal will be to add unique features to certain blocks, perhaps subclassing this
         */
         Block(); //default constructor
         Block(sf::Texture* texture, float x, float y, int wid, bool passable); //custom constructor

         /* ACSESSOR METHODS
         * these are used to find the values of a particular block
         */
         sf::Sprite sprite() { return *_sprite; }
         float xPos() { return _xPos; }
         float yPos() { return _yPos; }
         sf::Vector2f xyPos() { return _xyPosition; }
         bool passable() { return _passable; }
         // END ACCESSOR METHODS
        
    private:
         /*
         Block block(sf::Color::Red, 0,0,25, false);
         sf::Texture texture;
         texture.loadFromFile(resourcePath()+"assets/image.jpg");
         sf::Sprite sprite(texture);
         */

         sf::Texture* _texture; // the texture of the sprite

         sf::Sprite* _sprite; // the sprite itself

         bool _passable; // true if a character is able to walk on it
         float _xPos; // the x position of the block within the grid
         float _yPos; // the y pos of the block within the grid
         sf::Vector2f _xyPosition;
         float _width; // the pixle width and height of the block

};
#endif /* Block_hpp */

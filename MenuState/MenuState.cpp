#include "MenuState.h"
#include <iostream>

MenuState::MenuState(){
    if(!this->font.loadFromFile("arial.ttf")){
        std::cout<<"Nie udalo sie zaladowac czcionki"<<std::endl;
    }
    this->title.setFont(this->font);
    this->title.setString("Ogien i Woda");
    this->title.setCharacterSize(50);
    this->title.setPosition(200,50);
    this->title.setFillColor(sf::Color::Red);

    this->play_option.setFont(this->font);
    this->play_option.setString("Play");
    this->play_option.setCharacterSize(30);
    this->play_option.setPosition(300,200);
    this->play_option.setFillColor(sf::Color::White);

    this->exit_option.setFont(this->font);
    this->exit_option.setString("Exit");
    this->exit_option.setCharacterSize(30);
    this->exit_option.setPosition(300,300);
    this->exit_option.setFillColor(sf::Color::White);

    this->selected_option=0;
}
void MenuState::handleInput(sf::RenderWindow & window){
    sf::Event event;
    while(window.pollEvent(event)){
        if(event.type==sf::Event::Closed){
            window.close();
        }
        if(event.type==sf::Event::KeyPressed){
            if(event.key.code==sf::Keyboard::Down){
                this->selected_option++;
                if(this->selected_option>1){
                    this->selected_option=0;
                }
            }
            if(event.key.code==sf::Keyboard::Up){
                this->selected_option--;
                if(this->selected_option<0){
                    this->selected_option=1;
                }
            }
            if(event.key.code==sf::Keyboard::Return){
                if(this->selected_option==0){
                    //Tutaj bedzie kod do przejscia do stanu gry
                }
                if(this->selected_option==1){
                    window.close();
                }
            }
        }
    }
}

void MenuState::update(sf::Time deltaTime){
    if(this->selected_option==0){
        this->play_option.setFillColor(sf::Color::Red);
        this->exit_option.setFillColor(sf::Color::White);
    }
    if(this->selected_option==1){
        this->play_option.setFillColor(sf::Color::White);
        this->exit_option.setFillColor(sf::Color::Red);
    }
}

void MenuState::render(sf::RenderWindow & window){
    window.draw(this->title);
    window.draw(this->play_option);
    window.draw(this->exit_option);
    window.display();

}
#include "engine.h"

Engine::Engine(){
    this->initWindow();
}

void Engine::initWindow(){
    this->window.create(sf::VideoMode(800,600),"Ogień i woda");
}


void Engine::pollEvents(){
    while(this->window.pollEvent(this->event)){
        //Obsluga zamkniecia okna
        if(this->event.type==sf::Event::Closed){
            this->window.close();
        }

    }
}

void Engine::update(){
    this->pollEvents();
}

void Engine::render(){
    this->window.clear();
    //Tu dodac renderowanie wszystkich obiektow z vectora
    this->window.display();
}

void Engine::run(){
    while(this->window.isOpen()){
        this->update();
        this->render();
    }
}
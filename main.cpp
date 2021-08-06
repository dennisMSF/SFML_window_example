#include<SFML/Graphics.hpp>
using namespace std;
class ventana{
public:
     sf::RenderWindow window(sf::VideoMode(800,600), "Mi primera ventana");
    while(window.isOpen()){
        sf::Event ventana;
        while(window.pollEvent(ventana)){
            if(ventana.type==sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.display();
    }
};
int main(){

}

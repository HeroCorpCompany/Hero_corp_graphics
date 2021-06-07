#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>

class Engine
{
public :
	
	Engine();
	void run();

private :
	
	void processEvents();
	void update();
	void render();
	
private :
	sf::RenderWindow m_window;
	static const sf::Time m_timePerFrame;
};

#endif //ENGINE_H

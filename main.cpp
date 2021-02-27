//#include <iostream>
#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment (lib , "winmm.lib")

using namespace sf;
int main()
{
	
	
	RenderWindow window(VideoMode(0, 0), "clicker", Style::None);
	sf::WindowHandle handle = window.getSystemHandle();
	ShowWindow(handle, SW_HIDE);
	while(window.isOpen())
	{

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		if (Mouse::isButtonPressed(Mouse::Left))
		{
			PlaySound(L"BRYH", NULL, SND_RESOURCE );
			//sound.play();
		}
		window.clear();
		window.display();
		
	}
	}
	
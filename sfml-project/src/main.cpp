#include <fmt/base.h>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/ContextSettings.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowEnums.hpp>

#include "example.hpp"

int main() {
  fmt::println("Hello World!");
  exampleFunction();

  auto window = sf::RenderWindow(sf::VideoMode({800, 600}), "Test",
                                 sf::Style::Default, sf::State::Windowed,
                                 sf::ContextSettings{.antiAliasingLevel = 8});

  window.setFramerateLimit(60);

  while (window.isOpen()) {
    while (const auto &event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    window.clear();
    window.display();
  }
}

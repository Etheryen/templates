#include <fmt/base.h>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/ContextSettings.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowEnums.hpp>

#include "example.hpp"

int main() {
  using namespace sf;

  fmt::println("Hello World!");
  exampleFunction();

  auto window =
      RenderWindow(VideoMode({800, 600}), "Test", Style::Default,
                   State::Windowed, ContextSettings{.antiAliasingLevel = 8});

  while (window.isOpen()) {
    while (auto const &event = window.pollEvent()) {
      if (event->is<Event::Closed>())
        window.close();
    }

    window.display();
  }
}

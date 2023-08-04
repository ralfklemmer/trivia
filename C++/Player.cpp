//
// Created by Ralf Klemmer on 04.08.23.
//

#include "Player.h"

#include <utility>

Player::Player(string name) {
    this->name = std::move(name);
}

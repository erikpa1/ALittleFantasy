#pragma once

#include <string>
#include <memory>
#include <vector>
#include <map>
#include <memory>
#include <iostream>

#include <SFML/System/String.hpp>
#include <SFML/Graphics.hpp>

typedef int64_t Int;

typedef std::wstring WString;
typedef std::string String;
typedef sf::String SString;


typedef sf::Vector2<float> Float2;
typedef sf::Vector2<Int> Int2;
typedef sf::Vector2<double> Double2;


template <typename PtrType>
using S = std::shared_ptr<PtrType>;



template <typename PtrType>
using U = std::unique_ptr<PtrType>;

template <typename KeyType, typename ValueType>
using Map = std::map<KeyType, ValueType>;

template <typename ValueType>
using IntMap = std::map<Int, ValueType>;

template <typename ValueType>
using StringMap = std::map<String, ValueType>;

#define INFO(x) std::cout << __FILE__ << "| " << __LINE__ << "| " << x << std::endl;
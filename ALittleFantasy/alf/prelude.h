#pragma once

#include <string>
#include <memory>
#include <vector>
#include <map>
#include <memory>

#include <SFML/System/String.hpp>

typedef int64_t Int;

typedef std::wstring WString;
typedef std::string String;
typedef sf::String SString;


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

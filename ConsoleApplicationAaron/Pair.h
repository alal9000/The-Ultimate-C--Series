#pragma once
#include <string>

using namespace std;

template<typename K, typename V>
class Pair
{
private:
	K key;
	V value;
public:
	Pair(K key, V value);
	K getKey();
	V getValue();
};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value) : key(key), value(value) {};

template<typename K, typename V>
K Pair<K, V>::getKey() {
	return key;
}

template<typename K, typename V>
V Pair<K, V>::getValue() {
	return value;
}
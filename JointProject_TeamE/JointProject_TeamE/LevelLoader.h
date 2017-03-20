#ifndef LEVELLOADER_H
#define LEVELLOADER_H

#include "yaml-cpp\yaml.h"
#include <SFML\Graphics.hpp>
#include <iostream>

struct TextureData
{
	std::string m_filename;
	std::string m_textureName;
};

struct ObstacleData {
	std::string m_textureString;
	sf::Vector2f m_position;
	sf::IntRect m_textureRect;
	float m_rotation;
	int m_type;
	std::string m_name;
};

struct TileData {
	std::string m_textureString;
	int m_xIndex;
	int m_yIndex;
	int m_rotation;
};

struct PlayerData {
	sf::Vector2f position;
};

struct Waypoint
{
	sf::Vector2f m_position;
	float m_speed;
};

struct StartPositionData
{
	sf::Vector2f m_position;
};

struct LevelData {
	PlayerData m_playerData;
	std::vector<TileData> m_tileDataVector;
	std::vector<TextureData> m_textureDataVector;
	std::vector<ObstacleData> m_obstacleDataVector;
	std::vector<Waypoint> m_waypoints;
	std::vector<StartPositionData> m_startPositionData;
};

class LevelLoader {
public:
	LevelLoader();
	static void load(LevelData & levelIn);
};

#endif

#include <iostream>
#include <string>


class GameEngine {
private:
    static GameEngine* instance; // Static pointer to hold the single instance

    GameEngine() {
	}//private constructor to prevent creating instances of the class
public:
	//method to get the instance and create it if it doesn't exist
	static GameEngine* getInstance() {
		// creating the instance only when it's needed
        if (!instance) {
			std::cout << "Creating the single instance of GameEngine" << std::endl;
            instance = new GameEngine();
        } else {
		}
		return instance;
	}
	//method to simulate game events
	void triggerEvent(const std::string& event) {
		std::cout << "Event Triggered: " << event << std::endl;
	}
	//method to simulate player actions
	void playerAction(const std::string& player, const std::string& action) {
		std::cout << player << " " << action << std::endl;
	}
};
	//Initialize instance variable to null so that when getInstance is called it will know a intance has not been created
	GameEngine* GameEngine::instance = nullptr;
        
int main() {
    GameEngine* engine = GameEngine::getInstance();

    // Trigger game events
    engine->triggerEvent("Enemy appeared!");
    engine->triggerEvent("Treasure found!");

    // Simulate player actions
    engine->playerAction("Player1", "attacks the enemy.");
    engine->playerAction("Player2", "collects the treasure.");
    
    // Another game event and player action
    engine->triggerEvent("Player leveled up!");
    engine->playerAction("Player1", "casts a spell.");
    //engine::triggerEvent();

	

    return 0;
}

/**
 * Expected Output:
 * 
 * [GameEngine] Event Triggered: Enemy appeared!
 * [GameEngine] Event Triggered: Treasure found!
 * [GameEngine] Player1 attacks the enemy.
 * [GameEngine] Player2 collects the treasure.
 * [GameEngine] Event Triggered: Player leveled up!
 * [GameEngine] Player1 casts a spell.
 */

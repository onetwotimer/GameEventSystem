# GameEventSystem
I implemented the Singleton Pattern for the game event system. In this implementation, the GameEngine class is designed to have only a single instance throughout the program. This ensures that all game events are managed centrally through one game engine instance, maintaining consistency across the game.
Benefits:
- A singleton pattern ensures that there is only one instance of GameEngine, making it easier to manage and control game events from a single point. So that this handles all the game events instead of it a events being handles by new engins in differents parts of the program.
- Also, with this pattern the GameEngine can be accessed globally from anywhere in the program.
Consequences:
- Being a global instance means that if editing it can cause problems throughout the code that use that instance.
- From my knowledge there would be no way to reset the global instace once it has been created.

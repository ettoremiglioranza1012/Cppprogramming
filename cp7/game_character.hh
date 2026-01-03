class GameCharacter {
public:
    GameCharacter() { 
        ++live_count; // Increment the shared counter when a character is born
    }
    
    ~GameCharacter() { 
        --live_count; // Decrement the shared counter when a character is destroyed
    }

    static int get_live_count() { return live_count; }

private:
    static int live_count;
};


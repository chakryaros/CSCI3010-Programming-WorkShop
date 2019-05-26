#ifndef _CREATURE_H_
#define _CREATURE_H_

// 1) Create a virtual Creature * Clone() method.
// When a creature is cloned, the clone starts at age 0
// Diseases that are hereditary should be inherited.

// 2) Create 2 subclasses of Creature. For each subclass,
// make their cloning behavior slightly different.
// For instance, some Cloned creatures might also inherit non-hereditary diseases.
// It's up to you!

// 3) In your main.cpp, instantiate your subclasses. (the rest of the work for this
// part of the exercise will happen in main.)

class Creature {
public:
    Creature(int age): age_(age)
    {
        std::vector<Disease *> tmp;
        this->diseases_ = tmp;
    }

    int get_age() const { return age_; };
    
    void age(int years) { age_ += years; };

    std::vector<Disease *> get_diseases() const {return diseases_; }; 

    void Spread(Creature * c2);
    void Infect(Disease * d) { diseases_.push_back(d); };
    
    virtual Creature * Clone()
    {
        Creature * newCreature = new Creature(0);
        for ( Disease *d : diseases_ ){
            
            if (d->get_is_hereditary()){
                newCreature->Infect(d);
            }
        }
       return newCreature; 
    };

private:
    int age_;
    std::vector<Disease *> diseases_;
};

class Cow:public Creature {
public:
    
    Cow(int age): Creature(age){}    

    Cow * Clone(){
        Cow * newCow = new Cow(0);
        for ( Disease *d : diseases_ ){
            
                newCow->Infect(d);
            
        }
       return newCow; 
    }
private:
        int age_;
        std::vector<Disease *> diseases_;
};

class Bird:public Creature {
public:
    
    Bird(int age): Creature(age){}   

    Bird * Clone(){
        Bird * newBird = new Bird(0);
        for ( Disease *d : diseases_ ){
            
            if (d->get_bacteria_based()){
                newBird->Infect(d);
            }
        }
       return newBird; 
    }
private:
        int age_;
        std::vector<Disease *> diseases_;
};



#endif // _CREATURE_H_

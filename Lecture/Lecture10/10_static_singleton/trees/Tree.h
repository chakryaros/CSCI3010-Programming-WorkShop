#ifndef _TREE_H_
#define _TREE_H_

class Tree {
    public:
        virtual void Seed() { number_trees_ += 1; };

        int get_number_trees() { return number_trees_; }
    private:
        static int number_trees_;
};

class Shrubbery: public Tree{
    public:
       void Seed(){ Tree::Seed(); Tree::Seed(); };
}; 

#endif // _TREE_H_

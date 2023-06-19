#ifndef __COMPONENT_HPP__
#define __COMPONENT_HPP__

class Component
{
public:
    virtual int get_cost() { return 0; }
    virtual int get_weight() { return 0; }
    int get_id() const { return id; }
    virtual void add(Component *new_content){};

protected:
    int id;
};

#endif

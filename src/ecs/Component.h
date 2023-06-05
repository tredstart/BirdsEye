#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
class IComponent {
public:
  virtual std::string getType() const = 0;
  virtual ~IComponent(){};
};

#endif

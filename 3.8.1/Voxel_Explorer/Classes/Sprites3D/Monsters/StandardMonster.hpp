//
//  StandardMonster.hpp
//  Voxel_Explorer
//
//  Created by wang haibo on 15/10/22.
//
//

#ifndef StandardMonster_hpp
#define StandardMonster_hpp

#include "BaseMonster.hpp"
class StandardMonster : public BaseMonster
{
    StandardMonster();
    ~StandardMonster();
public:
    static StandardMonster* create(BaseMonster::MonsterType type);
private:
    static std::string getModelResByType(MonsterType type);
};

#endif /* StandardMonster_hpp */
#ifndef GAME_CMD_LSLEVELS_H
#define GAME_CMD_LSLEVELS_H

///////////////////////////////////////////////////////////////////////////////

class LevList : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    LevList();
    ~LevList();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_LSLEVELS_H
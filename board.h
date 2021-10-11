#ifndef BOARD_H
#define BOARD_H

enum class BoxContent
{
    AIRCRAFT,
    CRUISE,
    DESTROYER,
    SUBMARINE,
    SEA,
    NOTATTACKED,
    MISSED,
            
};

struct Box
{
    Box()=default;
    bool hit{false};
    BoxContent content{BoxContent::SEA};
    

    char displayBoxContent()
    {
        switch (content) {
            case BoxContent::AIRCRAFT :
                return 'A';
            case BoxContent::CRUISE :
                return 'C';
            case BoxContent::DESTROYER :
                return 'D';
            case BoxContent::SUBMARINE :
                return 'S';
            case BoxContent::NOTATTACKED:
                return '~';
            case BoxContent::MISSED:
                return 'X';
        default:
            return '~';
        }
    }
};

#endif // BOARD_H

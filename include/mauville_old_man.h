
#ifndef GUARD_MAUVILLE_OLD_MAN_H
#define GUARD_MAUVILLE_OLD_MAN_H

enum MauvilleOldManType
{
    MAUVILLE_MAN_BARD,
    MAUVILLE_MAN_HIPSTER,
    MAUVILLE_MAN_TRADER,
    MAUVILLE_MAN_STORYTELLER,
    MAUVILLE_MAN_GIDDY
};

void SetMauvilleOldMan(void);
u8 sub_81201C8(void);
extern struct BardSong gUnknown_03006130;

#endif // GUARD_MAUVILLE_OLD_MAN_H

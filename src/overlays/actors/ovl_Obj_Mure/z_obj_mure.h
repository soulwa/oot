#ifndef _Z_OBJ_MURE_H_
#define _Z_OBJ_MURE_H_

#include "ultra64.h"
#include "global.h"

struct ObjMure;

typedef void (*ObjMureActionFunc)(struct ObjMure*, GlobalContext*);

typedef struct ObjMure {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ ObjMureActionFunc actionFunc; // function
    /* 0x0150 */ s16 chNum;
    /* 0x0152 */ s16 ptn;
    /* 0x0154 */ s16 svNum;
    /* 0x0156 */ s16 type;
    /* 0x0158 */ Actor* unk_158[15];
    /* 0x0194 */ u8 unk_194[15];
    /* 0x01A3 */ char unk_1A3; // unused padding?
    /* 0x01A4 */ s16 unk_1A4;
    /* 0x01A6 */ char unk_1A6[0x6];
} ObjMure; // size = 0x01AC

extern const ActorInit Obj_Mure_InitVars;

#endif

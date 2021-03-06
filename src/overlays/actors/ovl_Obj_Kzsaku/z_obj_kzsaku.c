#include "z_obj_kzsaku.h"

#define FLAGS 0x00000030

#define THIS ((ObjKzsaku*)thisx)

void ObjKzsaku_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjKzsaku_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjKzsaku_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjKzsaku_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Kzsaku_InitVars = {
    ACTOR_OBJ_KZSAKU,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_KZSAKU,
    sizeof(ObjKzsaku),
    (ActorFunc)ObjKzsaku_Init,
    (ActorFunc)ObjKzsaku_Destroy,
    (ActorFunc)ObjKzsaku_Update,
    (ActorFunc)ObjKzsaku_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/ObjKzsaku_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/ObjKzsaku_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/func_80C08B60.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/func_80C08B7C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/func_80C08BBC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/func_80C08BD0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/func_80C08C84.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/func_80C08CB0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/ObjKzsaku_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Kzsaku_0x80C08A80/ObjKzsaku_Draw.asm")

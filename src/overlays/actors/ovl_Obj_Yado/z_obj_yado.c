#include "z_obj_yado.h"

#define FLAGS 0x00000030

#define THIS ((ObjYado*)thisx)

void ObjYado_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjYado_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjYado_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjYado_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Yado_InitVars = {
    ACTOR_OBJ_YADO,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_YADO_OBJ,
    sizeof(ObjYado),
    (ActorFunc)ObjYado_Init,
    (ActorFunc)ObjYado_Destroy,
    (ActorFunc)ObjYado_Update,
    (ActorFunc)ObjYado_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Yado_0x80C161E0/ObjYado_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Yado_0x80C161E0/ObjYado_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Yado_0x80C161E0/ObjYado_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Yado_0x80C161E0/ObjYado_Draw.asm")

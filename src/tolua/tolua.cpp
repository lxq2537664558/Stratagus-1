/*
** Lua binding: stratagus
** Generated automatically by tolua++-1.0.7 on Sat Oct 29 22:44:33 2005.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_stratagus_open (lua_State* tolua_S);

#include "stratagus.h"
#include "ui.h"
#include "minimap.h"
#include "player.h"
#include "unittype.h"
#include "unit.h"
#include "video.h"
#include "font.h"
#include "widgets.h"
#ifdef _MSC_VER
#pragma warning(disable:4800)
#endif
using namespace gcn;
void StartMap(const char *str);

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_TextField (lua_State* tolua_S)
{
 TextField* self = (TextField*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_LuaActionListener (lua_State* tolua_S)
{
 LuaActionListener* self = (LuaActionListener*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_MenuScreen (lua_State* tolua_S)
{
 MenuScreen* self = (MenuScreen*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CColor (lua_State* tolua_S)
{
 CColor* self = (CColor*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CheckBox (lua_State* tolua_S)
{
 CheckBox* self = (CheckBox*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_ImageButton (lua_State* tolua_S)
{
 ImageButton* self = (ImageButton*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_CPlayer (lua_State* tolua_S)
{
 CPlayer* self = (CPlayer*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_ListBoxWidget (lua_State* tolua_S)
{
 ListBoxWidget* self = (ListBoxWidget*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_DropDownWidget (lua_State* tolua_S)
{
 DropDownWidget* self = (DropDownWidget*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_RadioButton (lua_State* tolua_S)
{
 RadioButton* self = (RadioButton*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_Windows (lua_State* tolua_S)
{
 Windows* self = (Windows*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_Label (lua_State* tolua_S)
{
 Label* self = (Label*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_ImageWidget (lua_State* tolua_S)
{
 ImageWidget* self = (ImageWidget*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}

static int tolua_collect_Slider (lua_State* tolua_S)
{
 Slider* self = (Slider*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CMinimap");
 tolua_usertype(tolua_S,"Label");
 tolua_usertype(tolua_S,"LuaActionListener");
 tolua_usertype(tolua_S,"DropDownWidget");
 tolua_usertype(tolua_S,"CUnitType");
 tolua_usertype(tolua_S,"CFontColor");
 tolua_usertype(tolua_S,"Container");
 tolua_usertype(tolua_S,"CUpgrade");
 tolua_usertype(tolua_S,"CUserInterface");
 tolua_usertype(tolua_S,"CFont");
 tolua_usertype(tolua_S,"CInfoPanel");
 tolua_usertype(tolua_S,"CIcon");
 tolua_usertype(tolua_S,"ImageButton");
 tolua_usertype(tolua_S,"Windows");
 tolua_usertype(tolua_S,"TextField");
 tolua_usertype(tolua_S,"CVideo");
 tolua_usertype(tolua_S,"MenuScreen");
 tolua_usertype(tolua_S,"CGraphic");
 tolua_usertype(tolua_S,"CheckBox");
 tolua_usertype(tolua_S,"ImageWidget");
 tolua_usertype(tolua_S,"CPlayer");
 tolua_usertype(tolua_S,"CUnit");
 tolua_usertype(tolua_S,"ListBoxWidget");
 tolua_usertype(tolua_S,"RadioButton");
 tolua_usertype(tolua_S,"CColor");
 tolua_usertype(tolua_S,"CButtonPanel");
 tolua_usertype(tolua_S,"Widget");
 tolua_usertype(tolua_S,"Slider");
}

/* get function: X of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_get_CMinimap_X
static int tolua_get_CMinimap_X(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->X);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_set_CMinimap_X
static int tolua_set_CMinimap_X(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->X = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_get_CMinimap_Y
static int tolua_get_CMinimap_Y(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_set_CMinimap_Y
static int tolua_set_CMinimap_Y(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: W of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_get_CMinimap_W
static int tolua_get_CMinimap_W(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'W'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->W);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: W of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_set_CMinimap_W
static int tolua_set_CMinimap_W(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'W'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->W = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: H of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_get_CMinimap_H
static int tolua_get_CMinimap_H(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'H'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->H);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: H of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_set_CMinimap_H
static int tolua_set_CMinimap_H(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'H'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->H = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: WithTerrain of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_get_CMinimap_WithTerrain
static int tolua_get_CMinimap_WithTerrain(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WithTerrain'",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->WithTerrain);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: WithTerrain of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_set_CMinimap_WithTerrain
static int tolua_set_CMinimap_WithTerrain(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WithTerrain'",NULL);
 if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->WithTerrain = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ShowSelected of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_get_CMinimap_ShowSelected
static int tolua_get_CMinimap_ShowSelected(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ShowSelected'",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->ShowSelected);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ShowSelected of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_set_CMinimap_ShowSelected
static int tolua_set_CMinimap_ShowSelected(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ShowSelected'",NULL);
 if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ShowSelected = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Transparent of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_get_CMinimap_Transparent
static int tolua_get_CMinimap_Transparent(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Transparent'",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->Transparent);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Transparent of class  CMinimap */
#ifndef TOLUA_DISABLE_tolua_set_CMinimap_Transparent
static int tolua_set_CMinimap_Transparent(lua_State* tolua_S)
{
  CMinimap* self = (CMinimap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Transparent'",NULL);
 if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Transparent = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: X of class  CButtonPanel */
#ifndef TOLUA_DISABLE_tolua_get_CButtonPanel_X
static int tolua_get_CButtonPanel_X(lua_State* tolua_S)
{
  CButtonPanel* self = (CButtonPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->X);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  CButtonPanel */
#ifndef TOLUA_DISABLE_tolua_set_CButtonPanel_X
static int tolua_set_CButtonPanel_X(lua_State* tolua_S)
{
  CButtonPanel* self = (CButtonPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->X = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  CButtonPanel */
#ifndef TOLUA_DISABLE_tolua_get_CButtonPanel_Y
static int tolua_get_CButtonPanel_Y(lua_State* tolua_S)
{
  CButtonPanel* self = (CButtonPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  CButtonPanel */
#ifndef TOLUA_DISABLE_tolua_set_CButtonPanel_Y
static int tolua_set_CButtonPanel_Y(lua_State* tolua_S)
{
  CButtonPanel* self = (CButtonPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ShowCommandKey of class  CButtonPanel */
#ifndef TOLUA_DISABLE_tolua_get_CButtonPanel_ShowCommandKey
static int tolua_get_CButtonPanel_ShowCommandKey(lua_State* tolua_S)
{
  CButtonPanel* self = (CButtonPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ShowCommandKey'",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->ShowCommandKey);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ShowCommandKey of class  CButtonPanel */
#ifndef TOLUA_DISABLE_tolua_set_CButtonPanel_ShowCommandKey
static int tolua_set_CButtonPanel_ShowCommandKey(lua_State* tolua_S)
{
  CButtonPanel* self = (CButtonPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ShowCommandKey'",NULL);
 if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ShowCommandKey = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: X of class  CInfoPanel */
#ifndef TOLUA_DISABLE_tolua_get_CInfoPanel_X
static int tolua_get_CInfoPanel_X(lua_State* tolua_S)
{
  CInfoPanel* self = (CInfoPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->X);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  CInfoPanel */
#ifndef TOLUA_DISABLE_tolua_set_CInfoPanel_X
static int tolua_set_CInfoPanel_X(lua_State* tolua_S)
{
  CInfoPanel* self = (CInfoPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->X = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  CInfoPanel */
#ifndef TOLUA_DISABLE_tolua_get_CInfoPanel_Y
static int tolua_get_CInfoPanel_Y(lua_State* tolua_S)
{
  CInfoPanel* self = (CInfoPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  CInfoPanel */
#ifndef TOLUA_DISABLE_tolua_set_CInfoPanel_Y
static int tolua_set_CInfoPanel_Y(lua_State* tolua_S)
{
  CInfoPanel* self = (CInfoPanel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: InfoPanel of class  CUserInterface */
#ifndef TOLUA_DISABLE_tolua_get_CUserInterface_InfoPanel
static int tolua_get_CUserInterface_InfoPanel(lua_State* tolua_S)
{
  CUserInterface* self = (CUserInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'InfoPanel'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)&self->InfoPanel,"CInfoPanel");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: InfoPanel of class  CUserInterface */
#ifndef TOLUA_DISABLE_tolua_set_CUserInterface_InfoPanel
static int tolua_set_CUserInterface_InfoPanel(lua_State* tolua_S)
{
  CUserInterface* self = (CUserInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'InfoPanel'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CInfoPanel",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->InfoPanel = *((CInfoPanel*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ButtonPanel of class  CUserInterface */
#ifndef TOLUA_DISABLE_tolua_get_CUserInterface_ButtonPanel
static int tolua_get_CUserInterface_ButtonPanel(lua_State* tolua_S)
{
  CUserInterface* self = (CUserInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ButtonPanel'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)&self->ButtonPanel,"CButtonPanel");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ButtonPanel of class  CUserInterface */
#ifndef TOLUA_DISABLE_tolua_set_CUserInterface_ButtonPanel
static int tolua_set_CUserInterface_ButtonPanel(lua_State* tolua_S)
{
  CUserInterface* self = (CUserInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ButtonPanel'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CButtonPanel",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ButtonPanel = *((CButtonPanel*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Minimap of class  CUserInterface */
#ifndef TOLUA_DISABLE_tolua_get_CUserInterface_Minimap
static int tolua_get_CUserInterface_Minimap(lua_State* tolua_S)
{
  CUserInterface* self = (CUserInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Minimap'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)&self->Minimap,"CMinimap");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Minimap of class  CUserInterface */
#ifndef TOLUA_DISABLE_tolua_set_CUserInterface_Minimap
static int tolua_set_CUserInterface_Minimap(lua_State* tolua_S)
{
  CUserInterface* self = (CUserInterface*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Minimap'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CMinimap",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Minimap = *((CMinimap*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UI */
#ifndef TOLUA_DISABLE_tolua_get_UI
static int tolua_get_UI(lua_State* tolua_S)
{
 tolua_pushusertype(tolua_S,(void*)&UI,"CUserInterface");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: UI */
#ifndef TOLUA_DISABLE_tolua_set_UI
static int tolua_set_UI(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!tolua_isusertype(tolua_S,2,"CUserInterface",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  UI = *((CUserInterface*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  CIcon */
#ifndef TOLUA_DISABLE_tolua_stratagus_CIcon_New00
static int tolua_stratagus_CIcon_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CIcon",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
 {
  CIcon* tolua_ret = (CIcon*)  CIcon::New(ident);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CIcon");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Get of class  CIcon */
#ifndef TOLUA_DISABLE_tolua_stratagus_CIcon_Get00
static int tolua_stratagus_CIcon_Get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CIcon",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
 {
  CIcon* tolua_ret = (CIcon*)  CIcon::Get(ident);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CIcon");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Ident of class  CIcon */
#ifndef TOLUA_DISABLE_tolua_get_CIcon_Ident
static int tolua_get_CIcon_Ident(lua_State* tolua_S)
{
  CIcon* self = (CIcon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Ident'",NULL);
#endif
 tolua_pushstring(tolua_S,(const char*)self->GetIdent());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: G of class  CIcon */
#ifndef TOLUA_DISABLE_tolua_get_CIcon_G_ptr
static int tolua_get_CIcon_G_ptr(lua_State* tolua_S)
{
  CIcon* self = (CIcon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'G'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->G,"CGraphic");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: G of class  CIcon */
#ifndef TOLUA_DISABLE_tolua_set_CIcon_G_ptr
static int tolua_set_CIcon_G_ptr(lua_State* tolua_S)
{
  CIcon* self = (CIcon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'G'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CGraphic",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->G = ((CGraphic*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Frame of class  CIcon */
#ifndef TOLUA_DISABLE_tolua_get_CIcon_Frame
static int tolua_get_CIcon_Frame(lua_State* tolua_S)
{
  CIcon* self = (CIcon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Frame'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Frame);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Frame of class  CIcon */
#ifndef TOLUA_DISABLE_tolua_set_CIcon_Frame
static int tolua_set_CIcon_Frame(lua_State* tolua_S)
{
  CIcon* self = (CIcon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Frame'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Frame = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LuaActionListener */
#ifndef TOLUA_DISABLE_tolua_stratagus_LuaActionListener_new00
static int tolua_stratagus_LuaActionListener_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"LuaActionListener",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  lua_State* lua =  tolua_S;
  lua_Object luaref = ((lua_Object)  tolua_tovalue(tolua_S,2,0));
 {
  LuaActionListener* tolua_ret = (LuaActionListener*)  new LuaActionListener(lua,luaref);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"LuaActionListener");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  LuaActionListener */
#ifndef TOLUA_DISABLE_tolua_stratagus_LuaActionListener_new00_local
static int tolua_stratagus_LuaActionListener_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"LuaActionListener",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  lua_State* lua =  tolua_S;
  lua_Object luaref = ((lua_Object)  tolua_tovalue(tolua_S,2,0));
 {
  LuaActionListener* tolua_ret = (LuaActionListener*)  new LuaActionListener(lua,luaref);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"LuaActionListener");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addActionListener of class  Widget */
#ifndef TOLUA_DISABLE_tolua_stratagus_Widget_addActionListener00
static int tolua_stratagus_Widget_addActionListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"LuaActionListener",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  LuaActionListener* actionListener = ((LuaActionListener*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addActionListener'",NULL);
#endif
 {
  self->addActionListener(actionListener);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addActionListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFont of class  Widget */
#ifndef TOLUA_DISABLE_tolua_stratagus_Widget_setFont00
static int tolua_stratagus_Widget_setFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Widget",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CFont",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Widget* self = (Widget*)  tolua_tousertype(tolua_S,1,0);
  CFont* font = ((CFont*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFont'",NULL);
#endif
 {
  self->setFont(font);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGlobalFont of class  Widget */
#ifndef TOLUA_DISABLE_tolua_stratagus_Widget_setGlobalFont00
static int tolua_stratagus_Widget_setGlobalFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Widget",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CFont",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CFont* font = ((CFont*)  tolua_tousertype(tolua_S,2,0));
 {
  Widget::setGlobalFont(font);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGlobalFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ImageButton */
#ifndef TOLUA_DISABLE_tolua_stratagus_ImageButton_new00
static int tolua_stratagus_ImageButton_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"ImageButton",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CGraphic",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"CGraphic",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  char* caption = ((char*)  tolua_tostring(tolua_S,2,0));
  CGraphic* normalImage = ((CGraphic*)  tolua_tousertype(tolua_S,3,0));
  CGraphic* pressedImage = ((CGraphic*)  tolua_tousertype(tolua_S,4,0));
 {
  ImageButton* tolua_ret = (ImageButton*)  new ImageButton(caption,normalImage,pressedImage);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"ImageButton");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ImageButton */
#ifndef TOLUA_DISABLE_tolua_stratagus_ImageButton_new00_local
static int tolua_stratagus_ImageButton_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"ImageButton",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CGraphic",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,4,"CGraphic",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  char* caption = ((char*)  tolua_tostring(tolua_S,2,0));
  CGraphic* normalImage = ((CGraphic*)  tolua_tousertype(tolua_S,3,0));
  CGraphic* pressedImage = ((CGraphic*)  tolua_tousertype(tolua_S,4,0));
 {
  ImageButton* tolua_ret = (ImageButton*)  new ImageButton(caption,normalImage,pressedImage);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"ImageButton");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ImageWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_ImageWidget_new00
static int tolua_stratagus_ImageWidget_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"ImageWidget",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CGraphic",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CGraphic* image = ((CGraphic*)  tolua_tousertype(tolua_S,2,0));
 {
  ImageWidget* tolua_ret = (ImageWidget*)  new ImageWidget(image);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"ImageWidget");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ImageWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_ImageWidget_new00_local
static int tolua_stratagus_ImageWidget_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"ImageWidget",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CGraphic",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CGraphic* image = ((CGraphic*)  tolua_tousertype(tolua_S,2,0));
 {
  ImageWidget* tolua_ret = (ImageWidget*)  new ImageWidget(image);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"ImageWidget");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Slider */
#ifndef TOLUA_DISABLE_tolua_stratagus_Slider_new00
static int tolua_stratagus_Slider_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Slider",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  double scaleStart = ((double)  tolua_tonumber(tolua_S,2,0));
  double scaleEnd = ((double)  tolua_tonumber(tolua_S,3,0));
 {
  Slider* tolua_ret = (Slider*)  new Slider(scaleStart,scaleEnd);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"Slider");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Slider */
#ifndef TOLUA_DISABLE_tolua_stratagus_Slider_new00_local
static int tolua_stratagus_Slider_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Slider",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  double scaleStart = ((double)  tolua_tonumber(tolua_S,2,0));
  double scaleEnd = ((double)  tolua_tonumber(tolua_S,3,0));
 {
  Slider* tolua_ret = (Slider*)  new Slider(scaleStart,scaleEnd);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Slider");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  Slider */
#ifndef TOLUA_DISABLE_tolua_stratagus_Slider_getValue00
static int tolua_stratagus_Slider_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'",NULL);
#endif
 {
  double tolua_ret = (double)  self->getValue();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWidth of class  Slider */
#ifndef TOLUA_DISABLE_tolua_stratagus_Slider_setWidth00
static int tolua_stratagus_Slider_setWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidth'",NULL);
#endif
 {
  self->setWidth(w);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHeight of class  Slider */
#ifndef TOLUA_DISABLE_tolua_stratagus_Slider_setHeight00
static int tolua_stratagus_Slider_setHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Slider",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Slider* self = (Slider*)  tolua_tousertype(tolua_S,1,0);
  int h = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHeight'",NULL);
#endif
 {
  self->setHeight(h);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_stratagus_CheckBox_new00
static int tolua_stratagus_CheckBox_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CheckBox",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  char* caption = ((char*)  tolua_tostring(tolua_S,2,0));
  bool marked = ((bool)  tolua_toboolean(tolua_S,3,false));
 {
  CheckBox* tolua_ret = (CheckBox*)  new CheckBox(caption,marked);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CheckBox");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_stratagus_CheckBox_new00_local
static int tolua_stratagus_CheckBox_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CheckBox",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  char* caption = ((char*)  tolua_tostring(tolua_S,2,0));
  bool marked = ((bool)  tolua_toboolean(tolua_S,3,false));
 {
  CheckBox* tolua_ret = (CheckBox*)  new CheckBox(caption,marked);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CheckBox");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMarked of class  CheckBox */
#ifndef TOLUA_DISABLE_tolua_stratagus_CheckBox_isMarked00
static int tolua_stratagus_CheckBox_isMarked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CheckBox",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CheckBox* self = (CheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMarked'",NULL);
#endif
 {
  bool tolua_ret = (bool)  self->isMarked();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMarked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Label */
#ifndef TOLUA_DISABLE_tolua_stratagus_Label_new00
static int tolua_stratagus_Label_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Label",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string caption = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
 {
  Label* tolua_ret = (Label*)  new Label(caption);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"Label");
 tolua_pushcppstring(tolua_S,(const char*)caption);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Label */
#ifndef TOLUA_DISABLE_tolua_stratagus_Label_new00_local
static int tolua_stratagus_Label_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Label",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string caption = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
 {
  Label* tolua_ret = (Label*)  new Label(caption);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Label");
 tolua_pushcppstring(tolua_S,(const char*)caption);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RadioButton */
#ifndef TOLUA_DISABLE_tolua_stratagus_RadioButton_new00
static int tolua_stratagus_RadioButton_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RadioButton",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string caption = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string group = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  bool marked = ((bool)  tolua_toboolean(tolua_S,4,false));
 {
  RadioButton* tolua_ret = (RadioButton*)  new RadioButton(caption,group,marked);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"RadioButton");
 tolua_pushcppstring(tolua_S,(const char*)caption);
 tolua_pushcppstring(tolua_S,(const char*)group);
 }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  RadioButton */
#ifndef TOLUA_DISABLE_tolua_stratagus_RadioButton_new00_local
static int tolua_stratagus_RadioButton_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RadioButton",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string caption = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string group = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  bool marked = ((bool)  tolua_toboolean(tolua_S,4,false));
 {
  RadioButton* tolua_ret = (RadioButton*)  new RadioButton(caption,group,marked);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"RadioButton");
 tolua_pushcppstring(tolua_S,(const char*)caption);
 tolua_pushcppstring(tolua_S,(const char*)group);
 }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TextField */
#ifndef TOLUA_DISABLE_tolua_stratagus_TextField_new00
static int tolua_stratagus_TextField_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"TextField",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
 {
  TextField* tolua_ret = (TextField*)  new TextField(text);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"TextField");
 tolua_pushcppstring(tolua_S,(const char*)text);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  TextField */
#ifndef TOLUA_DISABLE_tolua_stratagus_TextField_new00_local
static int tolua_stratagus_TextField_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"TextField",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
 {
  TextField* tolua_ret = (TextField*)  new TextField(text);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"TextField");
 tolua_pushcppstring(tolua_S,(const char*)text);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ListBoxWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_ListBoxWidget_new00
static int tolua_stratagus_ListBoxWidget_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"ListBoxWidget",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  ListBoxWidget* tolua_ret = (ListBoxWidget*)  new ListBoxWidget();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"ListBoxWidget");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ListBoxWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_ListBoxWidget_new00_local
static int tolua_stratagus_ListBoxWidget_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"ListBoxWidget",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  ListBoxWidget* tolua_ret = (ListBoxWidget*)  new ListBoxWidget();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"ListBoxWidget");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setList of class  ListBoxWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_ListBoxWidget_setList00
static int tolua_stratagus_ListBoxWidget_setList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ListBoxWidget",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ListBoxWidget* self = (ListBoxWidget*)  tolua_tousertype(tolua_S,1,0);
  lua_State* lua =  tolua_S;
  lua_Object lo = ((lua_Object)  tolua_tovalue(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setList'",NULL);
#endif
 {
  self->setList(lua,&lo);
 tolua_pushvalue(tolua_S,(int)lo);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  DropDownWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_DropDownWidget_new00
static int tolua_stratagus_DropDownWidget_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"DropDownWidget",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  DropDownWidget* tolua_ret = (DropDownWidget*)  new DropDownWidget();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"DropDownWidget");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  DropDownWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_DropDownWidget_new00_local
static int tolua_stratagus_DropDownWidget_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"DropDownWidget",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  DropDownWidget* tolua_ret = (DropDownWidget*)  new DropDownWidget();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"DropDownWidget");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setList of class  DropDownWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_DropDownWidget_setList00
static int tolua_stratagus_DropDownWidget_setList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"DropDownWidget",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  DropDownWidget* self = (DropDownWidget*)  tolua_tousertype(tolua_S,1,0);
  lua_State* lua =  tolua_S;
  lua_Object lo = ((lua_Object)  tolua_tovalue(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setList'",NULL);
#endif
 {
  self->setList(lua,&lo);
 tolua_pushvalue(tolua_S,(int)lo);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSelected of class  DropDownWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_DropDownWidget_getSelected00
static int tolua_stratagus_DropDownWidget_getSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"DropDownWidget",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  DropDownWidget* self = (DropDownWidget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelected'",NULL);
#endif
 {
  int tolua_ret = (int)  self->getSelected();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  DropDownWidget */
#ifndef TOLUA_DISABLE_tolua_stratagus_DropDownWidget_setSelected00
static int tolua_stratagus_DropDownWidget_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"DropDownWidget",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  DropDownWidget* self = (DropDownWidget*)  tolua_tousertype(tolua_S,1,0);
  int selection = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'",NULL);
#endif
 {
  self->setSelected(selection);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add of class  Container */
#ifndef TOLUA_DISABLE_tolua_stratagus_Container_add00
static int tolua_stratagus_Container_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Container",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Container* self = (Container*)  tolua_tousertype(tolua_S,1,0);
  Widget* widget = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add'",NULL);
#endif
 {
  self->add(widget,x,y);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  Container */
#ifndef TOLUA_DISABLE_tolua_stratagus_Container_clear00
static int tolua_stratagus_Container_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Container",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Container* self = (Container*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'",NULL);
#endif
 {
  self->clear();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Windows */
#ifndef TOLUA_DISABLE_tolua_stratagus_Windows_new00
static int tolua_stratagus_Windows_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Windows",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
 {
  Windows* tolua_ret = (Windows*)  new Windows(text,width,height);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"Windows");
 tolua_pushcppstring(tolua_S,(const char*)text);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Windows */
#ifndef TOLUA_DISABLE_tolua_stratagus_Windows_new00_local
static int tolua_stratagus_Windows_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Windows",0,&tolua_err) ||
 !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
 {
  Windows* tolua_ret = (Windows*)  new Windows(text,width,height);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"Windows");
 tolua_pushcppstring(tolua_S,(const char*)text);
 }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add of class  Windows */
#ifndef TOLUA_DISABLE_tolua_stratagus_Windows_add00
static int tolua_stratagus_Windows_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Windows",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"Widget",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Windows* self = (Windows*)  tolua_tousertype(tolua_S,1,0);
  Widget* widget = ((Widget*)  tolua_tousertype(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add'",NULL);
#endif
 {
  self->add(widget,x,y);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: top */
#ifndef TOLUA_DISABLE_tolua_get_top_ptr
static int tolua_get_top_ptr(lua_State* tolua_S)
{
 tolua_pushusertype(tolua_S,(void*)top,"Container");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: top */
#ifndef TOLUA_DISABLE_tolua_set_top_ptr
static int tolua_set_top_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!tolua_isusertype(tolua_S,2,"Container",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  top = ((Container*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  MenuScreen */
#ifndef TOLUA_DISABLE_tolua_stratagus_MenuScreen_new00
static int tolua_stratagus_MenuScreen_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"MenuScreen",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  MenuScreen* tolua_ret = (MenuScreen*)  new MenuScreen();
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"MenuScreen");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  MenuScreen */
#ifndef TOLUA_DISABLE_tolua_stratagus_MenuScreen_new00_local
static int tolua_stratagus_MenuScreen_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"MenuScreen",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
  MenuScreen* tolua_ret = (MenuScreen*)  new MenuScreen();
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"MenuScreen");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: run of class  MenuScreen */
#ifndef TOLUA_DISABLE_tolua_stratagus_MenuScreen_run00
static int tolua_stratagus_MenuScreen_run00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"MenuScreen",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  MenuScreen* self = (MenuScreen*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'run'",NULL);
#endif
 {
  self->run();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'run'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  MenuScreen */
#ifndef TOLUA_DISABLE_tolua_stratagus_MenuScreen_stop00
static int tolua_stratagus_MenuScreen_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"MenuScreen",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  MenuScreen* self = (MenuScreen*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'",NULL);
#endif
 {
  self->stop();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: StartMap */
#ifndef TOLUA_DISABLE_tolua_stratagus_StartMap00
static int tolua_stratagus_StartMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* str = ((const char*)  tolua_tostring(tolua_S,1,0));
 {
  StartMap(str);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StartMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Width of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_get_CVideo_Width
static int tolua_get_CVideo_Width(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Width of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_set_CVideo_Width
static int tolua_set_CVideo_Width(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Width = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Height of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_get_CVideo_Height
static int tolua_get_CVideo_Height(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Height of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_set_CVideo_Height
static int tolua_set_CVideo_Height(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Height = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Depth of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_get_CVideo_Depth
static int tolua_get_CVideo_Depth(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Depth'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Depth);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Depth of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_set_CVideo_Depth
static int tolua_set_CVideo_Depth(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Depth'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Depth = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: FullScreen of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_get_CVideo_FullScreen
static int tolua_get_CVideo_FullScreen(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'FullScreen'",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->FullScreen);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: FullScreen of class  CVideo */
#ifndef TOLUA_DISABLE_tolua_set_CVideo_FullScreen
static int tolua_set_CVideo_FullScreen(lua_State* tolua_S)
{
  CVideo* self = (CVideo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'FullScreen'",NULL);
 if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->FullScreen = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Video */
#ifndef TOLUA_DISABLE_tolua_get_Video
static int tolua_get_Video(lua_State* tolua_S)
{
 tolua_pushusertype(tolua_S,(void*)&Video,"CVideo");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Video */
#ifndef TOLUA_DISABLE_tolua_set_Video
static int tolua_set_Video(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!tolua_isusertype(tolua_S,2,"CVideo",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  Video = *((CVideo*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  CGraphic */
#ifndef TOLUA_DISABLE_tolua_stratagus_CGraphic_New00
static int tolua_stratagus_CGraphic_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CGraphic",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  int w = ((int)  tolua_tonumber(tolua_S,3,0));
  int h = ((int)  tolua_tonumber(tolua_S,4,0));
 {
  CGraphic* tolua_ret = (CGraphic*)  CGraphic::New(file,w,h);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CGraphic");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Free of class  CGraphic */
#ifndef TOLUA_DISABLE_tolua_stratagus_CGraphic_Free00
static int tolua_stratagus_CGraphic_Free00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CGraphic",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"CGraphic",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CGraphic* tolua_var_1 = ((CGraphic*)  tolua_tousertype(tolua_S,2,0));
 {
  CGraphic::Free(tolua_var_1);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Free'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Load of class  CGraphic */
#ifndef TOLUA_DISABLE_tolua_stratagus_CGraphic_Load00
static int tolua_stratagus_CGraphic_Load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CGraphic",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CGraphic* self = (CGraphic*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Load'",NULL);
#endif
 {
  self->Load();
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Resize of class  CGraphic */
#ifndef TOLUA_DISABLE_tolua_stratagus_CGraphic_Resize00
static int tolua_stratagus_CGraphic_Resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CGraphic",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CGraphic* self = (CGraphic*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Resize'",NULL);
#endif
 {
  self->Resize(w,h);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CColor */
#ifndef TOLUA_DISABLE_tolua_stratagus_CColor_new00
static int tolua_stratagus_CColor_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CColor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  unsigned char r = ((unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char g = ((unsigned char)  tolua_tonumber(tolua_S,3,0));
  unsigned char b = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
  unsigned char a = ((unsigned char)  tolua_tonumber(tolua_S,5,0));
 {
  CColor* tolua_ret = (CColor*)  new CColor(r,g,b,a);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CColor");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CColor */
#ifndef TOLUA_DISABLE_tolua_stratagus_CColor_new00_local
static int tolua_stratagus_CColor_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CColor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  unsigned char r = ((unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char g = ((unsigned char)  tolua_tonumber(tolua_S,3,0));
  unsigned char b = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
  unsigned char a = ((unsigned char)  tolua_tonumber(tolua_S,5,0));
 {
  CColor* tolua_ret = (CColor*)  new CColor(r,g,b,a);
 tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CColor");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: R of class  CColor */
#ifndef TOLUA_DISABLE_tolua_get_CColor_unsigned_R
static int tolua_get_CColor_unsigned_R(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'R'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->R);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: R of class  CColor */
#ifndef TOLUA_DISABLE_tolua_set_CColor_unsigned_R
static int tolua_set_CColor_unsigned_R(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'R'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->R = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: G of class  CColor */
#ifndef TOLUA_DISABLE_tolua_get_CColor_unsigned_G
static int tolua_get_CColor_unsigned_G(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'G'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->G);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: G of class  CColor */
#ifndef TOLUA_DISABLE_tolua_set_CColor_unsigned_G
static int tolua_set_CColor_unsigned_G(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'G'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->G = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: B of class  CColor */
#ifndef TOLUA_DISABLE_tolua_get_CColor_unsigned_B
static int tolua_get_CColor_unsigned_B(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'B'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->B);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: B of class  CColor */
#ifndef TOLUA_DISABLE_tolua_set_CColor_unsigned_B
static int tolua_set_CColor_unsigned_B(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'B'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->B = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: A of class  CColor */
#ifndef TOLUA_DISABLE_tolua_get_CColor_unsigned_A
static int tolua_get_CColor_unsigned_A(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'A'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->A);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: A of class  CColor */
#ifndef TOLUA_DISABLE_tolua_set_CColor_unsigned_A
static int tolua_set_CColor_unsigned_A(lua_State* tolua_S)
{
  CColor* self = (CColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'A'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->A = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  CFont */
#ifndef TOLUA_DISABLE_tolua_stratagus_CFont_New00
static int tolua_stratagus_CFont_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CFont",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isusertype(tolua_S,3,"CGraphic",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
  CGraphic* g = ((CGraphic*)  tolua_tousertype(tolua_S,3,0));
 {
  CFont* tolua_ret = (CFont*)  CFont::New(ident,g);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CFont");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Get of class  CFont */
#ifndef TOLUA_DISABLE_tolua_stratagus_CFont_Get00
static int tolua_stratagus_CFont_Get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CFont",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
 {
  CFont* tolua_ret = (CFont*)  CFont::Get(ident);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CFont");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Height of class  CFont */
#ifndef TOLUA_DISABLE_tolua_stratagus_CFont_Height00
static int tolua_stratagus_CFont_Height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CFont",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CFont* self = (CFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Height'",NULL);
#endif
 {
  int tolua_ret = (int)  self->Height();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Width of class  CFont */
#ifndef TOLUA_DISABLE_tolua_stratagus_CFont_Width00
static int tolua_stratagus_CFont_Width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"CFont",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  CFont* self = (CFont*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Width'",NULL);
#endif
 {
  int tolua_ret = (int)  self->Width(text);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  CFontColor */
#ifndef TOLUA_DISABLE_tolua_stratagus_CFontColor_New00
static int tolua_stratagus_CFontColor_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CFontColor",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
 {
  CFontColor* tolua_ret = (CFontColor*)  CFontColor::New(ident);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CFontColor");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Get of class  CFontColor */
#ifndef TOLUA_DISABLE_tolua_stratagus_CFontColor_Get00
static int tolua_stratagus_CFontColor_Get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CFontColor",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
 {
  CFontColor* tolua_ret = (CFontColor*)  CFontColor::Get(ident);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CFontColor");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Colors of class  CFontColor */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_CFontColor_Colors
static int tolua_get_stratagus_CFontColor_Colors(lua_State* tolua_S)
{
 int tolua_index;
  CFontColor* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CFontColor*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxFontColors)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)&self->Colors[tolua_index],"CColor");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Colors of class  CFontColor */
#ifndef TOLUA_DISABLE_tolua_set_stratagus_CFontColor_Colors
static int tolua_set_stratagus_CFontColor_Colors(lua_State* tolua_S)
{
 int tolua_index;
  CFontColor* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CFontColor*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxFontColors)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->Colors[tolua_index] = *((CColor*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: New of class  CUpgrade */
#ifndef TOLUA_DISABLE_tolua_stratagus_CUpgrade_New00
static int tolua_stratagus_CUpgrade_New00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CUpgrade",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
 {
  CUpgrade* tolua_ret = (CUpgrade*)  CUpgrade::New(ident);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CUpgrade");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'New'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Get of class  CUpgrade */
#ifndef TOLUA_DISABLE_tolua_stratagus_CUpgrade_Get00
static int tolua_stratagus_CUpgrade_Get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"CUpgrade",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* ident = ((const char*)  tolua_tostring(tolua_S,2,0));
 {
  CUpgrade* tolua_ret = (CUpgrade*)  CUpgrade::Get(ident);
 tolua_pushusertype(tolua_S,(void*)tolua_ret,"CUpgrade");
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Costs of class  CUpgrade */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_CUpgrade_Costs
static int tolua_get_stratagus_CUpgrade_Costs(lua_State* tolua_S)
{
 int tolua_index;
  CUpgrade* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CUpgrade*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Costs[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Costs of class  CUpgrade */
#ifndef TOLUA_DISABLE_tolua_set_stratagus_CUpgrade_Costs
static int tolua_set_stratagus_CUpgrade_Costs(lua_State* tolua_S)
{
 int tolua_index;
  CUpgrade* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CUpgrade*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->Costs[tolua_index] = ((int)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Icon of class  CUpgrade */
#ifndef TOLUA_DISABLE_tolua_get_CUpgrade_Icon_ptr
static int tolua_get_CUpgrade_Icon_ptr(lua_State* tolua_S)
{
  CUpgrade* self = (CUpgrade*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Icon'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->Icon,"CIcon");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Icon of class  CUpgrade */
#ifndef TOLUA_DISABLE_tolua_set_CUpgrade_Icon_ptr
static int tolua_set_CUpgrade_Icon_ptr(lua_State* tolua_S)
{
  CUpgrade* self = (CUpgrade*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Icon'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CIcon",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Icon = ((CIcon*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Name of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_Name
static int tolua_get_CPlayer_Name(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Name'",NULL);
#endif
 tolua_pushstring(tolua_S,(const char*)self->Name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Name of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_Name
static int tolua_set_CPlayer_Name(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Name'",NULL);
 if (!tolua_isstring(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Name = ((char*)  tolua_tostring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Resources of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_CPlayer_Resources
static int tolua_get_stratagus_CPlayer_Resources(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Resources[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Resources of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_stratagus_CPlayer_Resources
static int tolua_set_stratagus_CPlayer_Resources(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->Resources[tolua_index] = ((int)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Incomes of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_CPlayer_Incomes
static int tolua_get_stratagus_CPlayer_Incomes(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Incomes[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Incomes of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_stratagus_CPlayer_Incomes
static int tolua_set_stratagus_CPlayer_Incomes(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->Incomes[tolua_index] = ((int)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Revenue of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_CPlayer_Revenue
static int tolua_get_stratagus_CPlayer_Revenue(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Revenue[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Units of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_CPlayer_Units
static int tolua_get_stratagus_CPlayer_Units(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=UnitMax)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->Units[tolua_index],"CUnit");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Units of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_stratagus_CPlayer_Units
static int tolua_set_stratagus_CPlayer_Units(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=UnitMax)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->Units[tolua_index] = ((CUnit*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TotalNumUnits of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_TotalNumUnits
static int tolua_get_CPlayer_TotalNumUnits(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalNumUnits'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->TotalNumUnits);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: TotalNumUnits of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_TotalNumUnits
static int tolua_set_CPlayer_TotalNumUnits(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalNumUnits'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->TotalNumUnits = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NumBuildings of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_NumBuildings
static int tolua_get_CPlayer_NumBuildings(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'NumBuildings'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->NumBuildings);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: NumBuildings of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_NumBuildings
static int tolua_set_CPlayer_NumBuildings(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'NumBuildings'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->NumBuildings = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Supply of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_Supply
static int tolua_get_CPlayer_Supply(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Supply'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Supply);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Supply of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_Supply
static int tolua_set_CPlayer_Supply(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Supply'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Supply = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Demand of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_Demand
static int tolua_get_CPlayer_Demand(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Demand'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Demand);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Demand of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_Demand
static int tolua_set_CPlayer_Demand(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Demand'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Demand = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UnitLimit of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_UnitLimit
static int tolua_get_CPlayer_UnitLimit(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'UnitLimit'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->UnitLimit);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: UnitLimit of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_UnitLimit
static int tolua_set_CPlayer_UnitLimit(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'UnitLimit'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->UnitLimit = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: BuildingLimit of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_BuildingLimit
static int tolua_get_CPlayer_BuildingLimit(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'BuildingLimit'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->BuildingLimit);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: BuildingLimit of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_BuildingLimit
static int tolua_set_CPlayer_BuildingLimit(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'BuildingLimit'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->BuildingLimit = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TotalUnitLimit of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_TotalUnitLimit
static int tolua_get_CPlayer_TotalUnitLimit(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalUnitLimit'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->TotalUnitLimit);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: TotalUnitLimit of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_TotalUnitLimit
static int tolua_set_CPlayer_TotalUnitLimit(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalUnitLimit'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->TotalUnitLimit = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Score of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_Score
static int tolua_get_CPlayer_Score(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Score'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Score);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Score of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_Score
static int tolua_set_CPlayer_Score(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Score'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Score = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TotalUnits of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_TotalUnits
static int tolua_get_CPlayer_TotalUnits(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalUnits'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->TotalUnits);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: TotalUnits of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_TotalUnits
static int tolua_set_CPlayer_TotalUnits(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalUnits'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->TotalUnits = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TotalBuildings of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_TotalBuildings
static int tolua_get_CPlayer_TotalBuildings(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalBuildings'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->TotalBuildings);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: TotalBuildings of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_TotalBuildings
static int tolua_set_CPlayer_TotalBuildings(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalBuildings'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->TotalBuildings = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TotalResources of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_CPlayer_TotalResources
static int tolua_get_stratagus_CPlayer_TotalResources(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->TotalResources[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: TotalResources of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_stratagus_CPlayer_TotalResources
static int tolua_set_stratagus_CPlayer_TotalResources(lua_State* tolua_S)
{
 int tolua_index;
  CPlayer* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (CPlayer*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=MaxCosts)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->TotalResources[tolua_index] = ((int)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TotalRazings of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_TotalRazings
static int tolua_get_CPlayer_TotalRazings(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalRazings'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->TotalRazings);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: TotalRazings of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_TotalRazings
static int tolua_set_CPlayer_TotalRazings(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalRazings'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->TotalRazings = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TotalKills of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_get_CPlayer_TotalKills
static int tolua_get_CPlayer_TotalKills(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalKills'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->TotalKills);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: TotalKills of class  CPlayer */
#ifndef TOLUA_DISABLE_tolua_set_CPlayer_TotalKills
static int tolua_set_CPlayer_TotalKills(lua_State* tolua_S)
{
  CPlayer* self = (CPlayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'TotalKills'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->TotalKills = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Players */
#ifndef TOLUA_DISABLE_tolua_get_stratagus_Players
static int tolua_get_stratagus_Players(lua_State* tolua_S)
{
 int tolua_index;
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=PlayerMax)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)&Players[tolua_index],"CPlayer");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Players */
#ifndef TOLUA_DISABLE_tolua_set_stratagus_Players
static int tolua_set_stratagus_Players(lua_State* tolua_S)
{
 int tolua_index;
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=PlayerMax)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  Players[tolua_index] = *((CPlayer*)  tolua_tousertype(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ThisPlayer */
#ifndef TOLUA_DISABLE_tolua_get_ThisPlayer_ptr
static int tolua_get_ThisPlayer_ptr(lua_State* tolua_S)
{
 tolua_pushusertype(tolua_S,(void*)ThisPlayer,"CPlayer");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ThisPlayer */
#ifndef TOLUA_DISABLE_tolua_set_ThisPlayer_ptr
static int tolua_set_ThisPlayer_ptr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!tolua_isusertype(tolua_S,2,"CPlayer",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  ThisPlayer = ((CPlayer*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Ident of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_get_CUnitType_Ident
static int tolua_get_CUnitType_Ident(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Ident'",NULL);
#endif
 tolua_pushstring(tolua_S,(const char*)self->Ident);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Ident of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_set_CUnitType_Ident
static int tolua_set_CUnitType_Ident(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Ident'",NULL);
 if (!tolua_isstring(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Ident = ((char*)  tolua_tostring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Name of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_get_CUnitType_Name
static int tolua_get_CUnitType_Name(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Name'",NULL);
#endif
 tolua_pushstring(tolua_S,(const char*)self->Name);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Name of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_set_CUnitType_Name
static int tolua_set_CUnitType_Name(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Name'",NULL);
 if (!tolua_isstring(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Name = ((char*)  tolua_tostring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: MinAttackRange of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_get_CUnitType_MinAttackRange
static int tolua_get_CUnitType_MinAttackRange(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MinAttackRange'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->MinAttackRange);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: MinAttackRange of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_set_CUnitType_MinAttackRange
static int tolua_set_CUnitType_MinAttackRange(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MinAttackRange'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->MinAttackRange = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ClicksToExplode of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_get_CUnitType_ClicksToExplode
static int tolua_get_CUnitType_ClicksToExplode(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ClicksToExplode'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->ClicksToExplode);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ClicksToExplode of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_set_CUnitType_ClicksToExplode
static int tolua_set_CUnitType_ClicksToExplode(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ClicksToExplode'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ClicksToExplode = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Supply of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_get_CUnitType_Supply
static int tolua_get_CUnitType_Supply(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Supply'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Supply);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Supply of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_set_CUnitType_Supply
static int tolua_set_CUnitType_Supply(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Supply'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Supply = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Demand of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_get_CUnitType_Demand
static int tolua_get_CUnitType_Demand(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Demand'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Demand);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Demand of class  CUnitType */
#ifndef TOLUA_DISABLE_tolua_set_CUnitType_Demand
static int tolua_set_CUnitType_Demand(lua_State* tolua_S)
{
  CUnitType* self = (CUnitType*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Demand'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Demand = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: X of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_get_CUnit_X
static int tolua_get_CUnit_X(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->X);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_set_CUnit_X
static int tolua_set_CUnit_X(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->X = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_get_CUnit_Y
static int tolua_get_CUnit_Y(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->Y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_set_CUnit_Y
static int tolua_set_CUnit_Y(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Type of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_get_CUnit_Type_ptr
static int tolua_get_CUnit_Type_ptr(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Type'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->Type,"CUnitType");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Type of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_set_CUnit_Type_ptr
static int tolua_set_CUnit_Type_ptr(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Type'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CUnitType",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Type = ((CUnitType*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Player of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_get_CUnit_Player_ptr
static int tolua_get_CUnit_Player_ptr(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Player'",NULL);
#endif
 tolua_pushusertype(tolua_S,(void*)self->Player,"CPlayer");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Player of class  CUnit */
#ifndef TOLUA_DISABLE_tolua_set_CUnit_Player_ptr
static int tolua_set_CUnit_Player_ptr(lua_State* tolua_S)
{
  CUnit* self = (CUnit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Player'",NULL);
 if (!tolua_isusertype(tolua_S,2,"CPlayer",0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Player = ((CPlayer*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_stratagus_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,1);
 tolua_beginmodule(tolua_S,NULL);

 { /* begin embedded lua code */
  int top;
  top = lua_gettop(tolua_S);
  static unsigned char B[] = {
  10,109,116, 32, 61, 32,123, 32, 95, 95,105,110,100,101,120,
   32, 61, 32,102,117,110, 99,116,105,111,110, 40,116, 44, 32,
  107,101,121, 41, 32,114,101,116,117,114,110, 32, 67, 73, 99,
  111,110, 58, 71,101,116, 40,107,101,121, 41, 32,101,110,100,
   32,125, 10, 73, 99,111,110,115, 32, 61, 32,123,125, 10,115,
  101,116,109,101,116, 97,116, 97, 98,108,101, 40, 73, 99,111,
  110,115, 44, 32,109,116, 41, 10,109,116, 32, 61, 32,123, 32,
   95, 95,105,110,100,101,120, 32, 61, 32,102,117,110, 99,116,
  105,111,110, 40,116, 44, 32,107,101,121, 41, 32,114,101,116,
  117,114,110, 32, 67, 85,112,103,114, 97,100,101, 58, 71,101,
  116, 40,107,101,121, 41, 32,101,110,100, 32,125, 10, 85,112,
  103,114, 97,100,101,115, 32, 61, 32,123,125, 10,115,101,116,
  109,101,116, 97,116, 97, 98,108,101, 40, 85,112,103,114, 97,
  100,101,115, 44, 32,109,116, 41, 10,109,116, 32, 61, 32,123,
   32, 95, 95,105,110,100,101,120, 32, 61, 32,102,117,110, 99,
  116,105,111,110, 40,116, 44, 32,107,101,121, 41, 32,114,101,
  116,117,114,110, 32, 67, 70,111,110,116, 58, 71,101,116, 40,
  107,101,121, 41, 32,101,110,100, 32,125, 10, 70,111,110,116,
  115, 32, 61, 32,123,125, 10,115,101,116,109,101,116, 97,116,
   97, 98,108,101, 40, 70,111,110,116,115, 44, 32,109,116, 41,
   10,109,116, 32, 61, 32,123, 32, 95, 95,105,110,100,101,120,
   32, 61, 32,102,117,110, 99,116,105,111,110, 40,116, 44, 32,
  107,101,121, 41, 32,114,101,116,117,114,110, 32, 67, 70,111,
  110,116, 67,111,108,111,114, 58, 71,101,116, 40,107,101,121,
   41, 32,101,110,100, 32,125, 10, 70,111,110,116, 67,111,108,
  111,114,115, 32, 61, 32,123,125, 10,115,101,116,109,101,116,
   97,116, 97, 98,108,101, 40, 70,111,110,116, 67,111,108,111,
  114,115, 44, 32,109,116, 41,32
  };
  lua_dobuffer(tolua_S,(char*)B,sizeof(B),"tolua: embedded Lua code 1");
  lua_settop(tolua_S, top);
 } /* end of embedded lua code */

 tolua_constant(tolua_S,"MaxCosts",MaxCosts);
 tolua_constant(tolua_S,"PlayerMax",PlayerMax);
 tolua_constant(tolua_S,"UnitMax",UnitMax);
 tolua_cclass(tolua_S,"CMinimap","CMinimap","",NULL);
 tolua_beginmodule(tolua_S,"CMinimap");
  tolua_variable(tolua_S,"X",tolua_get_CMinimap_X,tolua_set_CMinimap_X);
  tolua_variable(tolua_S,"Y",tolua_get_CMinimap_Y,tolua_set_CMinimap_Y);
  tolua_variable(tolua_S,"W",tolua_get_CMinimap_W,tolua_set_CMinimap_W);
  tolua_variable(tolua_S,"H",tolua_get_CMinimap_H,tolua_set_CMinimap_H);
  tolua_variable(tolua_S,"WithTerrain",tolua_get_CMinimap_WithTerrain,tolua_set_CMinimap_WithTerrain);
  tolua_variable(tolua_S,"ShowSelected",tolua_get_CMinimap_ShowSelected,tolua_set_CMinimap_ShowSelected);
  tolua_variable(tolua_S,"Transparent",tolua_get_CMinimap_Transparent,tolua_set_CMinimap_Transparent);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"CButtonPanel","CButtonPanel","",NULL);
 tolua_beginmodule(tolua_S,"CButtonPanel");
  tolua_variable(tolua_S,"X",tolua_get_CButtonPanel_X,tolua_set_CButtonPanel_X);
  tolua_variable(tolua_S,"Y",tolua_get_CButtonPanel_Y,tolua_set_CButtonPanel_Y);
  tolua_variable(tolua_S,"ShowCommandKey",tolua_get_CButtonPanel_ShowCommandKey,tolua_set_CButtonPanel_ShowCommandKey);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"CInfoPanel","CInfoPanel","",NULL);
 tolua_beginmodule(tolua_S,"CInfoPanel");
  tolua_variable(tolua_S,"X",tolua_get_CInfoPanel_X,tolua_set_CInfoPanel_X);
  tolua_variable(tolua_S,"Y",tolua_get_CInfoPanel_Y,tolua_set_CInfoPanel_Y);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"CUserInterface","CUserInterface","",NULL);
 tolua_beginmodule(tolua_S,"CUserInterface");
  tolua_variable(tolua_S,"InfoPanel",tolua_get_CUserInterface_InfoPanel,tolua_set_CUserInterface_InfoPanel);
  tolua_variable(tolua_S,"ButtonPanel",tolua_get_CUserInterface_ButtonPanel,tolua_set_CUserInterface_ButtonPanel);
  tolua_variable(tolua_S,"Minimap",tolua_get_CUserInterface_Minimap,tolua_set_CUserInterface_Minimap);
 tolua_endmodule(tolua_S);
 tolua_variable(tolua_S,"UI",tolua_get_UI,tolua_set_UI);
 tolua_cclass(tolua_S,"CIcon","CIcon","",NULL);
 tolua_beginmodule(tolua_S,"CIcon");
  tolua_function(tolua_S,"New",tolua_stratagus_CIcon_New00);
  tolua_function(tolua_S,"Get",tolua_stratagus_CIcon_Get00);
  tolua_variable(tolua_S,"Ident",tolua_get_CIcon_Ident,NULL);
  tolua_variable(tolua_S,"G",tolua_get_CIcon_G_ptr,tolua_set_CIcon_G_ptr);
  tolua_variable(tolua_S,"Frame",tolua_get_CIcon_Frame,tolua_set_CIcon_Frame);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"LuaActionListener","LuaActionListener","",tolua_collect_LuaActionListener);
#else
 tolua_cclass(tolua_S,"LuaActionListener","LuaActionListener","",NULL);
#endif
 tolua_beginmodule(tolua_S,"LuaActionListener");
  tolua_function(tolua_S,"new",tolua_stratagus_LuaActionListener_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_LuaActionListener_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_LuaActionListener_new00_local);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Widget","Widget","",NULL);
 tolua_beginmodule(tolua_S,"Widget");
  tolua_function(tolua_S,"addActionListener",tolua_stratagus_Widget_addActionListener00);
  tolua_function(tolua_S,"setFont",tolua_stratagus_Widget_setFont00);
  tolua_function(tolua_S,"setGlobalFont",tolua_stratagus_Widget_setGlobalFont00);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"ImageButton","ImageButton","Widget",tolua_collect_ImageButton);
#else
 tolua_cclass(tolua_S,"ImageButton","ImageButton","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"ImageButton");
  tolua_function(tolua_S,"new",tolua_stratagus_ImageButton_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_ImageButton_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_ImageButton_new00_local);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"ImageWidget","ImageWidget","Widget",tolua_collect_ImageWidget);
#else
 tolua_cclass(tolua_S,"ImageWidget","ImageWidget","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"ImageWidget");
  tolua_function(tolua_S,"new",tolua_stratagus_ImageWidget_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_ImageWidget_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_ImageWidget_new00_local);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"Slider","Slider","Widget",tolua_collect_Slider);
#else
 tolua_cclass(tolua_S,"Slider","Slider","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"Slider");
  tolua_function(tolua_S,"new",tolua_stratagus_Slider_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_Slider_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_Slider_new00_local);
  tolua_function(tolua_S,"getValue",tolua_stratagus_Slider_getValue00);
  tolua_function(tolua_S,"setWidth",tolua_stratagus_Slider_setWidth00);
  tolua_function(tolua_S,"setHeight",tolua_stratagus_Slider_setHeight00);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"CheckBox","CheckBox","Widget",tolua_collect_CheckBox);
#else
 tolua_cclass(tolua_S,"CheckBox","CheckBox","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"CheckBox");
  tolua_function(tolua_S,"new",tolua_stratagus_CheckBox_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_CheckBox_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_CheckBox_new00_local);
  tolua_function(tolua_S,"isMarked",tolua_stratagus_CheckBox_isMarked00);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"Label","Label","Widget",tolua_collect_Label);
#else
 tolua_cclass(tolua_S,"Label","Label","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"Label");
  tolua_function(tolua_S,"new",tolua_stratagus_Label_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_Label_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_Label_new00_local);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"RadioButton","RadioButton","Widget",tolua_collect_RadioButton);
#else
 tolua_cclass(tolua_S,"RadioButton","RadioButton","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"RadioButton");
  tolua_function(tolua_S,"new",tolua_stratagus_RadioButton_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_RadioButton_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_RadioButton_new00_local);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"TextField","TextField","Widget",tolua_collect_TextField);
#else
 tolua_cclass(tolua_S,"TextField","TextField","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"TextField");
  tolua_function(tolua_S,"new",tolua_stratagus_TextField_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_TextField_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_TextField_new00_local);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"ListBoxWidget","ListBoxWidget","Widget",tolua_collect_ListBoxWidget);
#else
 tolua_cclass(tolua_S,"ListBoxWidget","ListBoxWidget","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"ListBoxWidget");
  tolua_function(tolua_S,"new",tolua_stratagus_ListBoxWidget_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_ListBoxWidget_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_ListBoxWidget_new00_local);
  tolua_function(tolua_S,"setList",tolua_stratagus_ListBoxWidget_setList00);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"DropDownWidget","DropDownWidget","Widget",tolua_collect_DropDownWidget);
#else
 tolua_cclass(tolua_S,"DropDownWidget","DropDownWidget","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"DropDownWidget");
  tolua_function(tolua_S,"new",tolua_stratagus_DropDownWidget_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_DropDownWidget_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_DropDownWidget_new00_local);
  tolua_function(tolua_S,"setList",tolua_stratagus_DropDownWidget_setList00);
  tolua_function(tolua_S,"getSelected",tolua_stratagus_DropDownWidget_getSelected00);
  tolua_function(tolua_S,"setSelected",tolua_stratagus_DropDownWidget_setSelected00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"Container","Container","",NULL);
 tolua_beginmodule(tolua_S,"Container");
  tolua_function(tolua_S,"add",tolua_stratagus_Container_add00);
  tolua_function(tolua_S,"clear",tolua_stratagus_Container_clear00);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"Windows","Windows","Widget",tolua_collect_Windows);
#else
 tolua_cclass(tolua_S,"Windows","Windows","Widget",NULL);
#endif
 tolua_beginmodule(tolua_S,"Windows");
  tolua_function(tolua_S,"new",tolua_stratagus_Windows_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_Windows_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_Windows_new00_local);
  tolua_function(tolua_S,"add",tolua_stratagus_Windows_add00);
 tolua_endmodule(tolua_S);
 tolua_variable(tolua_S,"top",tolua_get_top_ptr,tolua_set_top_ptr);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"MenuScreen","MenuScreen","",tolua_collect_MenuScreen);
#else
 tolua_cclass(tolua_S,"MenuScreen","MenuScreen","",NULL);
#endif
 tolua_beginmodule(tolua_S,"MenuScreen");
  tolua_function(tolua_S,"new",tolua_stratagus_MenuScreen_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_MenuScreen_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_MenuScreen_new00_local);
  tolua_function(tolua_S,"run",tolua_stratagus_MenuScreen_run00);
  tolua_function(tolua_S,"stop",tolua_stratagus_MenuScreen_stop00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"StartMap",tolua_stratagus_StartMap00);
 tolua_cclass(tolua_S,"CVideo","CVideo","",NULL);
 tolua_beginmodule(tolua_S,"CVideo");
  tolua_variable(tolua_S,"Width",tolua_get_CVideo_Width,tolua_set_CVideo_Width);
  tolua_variable(tolua_S,"Height",tolua_get_CVideo_Height,tolua_set_CVideo_Height);
  tolua_variable(tolua_S,"Depth",tolua_get_CVideo_Depth,tolua_set_CVideo_Depth);
  tolua_variable(tolua_S,"FullScreen",tolua_get_CVideo_FullScreen,tolua_set_CVideo_FullScreen);
 tolua_endmodule(tolua_S);
 tolua_variable(tolua_S,"Video",tolua_get_Video,tolua_set_Video);
 tolua_cclass(tolua_S,"CGraphic","CGraphic","",NULL);
 tolua_beginmodule(tolua_S,"CGraphic");
  tolua_function(tolua_S,"New",tolua_stratagus_CGraphic_New00);
  tolua_function(tolua_S,"Free",tolua_stratagus_CGraphic_Free00);
  tolua_function(tolua_S,"Load",tolua_stratagus_CGraphic_Load00);
  tolua_function(tolua_S,"Resize",tolua_stratagus_CGraphic_Resize00);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"CColor","CColor","",tolua_collect_CColor);
#else
 tolua_cclass(tolua_S,"CColor","CColor","",NULL);
#endif
 tolua_beginmodule(tolua_S,"CColor");
  tolua_function(tolua_S,"new",tolua_stratagus_CColor_new00);
  tolua_function(tolua_S,"new_local",tolua_stratagus_CColor_new00_local);
  tolua_function(tolua_S,".call",tolua_stratagus_CColor_new00_local);
  tolua_variable(tolua_S,"R",tolua_get_CColor_unsigned_R,tolua_set_CColor_unsigned_R);
  tolua_variable(tolua_S,"G",tolua_get_CColor_unsigned_G,tolua_set_CColor_unsigned_G);
  tolua_variable(tolua_S,"B",tolua_get_CColor_unsigned_B,tolua_set_CColor_unsigned_B);
  tolua_variable(tolua_S,"A",tolua_get_CColor_unsigned_A,tolua_set_CColor_unsigned_A);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"CFont","CFont","",NULL);
 tolua_beginmodule(tolua_S,"CFont");
  tolua_function(tolua_S,"New",tolua_stratagus_CFont_New00);
  tolua_function(tolua_S,"Get",tolua_stratagus_CFont_Get00);
  tolua_function(tolua_S,"Height",tolua_stratagus_CFont_Height00);
  tolua_function(tolua_S,"Width",tolua_stratagus_CFont_Width00);
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"MaxFontColors",MaxFontColors);
 tolua_cclass(tolua_S,"CFontColor","CFontColor","",NULL);
 tolua_beginmodule(tolua_S,"CFontColor");
  tolua_function(tolua_S,"New",tolua_stratagus_CFontColor_New00);
  tolua_function(tolua_S,"Get",tolua_stratagus_CFontColor_Get00);
  tolua_array(tolua_S,"Colors",tolua_get_stratagus_CFontColor_Colors,tolua_set_stratagus_CFontColor_Colors);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"CUpgrade","CUpgrade","",NULL);
 tolua_beginmodule(tolua_S,"CUpgrade");
  tolua_function(tolua_S,"New",tolua_stratagus_CUpgrade_New00);
  tolua_function(tolua_S,"Get",tolua_stratagus_CUpgrade_Get00);
  tolua_array(tolua_S,"Costs",tolua_get_stratagus_CUpgrade_Costs,tolua_set_stratagus_CUpgrade_Costs);
  tolua_variable(tolua_S,"Icon",tolua_get_CUpgrade_Icon_ptr,tolua_set_CUpgrade_Icon_ptr);
 tolua_endmodule(tolua_S);
#ifdef __cplusplus
 tolua_cclass(tolua_S,"CPlayer","CPlayer","",tolua_collect_CPlayer);
#else
 tolua_cclass(tolua_S,"CPlayer","CPlayer","",NULL);
#endif
 tolua_beginmodule(tolua_S,"CPlayer");
  tolua_variable(tolua_S,"Name",tolua_get_CPlayer_Name,tolua_set_CPlayer_Name);
  tolua_array(tolua_S,"Resources",tolua_get_stratagus_CPlayer_Resources,tolua_set_stratagus_CPlayer_Resources);
  tolua_array(tolua_S,"Incomes",tolua_get_stratagus_CPlayer_Incomes,tolua_set_stratagus_CPlayer_Incomes);
  tolua_array(tolua_S,"Revenue",tolua_get_stratagus_CPlayer_Revenue,NULL);
  tolua_array(tolua_S,"Units",tolua_get_stratagus_CPlayer_Units,tolua_set_stratagus_CPlayer_Units);
  tolua_variable(tolua_S,"TotalNumUnits",tolua_get_CPlayer_TotalNumUnits,tolua_set_CPlayer_TotalNumUnits);
  tolua_variable(tolua_S,"NumBuildings",tolua_get_CPlayer_NumBuildings,tolua_set_CPlayer_NumBuildings);
  tolua_variable(tolua_S,"Supply",tolua_get_CPlayer_Supply,tolua_set_CPlayer_Supply);
  tolua_variable(tolua_S,"Demand",tolua_get_CPlayer_Demand,tolua_set_CPlayer_Demand);
  tolua_variable(tolua_S,"UnitLimit",tolua_get_CPlayer_UnitLimit,tolua_set_CPlayer_UnitLimit);
  tolua_variable(tolua_S,"BuildingLimit",tolua_get_CPlayer_BuildingLimit,tolua_set_CPlayer_BuildingLimit);
  tolua_variable(tolua_S,"TotalUnitLimit",tolua_get_CPlayer_TotalUnitLimit,tolua_set_CPlayer_TotalUnitLimit);
  tolua_variable(tolua_S,"Score",tolua_get_CPlayer_Score,tolua_set_CPlayer_Score);
  tolua_variable(tolua_S,"TotalUnits",tolua_get_CPlayer_TotalUnits,tolua_set_CPlayer_TotalUnits);
  tolua_variable(tolua_S,"TotalBuildings",tolua_get_CPlayer_TotalBuildings,tolua_set_CPlayer_TotalBuildings);
  tolua_array(tolua_S,"TotalResources",tolua_get_stratagus_CPlayer_TotalResources,tolua_set_stratagus_CPlayer_TotalResources);
  tolua_variable(tolua_S,"TotalRazings",tolua_get_CPlayer_TotalRazings,tolua_set_CPlayer_TotalRazings);
  tolua_variable(tolua_S,"TotalKills",tolua_get_CPlayer_TotalKills,tolua_set_CPlayer_TotalKills);
 tolua_endmodule(tolua_S);
 tolua_array(tolua_S,"Players",tolua_get_stratagus_Players,tolua_set_stratagus_Players);
 tolua_variable(tolua_S,"ThisPlayer",tolua_get_ThisPlayer_ptr,tolua_set_ThisPlayer_ptr);
 tolua_cclass(tolua_S,"CUnitType","CUnitType","",NULL);
 tolua_beginmodule(tolua_S,"CUnitType");
  tolua_variable(tolua_S,"Ident",tolua_get_CUnitType_Ident,tolua_set_CUnitType_Ident);
  tolua_variable(tolua_S,"Name",tolua_get_CUnitType_Name,tolua_set_CUnitType_Name);
  tolua_variable(tolua_S,"MinAttackRange",tolua_get_CUnitType_MinAttackRange,tolua_set_CUnitType_MinAttackRange);
  tolua_variable(tolua_S,"ClicksToExplode",tolua_get_CUnitType_ClicksToExplode,tolua_set_CUnitType_ClicksToExplode);
  tolua_variable(tolua_S,"Supply",tolua_get_CUnitType_Supply,tolua_set_CUnitType_Supply);
  tolua_variable(tolua_S,"Demand",tolua_get_CUnitType_Demand,tolua_set_CUnitType_Demand);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"CUnit","CUnit","",NULL);
 tolua_beginmodule(tolua_S,"CUnit");
  tolua_variable(tolua_S,"X",tolua_get_CUnit_X,tolua_set_CUnit_X);
  tolua_variable(tolua_S,"Y",tolua_get_CUnit_Y,tolua_set_CUnit_Y);
  tolua_variable(tolua_S,"Type",tolua_get_CUnit_Type_ptr,tolua_set_CUnit_Type_ptr);
  tolua_variable(tolua_S,"Player",tolua_get_CUnit_Player_ptr,tolua_set_CUnit_Player_ptr);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}
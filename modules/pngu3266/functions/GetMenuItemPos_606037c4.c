/* Module: pngu3266.dll
   Function: GetMenuItemPos
   Address: 606037c4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNCustomMenu::GetMenuItemPos(unsigned long) */

ulong __thiscall CPNCustomMenu::GetMenuItemPos(CPNCustomMenu *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x137c4  1257  ?GetMenuItemPos@CPNCustomMenu@@UAEKK@Z */
  uVar1 = CPNMenu::GetMenuItemPos((CPNMenu *)this,param_1);
  return uVar1 + 1;
}



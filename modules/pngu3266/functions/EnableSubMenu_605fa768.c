/* Module: pngu3266.dll
   Function: EnableSubMenu
   Address: 605fa768
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::EnableSubMenu(unsigned long,int) */

void __thiscall CPNMenu::EnableSubMenu(CPNMenu *this,ulong param_1,int param_2)

{
  UINT UVar1;
  
                    /* 0xa768  1033  ?EnableSubMenu@CPNMenu@@UAEXKH@Z */
  (**(code **)(*(int *)this + 0x68))();
  UVar1 = GetMenuState(*(HMENU *)(this + 0x14),param_1,0x400);
  if (*(HMENU *)(this + 0x14) != (HMENU)0x0) {
    EnableMenuItem(*(HMENU *)(this + 0x14),param_1,
                   (param_2 == 0 | UVar1) & 0xffffffff - (param_2 != 0) | 0x400);
  }
  return;
}



/* Module: pngu3266.dll
   Function: EnableItem
   Address: 605fa24c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::EnableItem(unsigned long,int) */

void __thiscall CPNMenu::EnableItem(CPNMenu *this,ulong param_1,int param_2)

{
  UINT UVar1;
  
                    /* 0xa24c  1029  ?EnableItem@CPNMenu@@UAEXKH@Z */
  (**(code **)(*(int *)this + 0x68))();
  UVar1 = GetMenuState(*(HMENU *)(this + 0x14),param_1,0);
  if (*(HMENU *)(this + 0x14) != (HMENU)0x0) {
    EnableMenuItem(*(HMENU *)(this + 0x14),param_1,
                   (param_2 == 0 | UVar1) & 0xffffffff - (param_2 != 0));
  }
  return;
}



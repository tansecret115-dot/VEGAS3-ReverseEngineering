/* Module: pngu3266.dll
   Function: IsItemEnabled
   Address: 605fa7c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::IsItemEnabled(unsigned long) */

int __thiscall CPNMenu::IsItemEnabled(CPNMenu *this,ulong param_1)

{
  UINT UVar1;
  
                    /* 0xa7c9  1506  ?IsItemEnabled@CPNMenu@@UAEHK@Z */
  UVar1 = GetMenuState(*(HMENU *)(this + 0x14),param_1,0);
  return (uint)((UVar1 & 3) == 0);
}



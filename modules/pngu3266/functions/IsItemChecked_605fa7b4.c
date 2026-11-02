/* Module: pngu3266.dll
   Function: IsItemChecked
   Address: 605fa7b4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::IsItemChecked(unsigned long) */

int __thiscall CPNMenu::IsItemChecked(CPNMenu *this,ulong param_1)

{
  UINT UVar1;
  
                    /* 0xa7b4  1505  ?IsItemChecked@CPNMenu@@UAEHK@Z */
  UVar1 = GetMenuState(*(HMENU *)(this + 0x14),param_1,0);
  return UVar1 & 8;
}



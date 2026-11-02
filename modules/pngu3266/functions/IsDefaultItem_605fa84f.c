/* Module: pngu3266.dll
   Function: IsDefaultItem
   Address: 605fa84f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMenu::IsDefaultItem(unsigned long) */

int __thiscall CPNMenu::IsDefaultItem(CPNMenu *this,ulong param_1)

{
  BOOL BVar1;
  UINT local_30 [3];
  uint local_24;
  
                    /* 0xa84f  1495  ?IsDefaultItem@CPNMenu@@UAEHK@Z */
  memset(local_30,0,0x2c);
  local_30[0] = 0x2c;
  local_30[1] = 1;
  BVar1 = GetMenuItemInfoA(*(HMENU *)(this + 0x14),param_1,0,(LPMENUITEMINFOA)local_30);
  if (BVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = local_24 & 0x1000;
  }
  return local_24;
}



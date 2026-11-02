/* Module: pngu3266.dll
   Function: SetDefaultItem
   Address: 605fa7e6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNMenu::SetDefaultItem(unsigned long,int) */

void __thiscall CPNMenu::SetDefaultItem(CPNMenu *this,ulong param_1,int param_2)

{
  BOOL BVar1;
  UINT local_30 [3];
  byte local_23;
  
                    /* 0xa7e6  1891  ?SetDefaultItem@CPNMenu@@UAEXKH@Z */
  (**(code **)(*(int *)this + 0x68))();
  memset(local_30,0,0x2c);
  local_30[0] = 0x2c;
  local_30[1] = 1;
  BVar1 = GetMenuItemInfoA(*(HMENU *)(this + 0x14),param_1,0,(LPMENUITEMINFOA)local_30);
  if (BVar1 != 0) {
    if (param_2 == 0) {
      local_23 = local_23 & 0xef;
    }
    else {
      local_23 = local_23 | 0x10;
    }
    SetMenuItemInfoA(*(HMENU *)(this + 0x14),param_1,0,(LPCMENUITEMINFOA)local_30);
  }
  return;
}



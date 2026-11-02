/* Module: pngu3266.dll
   Function: ResetDummyMenuItem
   Address: 606037f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNCustomMenu::ResetDummyMenuItem(void) */

int __thiscall CPNCustomMenu::ResetDummyMenuItem(CPNCustomMenu *this)

{
  BOOL BVar1;
  UINT local_30;
  UINT local_2c;
  UINT local_28;
  ULONG_PTR local_10;
  
                    /* 0x137f1  1786  ?ResetDummyMenuItem@CPNCustomMenu@@IAEHXZ */
  local_10 = 0;
  local_30 = 0x2c;
  local_2c = 0x10;
  local_28 = 0x100;
  BVar1 = SetMenuItemInfoA(*(HMENU *)(this + 0x14),0,1,(LPCMENUITEMINFOA)&local_30);
  return BVar1;
}



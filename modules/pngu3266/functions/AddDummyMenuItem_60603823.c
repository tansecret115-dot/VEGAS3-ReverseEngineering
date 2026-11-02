/* Module: pngu3266.dll
   Function: AddDummyMenuItem
   Address: 60603823
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNCustomMenu::AddDummyMenuItem(void) */

int __thiscall CPNCustomMenu::AddDummyMenuItem(CPNCustomMenu *this)

{
  BOOL BVar1;
  UINT local_30;
  UINT local_2c;
  UINT local_28;
  UINT local_24;
  UINT local_20;
  HMENU local_1c;
  HBITMAP local_18;
  HBITMAP local_14;
  ULONG_PTR local_10;
  
                    /* 0x13823  759  ?AddDummyMenuItem@CPNCustomMenu@@IAEHXZ */
  local_30 = 0x2c;
  local_2c = 0x13;
  local_28 = 0x100;
  local_24 = 3;
  local_20 = 0x4e21;
  local_1c = (HMENU)0x0;
  local_18 = (HBITMAP)0x0;
  local_14 = (HBITMAP)0x0;
  local_10 = 0;
  BVar1 = InsertMenuItemA(*(HMENU *)(this + 0x14),0,1,(LPCMENUITEMINFOA)&local_30);
  return BVar1;
}



/* Module: pngu3266.dll
   Function: GetCount
   Address: 605fa290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMenu::GetCount(void) */

ulong __thiscall CPNMenu::GetCount(CPNMenu *this)

{
  ulong uVar1;
  
                    /* 0xa290  1158  ?GetCount@CPNMenu@@UAEKXZ */
  if (*(HMENU *)(this + 0x14) != (HMENU)0x0) {
    uVar1 = GetMenuItemCount(*(HMENU *)(this + 0x14));
    return uVar1;
  }
  return 0;
}



/* Module: pngu3266.dll
   Function: GetCommandId
   Address: 605fa2a2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNMenu::GetCommandId(unsigned long) */

ulong __thiscall CPNMenu::GetCommandId(CPNMenu *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0xa2a2  1147  ?GetCommandId@CPNMenu@@UAEKK@Z */
  if (*(HMENU *)(this + 0x14) == (HMENU)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = GetMenuItemID(*(HMENU *)(this + 0x14),param_1);
  }
  return uVar1;
}



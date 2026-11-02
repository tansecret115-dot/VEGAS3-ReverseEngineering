/* Module: pngu3266.dll
   Function: GetCommandId
   Address: 606037b6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNCustomMenu::GetCommandId(unsigned long) */

ulong __thiscall CPNCustomMenu::GetCommandId(CPNCustomMenu *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x137b6  1146  ?GetCommandId@CPNCustomMenu@@UAEKK@Z */
  uVar1 = CPNMenu::GetCommandId((CPNMenu *)this,param_1 + 1);
  return uVar1;
}



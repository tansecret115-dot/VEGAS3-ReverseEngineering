/* Module: pngu3266.dll
   Function: GetCount
   Address: 60603779
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNCustomMenu::GetCount(void) */

ulong __thiscall CPNCustomMenu::GetCount(CPNCustomMenu *this)

{
  ulong uVar1;
  
                    /* 0x13779  1154  ?GetCount@CPNCustomMenu@@UAEKXZ */
  uVar1 = CPNMenu::GetCount((CPNMenu *)this);
  return uVar1 - 1;
}



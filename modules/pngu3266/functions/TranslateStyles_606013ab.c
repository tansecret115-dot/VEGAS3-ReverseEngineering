/* Module: pngu3266.dll
   Function: TranslateStyles
   Address: 606013ab
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNPopupList::TranslateStyles(unsigned long) */

ulong __thiscall CPNPopupList::TranslateStyles(CPNPopupList *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x113ab  2094  ?TranslateStyles@CPNPopupList@@QAEKK@Z */
  uVar1 = param_1 & 1 | 0x200002;
  if ((param_1 & 4) != 0) {
    uVar1 = CONCAT22(0x20,CONCAT11(1,(char)uVar1));
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  return uVar1;
}



/* Module: pngu3266.dll
   Function: TranslateStyles
   Address: 605fe113
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: unsigned long __thiscall CPNEdit::TranslateStyles(unsigned long) */

ulong __thiscall CPNEdit::TranslateStyles(CPNEdit *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0xe113  2093  ?TranslateStyles@CPNEdit@@IAEKK@Z */
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x800;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  return uVar1;
}



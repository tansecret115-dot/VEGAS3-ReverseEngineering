/* Module: pngu3266.dll
   Function: TranslateStyles
   Address: 605f5518
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: unsigned long __thiscall CPNText::TranslateStyles(unsigned long) */

ulong __thiscall CPNText::TranslateStyles(CPNText *this,ulong param_1)

{
  ulong uVar1;
  
                    /* 0x5518  2096  ?TranslateStyles@CPNText@@IAEKK@Z */
  uVar1 = 0;
  if ((param_1 & 4) == 0) {
    uVar1 = ((param_1 & 8) != 0) + 1;
  }
  return uVar1;
}



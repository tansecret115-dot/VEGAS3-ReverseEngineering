/* Module: pngu3266.dll
   Function: TranslateStyles
   Address: 6060290b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: unsigned long __thiscall CPNScrollBar::TranslateStyles(unsigned long) */

ulong __thiscall CPNScrollBar::TranslateStyles(CPNScrollBar *this,ulong param_1)

{
                    /* 0x1290b  2095  ?TranslateStyles@CPNScrollBar@@IAEKK@Z */
  return (uint)((param_1 & 1) != 0);
}



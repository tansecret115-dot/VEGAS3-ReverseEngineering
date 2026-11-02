/* Module: vegas30k.dll
   Function: cdr_LBAToCells
   Address: 01099cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_LBAToCells(unsigned long *,unsigned long) */

long cdr_LBAToCells(ulong *param_1,ulong param_2)

{
                    /* 0x99cf0  601  ?cdr_LBAToCells@@YGJPAKK@Z */
  if (param_1 == (ulong *)0x0) {
    return -0x7fffbffd;
  }
  *param_1 = param_2 * 0x24c;
  return 0;
}



/* Module: sfcdi.dll
   Function: cdr_SetReadMethod
   Address: 5bf055b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_SetReadMethod(struct HSFCD__ *,unsigned long) */

long cdr_SetReadMethod(HSFCD__ *param_1,ulong param_2)

{
                    /* 0x55b0  202  ?cdr_SetReadMethod@@YGJPAUHSFCD__@@K@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  *(ulong *)(*(int *)(param_1 + 0x160) + 0x40) = param_2;
  return 0;
}



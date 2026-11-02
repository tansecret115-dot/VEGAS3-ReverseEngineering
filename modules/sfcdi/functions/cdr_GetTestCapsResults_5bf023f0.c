/* Module: sfcdi.dll
   Function: cdr_GetTestCapsResults
   Address: 5bf023f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall cdr_GetTestCapsResults(struct HSFCD__ *) */

ulong cdr_GetTestCapsResults(HSFCD__ *param_1)

{
                    /* 0x23f0  185  ?cdr_GetTestCapsResults@@YGKPAUHSFCD__@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return 0;
  }
  return *(ulong *)(param_1 + 0x2ce);
}



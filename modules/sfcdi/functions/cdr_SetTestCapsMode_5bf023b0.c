/* Module: sfcdi.dll
   Function: cdr_SetTestCapsMode
   Address: 5bf023b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_SetTestCapsMode(struct HSFCD__ *,int) */

long cdr_SetTestCapsMode(HSFCD__ *param_1,int param_2)

{
                    /* 0x23b0  204  ?cdr_SetTestCapsMode@@YGJPAUHSFCD__@@H@Z */
  if (param_1 != (HSFCD__ *)0x0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) | 1;
      return 0;
    }
    *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) & 0xfffffffe;
  }
  return 0;
}



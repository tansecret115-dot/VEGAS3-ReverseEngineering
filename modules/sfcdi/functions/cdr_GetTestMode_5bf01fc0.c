/* Module: sfcdi.dll
   Function: cdr_GetTestMode
   Address: 5bf01fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_GetTestMode(struct HSFCD__ *) */

int cdr_GetTestMode(HSFCD__ *param_1)

{
                    /* 0x1fc0  186  ?cdr_GetTestMode@@YGHPAUHSFCD__@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return 1;
  }
  return *(int *)(param_1 + 0x2be);
}



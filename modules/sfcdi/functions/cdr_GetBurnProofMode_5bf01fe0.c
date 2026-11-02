/* Module: sfcdi.dll
   Function: cdr_GetBurnProofMode
   Address: 5bf01fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_GetBurnProofMode(struct HSFCD__ *) */

int cdr_GetBurnProofMode(HSFCD__ *param_1)

{
                    /* 0x1fe0  172  ?cdr_GetBurnProofMode@@YGHPAUHSFCD__@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return 1;
  }
  return *(int *)(param_1 + 0x2c2);
}



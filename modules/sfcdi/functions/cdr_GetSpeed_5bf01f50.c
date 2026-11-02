/* Module: sfcdi.dll
   Function: cdr_GetSpeed
   Address: 5bf01f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall cdr_GetSpeed(struct HSFCD__ *,unsigned int) */

uint cdr_GetSpeed(HSFCD__ *param_1,uint param_2)

{
                    /* 0x1f50  184  ?cdr_GetSpeed@@YGIPAUHSFCD__@@I@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    return *(uint *)(param_1 + 0x2ca);
  }
  return *(uint *)(param_1 + 0x2c6);
}



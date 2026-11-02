/* Module: sfcdi.dll
   Function: cdr_SetSpeed
   Address: 5bf01f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_SetSpeed(struct HSFCD__ *,unsigned int,unsigned int) */

long cdr_SetSpeed(HSFCD__ *param_1,uint param_2,uint param_3)

{
                    /* 0x1f80  203  ?cdr_SetSpeed@@YGJPAUHSFCD__@@II@Z */
  if (param_1 != (HSFCD__ *)0x0) {
    if (param_2 == 0) {
      *(uint *)(param_1 + 0x2c6) = param_3;
    }
    else if (param_2 != 1) {
      return -0x7ff8ffa9;
    }
    *(uint *)(param_1 + 0x2ca) = param_3;
  }
  return -0x7ff8ffa9;
}



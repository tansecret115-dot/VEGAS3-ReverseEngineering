/* Module: sfcdi.dll
   Function: cdr_GetWriteState
   Address: 5bf02050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned int __stdcall cdr_GetWriteState(struct HSFCD__ *) */

uint cdr_GetWriteState(HSFCD__ *param_1)

{
                    /* 0x2050  187  ?cdr_GetWriteState@@YGIPAUHSFCD__@@@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x164);
}



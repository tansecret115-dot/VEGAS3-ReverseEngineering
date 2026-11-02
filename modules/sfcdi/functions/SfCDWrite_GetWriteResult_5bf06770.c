/* Module: sfcdi.dll
   Function: SfCDWrite_GetWriteResult
   Address: 5bf06770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDWrite_GetWriteResult(struct HSFCDWRITE__ *) */

long SfCDWrite_GetWriteResult(HSFCDWRITE__ *param_1)

{
                    /* 0x6770  54  ?SfCDWrite_GetWriteResult@@YGJPAUHSFCDWRITE__@@@Z */
  if (param_1 == (HSFCDWRITE__ *)0x0) {
    return -0x7ff8ffa9;
  }
  return *(long *)(param_1 + 0x1d0c);
}



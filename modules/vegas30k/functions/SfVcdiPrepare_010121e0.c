/* Module: vegas30k.dll
   Function: SfVcdiPrepare
   Address: 010121e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVcdiPrepare(struct tagDIR_ENTRY *) */

long SfVcdiPrepare(tagDIR_ENTRY *param_1)

{
  long lVar1;
  
                    /* 0x121e0  510  ?SfVcdiPrepare@@YGJPAUtagDIR_ENTRY@@@Z */
  lVar1 = FUN_01011eb0(param_1);
  if (-1 < lVar1) {
    lVar1 = FUN_01011ab0(param_1);
    if (-1 < lVar1) {
      lVar1 = FUN_01012010(param_1);
      if (-1 < lVar1) {
        lVar1 = FUN_01011f50(param_1);
      }
    }
  }
  return lVar1;
}



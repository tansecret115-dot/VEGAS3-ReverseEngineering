/* Module: sipr3260.dll
   Function: RACloseCodec
   Address: 632a16d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RACloseCodec(void *param_1)

{
                    /* 0x16d0  1  RACloseCodec */
  if (param_1 != (void *)0x0) {
    FUN_632a1220((int)param_1);
    operator_delete(param_1);
  }
  return 0;
}



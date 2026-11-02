/* Module: 28_83260.dll
   Function: RACloseCodec
   Address: 10001690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RACloseCodec(void *param_1)

{
                    /* 0x1690  1  RACloseCodec */
  if (param_1 != (void *)0x0) {
    FUN_100014e0();
    operator_delete(param_1);
  }
  return 0;
}



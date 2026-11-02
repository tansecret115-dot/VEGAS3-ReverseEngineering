/* Module: cook3260.dll
   Function: RACloseCodec
   Address: 633a1150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RACloseCodec(void *param_1)

{
                    /* 0x1150  1  RACloseCodec */
  if (param_1 != (void *)0x0) {
    FUN_633a1330();
    operator_delete(param_1);
    return 0;
  }
  return 0x80070057;
}



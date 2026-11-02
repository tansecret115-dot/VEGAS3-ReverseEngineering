/* Module: 14_43260.dll
   Function: RACloseCodec
   Address: 10001540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RACloseCodec(void *param_1)

{
                    /* 0x1540  1  RACloseCodec */
  if (param_1 != (void *)0x0) {
    FUN_100013e0();
    operator_delete(param_1);
  }
  return 0;
}



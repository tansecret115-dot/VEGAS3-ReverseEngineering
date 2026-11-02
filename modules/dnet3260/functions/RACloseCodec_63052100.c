/* Module: dnet3260.dll
   Function: RACloseCodec
   Address: 63052100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RACloseCodec(void *param_1)

{
                    /* 0x2100  1  RACloseCodec */
  if (param_1 != (void *)0x0) {
    FUN_63051bf0((int)param_1);
    operator_delete(param_1);
    return 0;
  }
  return 0x80070057;
}



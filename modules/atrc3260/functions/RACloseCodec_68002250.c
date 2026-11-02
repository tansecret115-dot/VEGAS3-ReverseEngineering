/* Module: atrc3260.dll
   Function: RACloseCodec
   Address: 68002250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RACloseCodec(void *param_1)

{
                    /* 0x2250  1  RACloseCodec */
  if (param_1 != (void *)0x0) {
    FUN_68001ae0((int)param_1);
    operator_delete(param_1);
    return 0;
  }
  return 0x80070057;
}



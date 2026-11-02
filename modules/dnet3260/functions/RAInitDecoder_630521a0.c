/* Module: dnet3260.dll
   Function: RAInitDecoder
   Address: 630521a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAInitDecoder(void *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
                    /* 0x21a0  8  RAInitDecoder */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_63051c80(param_1,param_2);
    return uVar1;
  }
  return 0x80070057;
}



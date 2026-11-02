/* Module: dnet3260.dll
   Function: RAInitEncoder
   Address: 63052210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RAInitEncoder(void *param_1,int param_2)

{
  undefined4 uVar1;
  
                    /* 0x2210  9  RAInitEncoder */
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    uVar1 = FUN_63051de0(param_1,*(int *)(param_2 + 8),*(short *)(param_2 + 0xc),param_2,param_2 + 4
                        );
    return uVar1;
  }
  return 0x80070057;
}



/* Module: dnet3260.dll
   Function: RADecode
   Address: 630521c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
RADecode(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
        undefined4 param_6)

{
  undefined4 uVar1;
  
                    /* 0x21c0  2  RADecode */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_63051d80(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  return 0x80070057;
}



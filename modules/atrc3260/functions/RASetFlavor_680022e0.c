/* Module: atrc3260.dll
   Function: RASetFlavor
   Address: 680022e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RASetFlavor(void *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
                    /* 0x22e0  14  RASetFlavor */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_68002160(param_1,param_2);
    return uVar1;
  }
  return 0x80070057;
}



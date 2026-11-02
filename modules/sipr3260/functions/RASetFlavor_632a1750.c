/* Module: sipr3260.dll
   Function: RASetFlavor
   Address: 632a1750
   Source: Ghidra pseudocode (Stage 10 batch) */


uint RASetFlavor(void *param_1,undefined4 param_2)

{
  uint uVar1;
  
                    /* 0x1750  13  RASetFlavor */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_632a1570(param_1,param_2);
    return uVar1;
  }
  return 0x80070057;
}



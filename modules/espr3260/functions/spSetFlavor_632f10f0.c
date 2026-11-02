/* Module: espr3260.dll
   Function: spSetFlavor
   Address: 632f10f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 spSetFlavor(void *param_1,ushort param_2)

{
  undefined2 uVar1;
  
                    /* 0x10f0  6  spSetFlavor */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_632f1270(param_1,param_2);
    return uVar1;
  }
  return 1;
}



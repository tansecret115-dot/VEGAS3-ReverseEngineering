/* Module: espr3260.dll
   Function: spInitEncoder
   Address: 632f1070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 spInitEncoder(void *param_1,int *param_2,int *param_3)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
                    /* 0x1070  5  spInitEncoder */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_632f1190(param_1,param_2,param_3);
    return uVar1;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),0x252);
}



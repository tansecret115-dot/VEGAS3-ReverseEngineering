/* Module: espr3260.dll
   Function: spEncode
   Address: 632f10a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint spEncode(void *param_1,int param_2,int param_3)

{
  undefined4 in_EAX;
  uint uVar1;
  
                    /* 0x10a0  3  spEncode */
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_632f1200(param_1,param_2,param_3);
    return uVar1;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),0x252);
}



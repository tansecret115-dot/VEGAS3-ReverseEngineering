/* Module: atrc3260.dll
   Function: RAInitEncoder
   Address: 680023a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAInitEncoder(void *param_1,undefined4 *param_2)

{
  int iVar1;
  
                    /* 0x23a0  11  RAInitEncoder */
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_68001ed0(param_1,param_2[2],*(short *)(param_2 + 3),param_2,param_2 + 1);
    return iVar1;
  }
  return -0x7ff8ffa9;
}



/* Module: cook3260.dll
   Function: RAInitEncoder
   Address: 633a1270
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAInitEncoder(void *param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x1270  11  RAInitEncoder */
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_633a1780(param_1,param_2);
    return iVar1;
  }
  return -0x7ff8ffa9;
}



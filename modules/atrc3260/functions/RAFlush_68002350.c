/* Module: atrc3260.dll
   Function: RAFlush
   Address: 68002350
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAFlush(void *param_1,int param_2,int *param_3)

{
  int iVar1;
  
                    /* 0x2350  4  RAFlush */
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_68001e40(param_1,param_2,param_3);
    return iVar1;
  }
  return -0x7ff8ffa9;
}



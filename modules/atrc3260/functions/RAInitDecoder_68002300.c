/* Module: atrc3260.dll
   Function: RAInitDecoder
   Address: 68002300
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAInitDecoder(void *param_1,undefined4 *param_2)

{
  int iVar1;
  
                    /* 0x2300  10  RAInitDecoder */
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_68001b70(param_1,param_2);
    return iVar1;
  }
  return -0x7ff8ffa9;
}



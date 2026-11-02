/* Module: cook3260.dll
   Function: RAInitDecoder
   Address: 633a1220
   Source: Ghidra pseudocode (Stage 10 batch) */


int RAInitDecoder(void *param_1,undefined4 *param_2)

{
  int iVar1;
  
                    /* 0x1220  10  RAInitDecoder */
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_633a1340(param_1,param_2);
    return iVar1;
  }
  return -0x7ff8ffa9;
}



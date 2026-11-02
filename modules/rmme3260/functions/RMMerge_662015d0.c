/* Module: rmme3260.dll
   Function: RMMerge
   Address: 662015d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int RMMerge(void *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* 0x15d0  20  RMMerge */
  if (param_1 == (void *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = FUN_66201730(param_1,param_2,param_3,param_4,0);
  return iVar1;
}



/* Module: rmme3260.dll
   Function: RMMergeConvert
   Address: 66201600
   Source: Ghidra pseudocode (Stage 10 batch) */


int RMMergeConvert(void *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* 0x1600  21  RMMergeConvert */
  if (param_1 == (void *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = FUN_66201730(param_1,param_2,param_3,param_4,1);
  return iVar1;
}



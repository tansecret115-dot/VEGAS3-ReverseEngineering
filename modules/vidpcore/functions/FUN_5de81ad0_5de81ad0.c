/* Module: vidpcore.dll
   Function: FUN_5de81ad0
   Address: 5de81ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5de81ad0(int param_1,int param_2,double *param_3,undefined4 param_4,float *param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_3 != (double *)0x0)) {
    iVar2 = 0;
    iVar3 = param_1;
    if (0 < param_2) {
      do {
        iVar1 = FUN_5de81a80(iVar3,param_3);
        if (iVar1 != 0) {
          *param_5 = (float)((float10)*(double *)(param_1 + 0x10 + iVar2 * 0x28) - (float10)*param_3
                            );
          *param_6 = 1;
          return *(undefined4 *)(param_1 + iVar2 * 0x28 + 0x20);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x28;
      } while (iVar2 < param_2);
    }
    *param_6 = 0;
  }
  return param_4;
}



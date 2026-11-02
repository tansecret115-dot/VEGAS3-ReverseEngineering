/* Module: vfplugs.dll
   Function: FUN_00415390
   Address: 00415390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415390(int param_1,int *param_2,uint param_3,int param_4,float *param_5)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  
  if (((param_3 != 0) && (BVar1 = IsBadReadPtr(param_2,param_3 * 0x48), BVar1 != 0)) ||
     (param_4 != 0)) {
    return -0x7ff8ffa9;
  }
  BVar1 = IsBadWritePtr(param_5,0x48);
  if (BVar1 != 0) {
    return -0x7fffbffd;
  }
  pfVar5 = param_5;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 1;
  }
  if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
    *param_5 = 2.8026e-45;
  }
  if (param_3 != 0) {
    uVar3 = 0;
    piVar4 = param_2;
    if (param_3 != 0) {
      do {
        if (*piVar4 != (*(uint *)(param_1 + 0x80) & 1) * 2) {
          return -0x7ff8ffa9;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x12;
      } while (uVar3 < param_3);
    }
  }
  if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
    iVar2 = FUN_004151b0((void *)(param_1 + -8),param_5,param_3,(int)param_2);
    return iVar2;
  }
  iVar2 = FUN_00415060((void *)(param_1 + -8),(int *)param_5,param_3,(int)param_2);
  return iVar2;
}



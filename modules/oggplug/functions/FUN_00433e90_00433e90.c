/* Module: oggplug.dll
   Function: FUN_00433e90
   Address: 00433e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00433e90(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = param_1[10];
  FUN_00433fb0(param_4,iVar5,param_1[0xb]);
  iVar5 = (*(int *)param_1[6] - (iVar5 >> 1)) - param_1[8];
  if (1 < *param_1) {
    do {
      fVar2 = param_4[iVar5];
      pfVar4 = param_4 + iVar5;
      iVar3 = iVar5;
      while (iVar3 = iVar3 + 1,
            iVar3 <= (*(int *)(param_1[6] + 4 + iVar6 * 4) + *(int *)(param_1[6] + iVar6 * 4) >> 1)
                     - param_1[8]) {
        pfVar1 = pfVar4 + 1;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + 1;
        if (((_DAT_0044d780 < *pfVar1) && (*pfVar4 < fVar2)) || (fVar2 == _DAT_0044d780)) {
          fVar2 = *pfVar4;
        }
      }
      iVar3 = param_1[8];
      if (iVar6 < *param_1) {
        do {
          if (iVar3 + iVar5 < *(int *)(param_1[6] + iVar6 * 4)) break;
          if (*(float *)(param_5 + iVar6 * 4) < fVar2) {
            *(float *)(param_5 + iVar6 * 4) = fVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *param_1);
      }
    } while (iVar6 + 1 < *param_1);
  }
  fVar2 = param_4[param_1[0xb] + -1];
  if (iVar6 < *param_1) {
    pfVar4 = (float *)(param_5 + iVar6 * 4);
    do {
      if (*pfVar4 < fVar2) {
        *pfVar4 = fVar2;
      }
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar6 < *param_1);
  }
  return;
}



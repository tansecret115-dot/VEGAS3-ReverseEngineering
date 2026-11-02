/* Module: mp3plug.dll
   Function: FUN_5f6a4c50
   Address: 5f6a4c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6a4c50(int param_1,float *param_2,undefined4 param_3,uint *param_4,float *param_5,int param_6,
            int *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  uint _NewValue;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  bool bVar8;
  float10 fVar9;
  
  pfVar7 = param_2;
  pfVar4 = (float *)0x0;
  param_2 = (float *)0x0;
  iVar5 = 0;
  if (param_6 == 0) goto LAB_5f6a4eb6;
  if (*(int *)(param_1 + 4) == 2) {
    fVar1 = param_5[param_6 * 2 + -2];
    fVar2 = param_5[param_6 * 2 + -1];
    bVar8 = *(double *)(param_1 + 0x20) < _DAT_5f7349d0;
    pfVar4 = pfVar7;
    if (bVar8) {
      fVar9 = (float10)*(double *)(param_1 + 0x20) + (float10)_DAT_5f72c7c8;
      pfVar4 = pfVar7 + 2;
      *pfVar7 = (float)(((float10)*param_5 - (float10)*(double *)(param_1 + 0x30)) * fVar9 +
                       (float10)*(double *)(param_1 + 0x30));
      pfVar7[1] = (float)(((float10)param_5[1] - (float10)*(double *)(param_1 + 0x50)) * fVar9 +
                         (float10)*(double *)(param_1 + 0x50));
      *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
    }
    param_2 = (float *)(uint)bVar8;
    *(double *)(param_1 + 0x30) = (double)fVar1;
    *(double *)(param_1 + 0x50) = (double)fVar2;
    _NewValue = _controlfp(0,0);
    _controlfp(0x300,0x300);
    dVar3 = *(double *)(param_1 + 0x20);
    while (dVar3 < (double)(param_6 + -1)) {
      iVar5 = (int)ROUND(*(double *)(param_1 + 0x20));
      fVar1 = (float)*(double *)(param_1 + 0x20) - (float)iVar5;
      if ((float)_DAT_5f7349d0 == fVar1) {
        *pfVar4 = param_5[iVar5 * 2];
        pfVar4[1] = param_5[iVar5 * 2 + 1];
      }
      else {
        *pfVar4 = (param_5[iVar5 * 2 + 2] - param_5[iVar5 * 2]) * fVar1 + param_5[iVar5 * 2];
        pfVar4[1] = (param_5[iVar5 * 2 + 3] - param_5[iVar5 * 2 + 1]) * fVar1 +
                    param_5[iVar5 * 2 + 1];
      }
      dVar3 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x28);
      pfVar4 = pfVar4 + 2;
      param_2 = (float *)((int)param_2 + 1);
      *(double *)(param_1 + 0x20) = dVar3;
    }
LAB_5f6a4e9a:
    _controlfp(_NewValue,0xffffffff);
    pfVar4 = param_2;
  }
  else if (*(int *)(param_1 + 4) == 1) {
    fVar1 = param_5[param_6 + -1];
    pfVar6 = pfVar7;
    if (*(double *)(param_1 + 0x20) < _DAT_5f7349d0) {
      do {
        pfVar7 = pfVar6 + 1;
        pfVar4 = (float *)((int)pfVar4 + 1);
        *pfVar6 = (float)(((float10)*(double *)(param_1 + 0x20) + (float10)_DAT_5f72c7c8) *
                          ((float10)*param_5 - (float10)*(double *)(param_1 + 0x30)) +
                         (float10)*(double *)(param_1 + 0x30));
        dVar3 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x28);
        *(double *)(param_1 + 0x20) = dVar3;
        pfVar6 = pfVar7;
        param_2 = pfVar4;
      } while (dVar3 < _DAT_5f7349d0);
    }
    *(double *)(param_1 + 0x30) = (double)fVar1;
    _NewValue = _controlfp(0,0);
    _controlfp(0x300,0x300);
    dVar3 = *(double *)(param_1 + 0x20);
    while (dVar3 <= (double)(param_6 + -1)) {
      iVar5 = (int)ROUND(*(double *)(param_1 + 0x20));
      fVar1 = (float)*(double *)(param_1 + 0x20) - (float)iVar5;
      if ((float)_DAT_5f7349d0 == fVar1) {
        *pfVar7 = param_5[iVar5];
      }
      else {
        *pfVar7 = (param_5[iVar5 + 1] - param_5[iVar5]) * fVar1 + param_5[iVar5];
      }
      dVar3 = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x28);
      pfVar7 = pfVar7 + 1;
      param_2 = (float *)((int)param_2 + 1);
      *(double *)(param_1 + 0x20) = dVar3;
    }
    goto LAB_5f6a4e9a;
  }
  *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) - (double)param_6;
  iVar5 = param_6;
LAB_5f6a4eb6:
  *param_7 = iVar5;
  *param_4 = (uint)pfVar4;
  return 0;
}



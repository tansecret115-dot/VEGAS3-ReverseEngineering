/* Module: tokr3260.dll
   Function: FUN_68058e80
   Address: 68058e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_68058e80(int param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  float local_40 [4];
  float local_30 [4];
  int local_20 [5];
  int local_c;
  float local_8;
  
  uVar7 = param_2;
  local_20[4] = *(int *)(*(int *)(param_2 + 0xf224) + 0x28);
  iVar10 = (int)param_3 - (int)param_4;
  param_4 = (float)((int)param_4 - (int)local_30);
  local_c = *(int *)(*(int *)(param_2 + 0xf224) + 0x24);
  param_3 = 0.0;
  do {
    pfVar1 = (float *)((int)local_30 + (int)param_3);
    pfVar2 = (float *)((int)local_40 + (int)param_3);
    pfVar11 = *(float **)((int)param_4 + (int)pfVar1);
    *pfVar1 = 0.0;
    *pfVar2 = 0.0;
    iVar13 = 0x100;
    fVar3 = *pfVar1;
    fVar4 = *pfVar2;
    iVar9 = *(int *)((int)pfVar1 + iVar10 + (int)param_4) - (int)pfVar11;
    do {
      fVar5 = *pfVar11;
      local_8 = ABS(fVar5);
      fVar3 = ABS(*(float *)(iVar9 + (int)pfVar11)) + fVar3;
      pfVar11 = pfVar11 + 1;
      iVar13 = iVar13 + -1;
      fVar4 = ABS(fVar5) + fVar4;
    } while (iVar13 != 0);
    *pfVar2 = fVar4;
    *pfVar1 = fVar3;
    *pfVar1 = *pfVar1 * _DAT_6805b2a8;
    param_3 = (float)((int)param_3 + 4);
    *pfVar2 = *pfVar2 * _DAT_6805b2a8;
  } while ((int)param_3 < 0x10);
  if (local_c == 0) {
    local_20[3] = 3;
    local_20[0] = 3;
    local_20[1] = 3;
    local_20[2] = 3;
  }
  else {
    iVar10 = 0;
    piVar8 = local_20;
    piVar12 = (int *)(param_2 + 0x6184);
    do {
      fVar3 = local_40[iVar10];
      param_4 = local_30[iVar10];
      iVar9 = *piVar12;
      if ((param_4 != _DAT_6805b2ac) || (fVar3 != _DAT_6805b2ac)) {
        if (iVar10 < *(int *)(param_2 + 4)) {
          param_3 = 8.0;
          fVar4 = _DAT_6805b2b4;
          if ((iVar9 != 0) && (fVar4 = _DAT_6805b2b0, iVar9 == 1)) {
            param_3 = 4.0;
          }
        }
        else {
          param_3 = 30000.0;
          fVar4 = _DAT_6805b2b8;
        }
        if (fVar3 < param_4 * fVar4) {
          iVar9 = 1;
          if (param_4 < fVar3 * param_3) {
            iVar9 = 3;
          }
        }
        else {
          iVar9 = 0;
        }
      }
      *piVar8 = iVar9;
      iVar10 = iVar10 + 1;
      piVar12 = piVar12 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar10 < 4);
  }
  iVar10 = *(int *)(param_2 + 4);
  bVar6 = true;
  if (iVar10 < *(int *)(param_1 + 4)) {
    piVar8 = local_20 + iVar10;
    iVar10 = *(int *)(param_1 + 4) - iVar10;
    do {
      if (*piVar8 != 3) {
        bVar6 = false;
      }
      piVar8 = piVar8 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(int *)(param_2 + 0x61a4) = local_20[0];
  *(int *)(param_2 + 25000) = local_20[1];
  *(int *)(param_2 + 0x61ac) = local_20[2];
  *(int *)(param_2 + 0x61b0) = local_20[3];
  if (local_20[4] != 0) {
    if (bVar6) {
      iVar10 = *(int *)(param_2 + 4);
      fVar3 = _DAT_6805b2ac;
      fVar4 = _DAT_6805b2ac;
      if (iVar10 < 4) {
        iVar9 = iVar10 * 4;
        do {
          pfVar1 = (float *)((int)local_40 + iVar9);
          fVar4 = *(float *)((int)local_30 + iVar9) + fVar4;
          iVar9 = iVar9 + 4;
          fVar3 = *pfVar1 + fVar3;
        } while (iVar9 < 0x10);
      }
      param_2 = 4 - iVar10;
      FUN_68058e00(fVar4 / (float)(int)param_2,fVar3 / (float)(int)param_2,&param_2);
      *(uint *)(uVar7 + 0x61bc) = param_2;
      return 0;
    }
    *(undefined4 *)(param_2 + 0x61bc) = 0xf;
    return 0;
  }
  *(undefined4 *)(param_2 + 0x61bc) = 0xf;
  return 0;
}



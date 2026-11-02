/* Module: tokr3260.dll
   Function: FUN_68051d20
   Address: 68051d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_68051d20(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float local_60 [4];
  float local_50 [4];
  float local_40 [4];
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  undefined8 local_c;
  
  piVar9 = param_2;
  local_10 = 0x6194 - (int)param_1;
  local_c._4_4_ = 4;
  piVar11 = param_1;
  do {
    FUN_68051ee0(*(int *)((int)piVar11 + *(int *)(param_3 + 0xf218) + local_10),
                 *(int *)((int)piVar11 + *(int *)(param_3 + 0xf218) + (0x6184 - (int)param_1)),
                 *piVar11,*(float **)(((int)param_2 - (int)param_1) + (int)piVar11));
    piVar11 = piVar11 + 1;
    local_c._4_4_ = local_c._4_4_ + -1;
  } while (local_c._4_4_ != 0);
  FUN_68051f90(*(uint *)(*(int *)(param_3 + 0xf218) + 0x61b8),&local_14,&local_18);
  iVar10 = *(int *)(param_3 + 0xf218);
  iVar7 = 0;
  iVar8 = *(int *)(iVar10 + 0x61c0);
  do {
    if (iVar7 < iVar8) {
      local_30[iVar7] = 1.0;
      local_40[iVar7] = 1.0;
    }
    else {
      local_30[iVar7] = local_14;
      local_40[iVar7] = local_18;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  FUN_68051f90(*(uint *)(iVar10 + 0x61b4),&local_1c,&local_20);
  iVar8 = 0;
  iVar10 = *(int *)(*(int *)(param_3 + 0xf218) + 4);
  do {
    if (iVar8 < iVar10) {
      local_50[iVar8] = 1.0;
      local_60[iVar8] = 1.0;
    }
    else {
      local_50[iVar8] = local_1c;
      local_60[iVar8] = local_20;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  iVar10 = (int)local_30 - (int)param_2;
  local_10 = (int)local_40 - (int)param_2;
  iVar8 = (int)param_1 - (int)param_2;
  iVar7 = (int)local_50 - (int)param_2;
  iVar12 = (int)local_60 - (int)param_2;
  param_2 = (int *)0x4;
  do {
    param_3 = 0;
    do {
      if (param_3 < 8) {
        fVar5 = (float)param_3 * _DAT_6805b054;
        fVar6 = (float)_DAT_6805b058 - fVar5;
        local_c = (double)fVar6;
        fVar4 = *(float *)(iVar10 + (int)piVar9) * fVar6 + *(float *)(iVar7 + (int)piVar9) * fVar5;
        fVar5 = *(float *)(local_10 + (int)piVar9) * fVar6 +
                *(float *)(iVar12 + (int)piVar9) * fVar5;
      }
      else {
        fVar4 = *(float *)(iVar7 + (int)piVar9);
        fVar5 = *(float *)(iVar12 + (int)piVar9);
      }
      pfVar3 = (float *)(*(int *)(iVar8 + (int)piVar9) + param_3 * 4);
      *pfVar3 = fVar4 * *pfVar3;
      iVar1 = param_3 * 4;
      iVar2 = param_3 * 4;
      param_3 = param_3 + 1;
      *(float *)(*piVar9 + iVar2) = fVar5 * *(float *)(*piVar9 + iVar1);
    } while (param_3 < 0x100);
    piVar9 = piVar9 + 1;
    param_2 = (int *)((int)param_2 + -1);
  } while (param_2 != (int *)0x0);
  return;
}



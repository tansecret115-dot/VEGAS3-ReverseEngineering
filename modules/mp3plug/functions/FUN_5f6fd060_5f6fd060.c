/* Module: mp3plug.dll
   Function: FUN_5f6fd060
   Address: 5f6fd060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_5f6fd060(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int *param_10,int param_11,int *param_12,int param_13)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  undefined3 extraout_var;
  int iVar9;
  int iVar10;
  float afStack_130 [39];
  int local_94;
  int *local_90;
  double local_88;
  int *local_80;
  int local_7c;
  int local_60;
  int local_58;
  int *local_50;
  int local_48;
  int *local_40;
  int local_38;
  int local_34;
  
  iVar10 = 0;
  iVar9 = 0;
  if (0 < param_1) {
    local_90 = param_12;
    local_80 = param_12 + param_1;
    iVar8 = 0;
    local_7c = 0;
    dVar3 = _DAT_5f75e618;
    dVar4 = _DAT_5f75e620;
    do {
      if (iVar8 < iVar8 + *local_90) {
        local_94 = iVar8;
        local_88 = (double)_DAT_5f75e614;
        iVar9 = local_7c;
        do {
          fVar1 = *(float *)(param_8 + iVar8 * 4);
          fVar2 = *(float *)(param_9 + iVar8 * 4);
          if (fVar1 < fVar2) {
            fVar2 = fVar1;
          }
          afStack_130[iVar8] = fVar2 * (float)local_88;
          dVar5 = (double)*(float *)(param_2 + iVar8 * 4) / (double)*(float *)(param_8 + iVar8 * 4);
          if (dVar5 <= _DAT_5f75e630) {
            dVar5 = _DAT_5f75e698;
          }
          dVar6 = (double)*(float *)(param_3 + iVar8 * 4) / (double)*(float *)(param_9 + iVar8 * 4);
          if (dVar6 <= _DAT_5f75e640) {
            dVar6 = _DAT_5f75e690;
          }
          dVar3 = dVar3 * dVar5 * dVar6;
          if (_DAT_5f75e608 < dVar3) {
            iVar9 = iVar9 + 0x3a;
            dVar3 = dVar3 / _DAT_5f75e608;
          }
          dVar5 = (double)*(float *)(param_4 + iVar8 * 4) *
                  ((double)_DAT_5f75e650 / (double)afStack_130[iVar8]);
          if (dVar5 <= _DAT_5f75e658) {
            dVar5 = _DAT_5f75e688;
          }
          dVar6 = ((double)_DAT_5f75e650 / (double)afStack_130[iVar8]) *
                  (double)*(float *)(param_5 + iVar8 * 4);
          if (dVar6 <= _DAT_5f75e660) {
            dVar6 = _DAT_5f75e680;
          }
          dVar4 = dVar6 * dVar5 * dVar4;
          if (_DAT_5f75e608 < dVar4) {
            iVar10 = iVar10 + 0x3a;
            dVar4 = dVar4 / _DAT_5f75e608;
          }
          iVar8 = iVar8 + 1;
          local_38 = iVar10;
          iVar10 = local_38;
        } while (iVar8 < local_94 + *local_90);
        local_7c = iVar9;
        iVar8 = local_94;
      }
      iVar8 = iVar8 + 0xd;
      local_90 = local_90 + 1;
      iVar9 = local_7c;
    } while ((int)local_90 < (int)local_80);
  }
  local_60 = *param_10;
  bVar7 = FUN_5f6fcfd0(-iVar10,-iVar9);
  *param_10 = CONCAT31(extraout_var,bVar7);
  if (param_11 == 0) {
    local_60 = *param_10;
  }
  if ((local_60 != 0) && (0 < param_1)) {
    local_38 = 0;
    local_50 = param_12 + param_1;
    local_58 = 0;
    do {
      iVar9 = *param_12;
      if (local_38 < local_38 + *(int *)(param_13 + iVar9 * 4)) {
        local_34 = param_6;
        iVar10 = local_38;
        do {
          fVar1 = *(float *)(param_6 + iVar10 * 4);
          *(float *)(param_6 + iVar10 * 4) =
               (*(float *)(param_7 + iVar10 * 4) + *(float *)(param_6 + iVar10 * 4)) * _DAT_5f75e610
          ;
          *(float *)(param_7 + iVar10 * 4) =
               (fVar1 - *(float *)(param_7 + iVar10 * 4)) * _DAT_5f75e610;
          iVar10 = iVar10 + 1;
          iVar9 = *param_12;
        } while (iVar10 < local_38 + *(int *)(param_13 + iVar9 * 4));
      }
      if (local_58 < iVar9 + local_58) {
        local_48 = local_38;
        local_40 = param_12;
        iVar9 = local_58;
        do {
          fVar1 = afStack_130[iVar9];
          *(float *)(param_9 + iVar9 * 4) = fVar1;
          *(float *)(param_8 + iVar9 * 4) = fVar1;
          *(undefined4 *)(param_2 + iVar9 * 4) = *(undefined4 *)(param_4 + iVar9 * 4);
          *(undefined4 *)(param_3 + iVar9 * 4) = *(undefined4 *)(param_5 + iVar9 * 4);
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_58 + *param_12);
      }
      param_12 = param_12 + 1;
      local_58 = local_58 + 0xd;
      local_38 = local_38 + 0xc0;
    } while ((int)param_12 < (int)local_50);
  }
  return local_60;
}



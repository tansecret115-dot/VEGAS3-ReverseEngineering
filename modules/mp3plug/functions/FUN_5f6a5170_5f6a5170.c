/* Module: mp3plug.dll
   Function: FUN_5f6a5170
   Address: 5f6a5170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6a5170(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int *param_7)

{
  float fVar1;
  double dVar2;
  float *pfVar3;
  float *pfVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  double local_50 [4];
  double local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  double local_20;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar7 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x94) = 3;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 2;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  local_18 = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (0 < param_3) {
    do {
      if (0 < *(int *)(param_1 + 0x94)) {
        pfVar4 = (float *)(param_5 + *(int *)(param_1 + 4) * iVar7 * 4);
        do {
          if (iVar7 < param_6) {
            iVar6 = *(int *)(param_1 + 0x98) + 1;
            *(int *)(param_1 + 0x98) = iVar6;
            if (3 < iVar6) {
              *(undefined4 *)(param_1 + 0x98) = 0;
            }
            pfVar3 = pfVar4 + 1;
            *(double *)(param_1 + 0x30 + *(int *)(param_1 + 0x98) * 8) = (double)*pfVar4;
            if (1 < *(int *)(param_1 + 4)) {
              fVar1 = *pfVar3;
              pfVar3 = pfVar4 + 2;
              *(double *)(param_1 + 0x50 + *(int *)(param_1 + 0x98) * 8) = (double)fVar1;
            }
            local_8 = iVar7 + 1;
            pfVar4 = pfVar3;
          }
          else {
            local_10 = 1;
            if (param_6 != 0) goto LAB_5f6a541a;
            iVar7 = *(int *)(param_1 + 0x98) + 1;
            *(int *)(param_1 + 0x98) = iVar7;
            if (3 < iVar7) {
              *(undefined4 *)(param_1 + 0x98) = 0;
            }
            iVar7 = *(int *)(param_1 + 0x98);
            *(undefined4 *)(param_1 + 0x30 + iVar7 * 8) = 0;
            *(undefined4 *)(param_1 + 0x34 + iVar7 * 8) = 0;
            if (1 < *(int *)(param_1 + 4)) {
              iVar7 = *(int *)(param_1 + 0x98);
              *(undefined4 *)(param_1 + 0x50 + iVar7 * 8) = 0;
              *(undefined4 *)(param_1 + 0x54 + iVar7 * 8) = 0;
            }
            *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
          }
          iVar6 = *(int *)(param_1 + 0x94) + -1;
          *(int *)(param_1 + 0x94) = iVar6;
          iVar7 = local_8;
        } while (0 < iVar6);
      }
      if ((local_10 != 0) && ((param_6 != 0 || (*(int *)(param_1 + 0x9c) < 1)))) break;
      local_28 = *(undefined4 *)(param_1 + 0x20);
      uStack_24 = *(undefined4 *)(param_1 + 0x24);
      iVar6 = *(int *)(param_1 + 0x98) + 1;
      local_30 = *(double *)(param_1 + 0x20) - (double)(int)ROUND(*(double *)(param_1 + 0x20));
      if (3 < iVar6) {
        iVar6 = 0;
      }
      if (_DAT_5f7349d0 == local_30) {
        iVar6 = iVar6 + 1;
        if (3 < iVar6) {
          iVar6 = 0;
        }
        local_20 = *(double *)(param_1 + 0x30 + iVar6 * 8);
        fVar8 = (float10)*(double *)(param_1 + 0x50 + iVar6 * 8);
      }
      else {
        dVar2 = local_30 * local_30;
        local_20 = 0.0;
        pdVar5 = local_50;
        local_50[3] = dVar2 * local_30;
        iVar7 = 4;
        local_50[0] = (dVar2 * _DAT_5f734a68 + (_DAT_5f72c7c8 - local_30 * _DAT_5f734a68)) -
                      local_50[3];
        local_50[1] = (_DAT_5f734aa8 - dVar2 * _DAT_5f734ab0) + local_50[3] * _DAT_5f734a68;
        local_50[2] = ((dVar2 + local_30) * _DAT_5f734a68 + _DAT_5f72c7c8) -
                      local_50[3] * _DAT_5f734a68;
        fVar8 = (float10)_DAT_5f7349d0;
        do {
          local_20 = *(double *)(param_1 + 0x30 + iVar6 * 8) * *pdVar5 + local_20;
          if (1 < *(int *)(param_1 + 4)) {
            fVar8 = (float10)*(double *)(param_1 + 0x50 + iVar6 * 8) * (float10)*pdVar5 + fVar8;
          }
          iVar6 = iVar6 + 1;
          if (3 < iVar6) {
            iVar6 = 0;
          }
          pdVar5 = pdVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_20 = local_20 * _DAT_5f734aa0;
        fVar8 = fVar8 * (float10)_DAT_5f734aa0;
        iVar7 = local_8;
      }
      iVar6 = *(int *)(param_1 + 4) * local_c;
      *(float *)(param_2 + iVar6 * 4) = (float)local_20;
      if (1 < *(int *)(param_1 + 4)) {
        *(float *)(param_2 + 4 + iVar6 * 4) = (float)fVar8;
      }
      local_c = local_c + 1;
      *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
      local_30 = local_30 + *(double *)(param_1 + 0x28);
      local_14 = (int)ROUND(local_30);
      *(int *)(param_1 + 0x94) = local_14;
    } while (local_c < param_3);
  }
LAB_5f6a541a:
  local_28 = *(undefined4 *)(param_1 + 0x20);
  uStack_24 = *(undefined4 *)(param_1 + 0x24);
  *(double *)(param_1 + 0x20) =
       *(double *)(param_1 + 0x20) - (double)(int)ROUND(*(double *)(param_1 + 0x20));
  _controlfp(local_18,0xffffffff);
  *param_7 = iVar7;
  *param_4 = local_c;
  return 0;
}



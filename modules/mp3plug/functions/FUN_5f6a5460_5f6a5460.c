/* Module: mp3plug.dll
   Function: FUN_5f6a5460
   Address: 5f6a5460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6a5460(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int *param_7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
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
  iVar6 = 0;
  if (0 < param_3) {
    do {
      iVar6 = local_c;
      if (0 < *(int *)(param_1 + 0x94)) {
        puVar4 = (undefined4 *)(param_5 + *(int *)(param_1 + 4) * local_8 * 8);
        do {
          if (local_8 < param_6) {
            iVar7 = *(int *)(param_1 + 0x98) + 1;
            *(int *)(param_1 + 0x98) = iVar7;
            if (3 < iVar7) {
              *(undefined4 *)(param_1 + 0x98) = 0;
            }
            iVar7 = *(int *)(param_1 + 0x98);
            puVar3 = puVar4 + 2;
            *(undefined4 *)(param_1 + 0x30 + iVar7 * 8) = *puVar4;
            *(undefined4 *)(param_1 + 0x34 + iVar7 * 8) = puVar4[1];
            if (1 < *(int *)(param_1 + 4)) {
              iVar7 = *(int *)(param_1 + 0x98);
              uVar2 = *puVar3;
              puVar3 = puVar4 + 4;
              *(undefined4 *)(param_1 + 0x50 + iVar7 * 8) = uVar2;
              *(undefined4 *)(param_1 + 0x54 + iVar7 * 8) = puVar4[3];
            }
            local_8 = local_8 + 1;
            puVar4 = puVar3;
          }
          else {
            local_10 = 1;
            if (param_6 != 0) goto LAB_5f6a5719;
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
          iVar7 = *(int *)(param_1 + 0x94) + -1;
          *(int *)(param_1 + 0x94) = iVar7;
        } while (0 < iVar7);
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
        dVar1 = *(double *)(param_1 + 0x50 + iVar6 * 8);
      }
      else {
        dVar1 = local_30 * local_30;
        local_20 = 0.0;
        pdVar5 = local_50;
        local_50[3] = dVar1 * local_30;
        iVar7 = 4;
        local_50[0] = (dVar1 * _DAT_5f734a68 + (_DAT_5f72c7c8 - local_30 * _DAT_5f734a68)) -
                      local_50[3];
        local_50[1] = (_DAT_5f734aa8 - dVar1 * _DAT_5f734ab0) + local_50[3] * _DAT_5f734a68;
        local_50[2] = ((dVar1 + local_30) * _DAT_5f734a68 + _DAT_5f72c7c8) -
                      local_50[3] * _DAT_5f734a68;
        dVar1 = _DAT_5f7349d0;
        do {
          local_20 = *(double *)(param_1 + 0x30 + iVar6 * 8) * *pdVar5 + local_20;
          if (1 < *(int *)(param_1 + 4)) {
            dVar1 = *(double *)(param_1 + 0x50 + iVar6 * 8) * *pdVar5 + dVar1;
          }
          iVar6 = iVar6 + 1;
          if (3 < iVar6) {
            iVar6 = 0;
          }
          pdVar5 = pdVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        local_20 = local_20 * _DAT_5f734aa0;
        dVar1 = dVar1 * _DAT_5f734aa0;
      }
      iVar6 = *(int *)(param_1 + 4) * local_c;
      *(double *)(param_2 + iVar6 * 8) = local_20;
      if (1 < *(int *)(param_1 + 4)) {
        *(double *)(param_2 + 8 + iVar6 * 8) = dVar1;
      }
      iVar6 = local_c + 1;
      local_c = iVar6;
      *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x20);
      local_30 = local_30 + *(double *)(param_1 + 0x28);
      local_14 = (int)ROUND(local_30);
      *(int *)(param_1 + 0x94) = local_14;
    } while (iVar6 < param_3);
  }
LAB_5f6a5719:
  local_28 = *(undefined4 *)(param_1 + 0x20);
  uStack_24 = *(undefined4 *)(param_1 + 0x24);
  *(double *)(param_1 + 0x20) =
       *(double *)(param_1 + 0x20) - (double)(int)ROUND(*(double *)(param_1 + 0x20));
  _controlfp(local_18,0xffffffff);
  *param_7 = local_8;
  *param_4 = iVar6;
  return 0;
}



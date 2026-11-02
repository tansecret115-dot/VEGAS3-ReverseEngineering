/* Module: mp3plug.dll
   Function: FUN_5f6a5760
   Address: 5f6a5760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6a5760(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint _NewValue;
  float *pfVar8;
  float *pfVar9;
  double local_38;
  double local_30;
  double local_28;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  bVar5 = false;
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    iVar6 = *(int *)(param_1 + 0x88) / 2;
    iVar7 = iVar6 + 1;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(int *)(param_1 + 0x94) = iVar7;
    *(int *)(param_1 + 0x98) = iVar7;
    *(int *)(param_1 + 0x9c) = iVar6;
    *(double *)(param_1 + 0xa8) = (double)-iVar7;
  }
  _NewValue = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (0 < param_3) {
    do {
      if (0 < *(int *)(param_1 + 0x94)) {
        pfVar9 = (float *)(param_5 + *(int *)(param_1 + 4) * local_8 * 4);
        do {
          if (local_8 < param_6) {
            iVar6 = *(int *)(param_1 + 0x98) + -1;
            *(int *)(param_1 + 0x98) = iVar6;
            if (iVar6 < 0) {
              *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x88) + -1;
            }
            pfVar8 = pfVar9 + 1;
            *(double *)(*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 0x98) * 8) = (double)*pfVar9;
            if (1 < *(int *)(param_1 + 4)) {
              fVar2 = *pfVar8;
              pfVar8 = pfVar9 + 2;
              *(double *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x98) * 8) = (double)fVar2;
            }
            local_8 = local_8 + 1;
            pfVar9 = pfVar8;
          }
          else {
            bVar5 = true;
            if (param_6 != 0) goto LAB_5f6a5a27;
            iVar6 = *(int *)(param_1 + 0x98) + -1;
            *(int *)(param_1 + 0x98) = iVar6;
            if (iVar6 < 0) {
              *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x88) + -1;
            }
            iVar6 = *(int *)(param_1 + 0x98);
            iVar7 = *(int *)(param_1 + 0x8c);
            *(undefined4 *)(iVar7 + iVar6 * 8) = 0;
            *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = 0;
            if (1 < *(int *)(param_1 + 4)) {
              iVar6 = *(int *)(param_1 + 0x98);
              iVar7 = *(int *)(param_1 + 0x90);
              *(undefined4 *)(iVar7 + iVar6 * 8) = 0;
              *(undefined4 *)(iVar7 + 4 + iVar6 * 8) = 0;
            }
            *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
          }
          dVar4 = *(double *)(param_1 + 0xa8) + _DAT_5f72c7c8;
          iVar6 = *(int *)(param_1 + 0x94) + -1;
          *(int *)(param_1 + 0x94) = iVar6;
          *(double *)(param_1 + 0xa8) = dVar4;
        } while (0 < iVar6);
      }
      if ((bVar5) && ((param_6 != 0 || (*(int *)(param_1 + 0x9c) < 1)))) break;
      iVar6 = *(int *)(param_1 + 0x88);
      iVar7 = *(int *)(param_1 + 0x98);
      local_28 = 0.0;
      local_30 = 0.0;
      local_38 = (double)(iVar6 / 2) - (*(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0xa8));
      if (0 < iVar6) {
        do {
          dVar4 = local_38;
          if (local_38 < _DAT_5f7349d0) {
            dVar4 = -local_38;
          }
          dVar4 = dVar4 * *(double *)(param_1 + 0x80);
          iVar1 = (int)ROUND(dVar4);
          dVar3 = *(double *)(*(int *)(param_1 + 0x78) + iVar1 * 8);
          dVar3 = (dVar4 - (double)iVar1) *
                  (*(double *)(*(int *)(param_1 + 0x78) + 8 + iVar1 * 8) - dVar3) + dVar3;
          local_28 = dVar3 * *(double *)(iVar7 * 8 + *(int *)(param_1 + 0x8c)) + local_28;
          if (1 < *(int *)(param_1 + 4)) {
            local_30 = dVar3 * *(double *)(*(int *)(param_1 + 0x90) + iVar7 * 8) + local_30;
          }
          iVar7 = iVar7 + 1;
          if (*(int *)(param_1 + 0x88) + -1 < iVar7) {
            iVar7 = 0;
          }
          local_38 = local_38 - _DAT_5f72c7c8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(param_1 + 4) * local_c;
      *(float *)(param_2 + iVar6 * 4) = (float)local_28;
      if (1 < *(int *)(param_1 + 4)) {
        *(float *)(param_2 + 4 + iVar6 * 4) = (float)local_30;
      }
      dVar4 = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0xa0);
      local_c = local_c + 1;
      *(double *)(param_1 + 0xa0) = dVar4;
      *(int *)(param_1 + 0x94) = (int)ROUND(dVar4 - *(double *)(param_1 + 0xa8));
    } while (local_c < param_3);
  }
LAB_5f6a5a27:
  _controlfp(_NewValue,0xffffffff);
  *param_7 = local_8;
  *param_4 = local_c;
  return 0;
}



/* Module: mp3plug.dll
   Function: FUN_5f700da0
   Address: 5f700da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_5f700da0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,int param_12)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_24;
  int local_20;
  
  iVar12 = 0;
  if (param_3 == 0) {
    iVar4 = 8;
  }
  else {
    iVar4 = 6;
  }
  iVar11 = 0;
  if (iVar4 != 0) {
    do {
      if (param_11 <= iVar12) break;
      iVar7 = iVar11 * 0x20;
      *(int *)(param_12 + iVar7) = iVar12;
      *(undefined4 *)(param_12 + 4 + iVar7) = *(undefined4 *)(param_4 + iVar11 * 4);
      *(int *)(param_12 + 0x10 + iVar7) = param_2 + iVar12 * 4;
      *(int *)(param_12 + 0xc + iVar7) = param_1 + iVar12 * 4;
      fVar1 = *(float *)(param_8 + iVar11 * 4);
      *(undefined4 *)(param_12 + 0x14 + iVar7) = *(undefined4 *)(param_8 + iVar11 * 4);
      bVar3 = fVar1 == _DAT_5f75f4e4;
      *(undefined4 *)(param_12 + 0x1c + iVar7) = *(undefined4 *)(param_7 + iVar11 * 4);
      if (bVar3) {
        *(undefined4 *)(param_12 + 0x18 + iVar7) = 0;
      }
      else {
        *(float *)(param_12 + 0x18 + iVar7) = _DAT_5f75f4f4 / *(float *)(param_8 + iVar11 * 4);
      }
      fVar1 = _DAT_5f75f4ec;
      iVar5 = 0;
      iVar9 = *(int *)(param_12 + 4 + iVar7);
      *(undefined4 *)(param_12 + 8 + iVar7) = 0;
      if (0 < iVar9) {
        do {
          fVar2 = *(float *)(*(int *)(param_12 + 0xc + iVar7) + iVar5 * 4);
          if (fVar1 < fVar2) {
            *(int *)(param_12 + 8 + iVar7) = iVar5;
            iVar9 = *(int *)(param_12 + 4 + iVar7);
            fVar1 = fVar2;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar9);
      }
      iVar12 = iVar12 + *(int *)(param_4 + iVar11 * 4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar4);
  }
  if (iVar11 < iVar4) {
    piVar10 = (int *)(param_4 + iVar11 * 4);
    piVar8 = (int *)(param_12 + iVar11 * 0x20);
    do {
      *piVar8 = iVar12;
      iVar7 = *piVar10;
      piVar8[5] = 0;
      piVar8[1] = iVar7;
      piVar8[7] = 0;
      piVar8[3] = param_1 + iVar12 * 4;
      piVar8[6] = 0;
      piVar8[4] = param_2 + iVar12 * 4;
      piVar8[2] = 0;
      iVar12 = iVar12 + *piVar10;
      piVar10 = piVar10 + 1;
      piVar8 = piVar8 + 8;
    } while ((int)piVar10 < param_4 + iVar4 * 4);
  }
  iVar7 = 0;
  local_20 = 3;
  local_24 = iVar4;
  if (iVar4 < param_5 * 3) {
    iVar7 = 0;
    do {
      if (param_11 <= iVar12) break;
      iVar5 = local_24 * 0x20;
      *(int *)(param_12 + iVar5) = iVar12;
      *(undefined4 *)(param_12 + 4 + iVar5) = *(undefined4 *)(param_6 + local_20 * 4);
      *(int *)(param_12 + 0x10 + iVar5) = param_2 + iVar12 * 4;
      *(int *)(param_12 + 0xc + iVar5) = param_1 + iVar12 * 4;
      iVar9 = *(int *)(param_10 + iVar7 * 4);
      bVar3 = _DAT_5f75f4d0 == *(float *)(iVar9 + local_20 * 4);
      *(undefined4 *)(param_12 + 0x14 + iVar5) = *(undefined4 *)(iVar9 + local_20 * 4);
      *(undefined4 *)(param_12 + 0x1c + iVar5) =
           *(undefined4 *)(*(int *)(param_9 + iVar7 * 4) + local_20 * 4);
      if (bVar3) {
        *(undefined4 *)(param_12 + 0x18 + iVar5) = 0;
      }
      else {
        *(float *)(param_12 + 0x18 + iVar5) =
             _DAT_5f75f4e0 / *(float *)(*(int *)(param_10 + iVar7 * 4) + local_20 * 4);
      }
      fVar1 = _DAT_5f75f4d8;
      iVar6 = 0;
      iVar9 = *(int *)(param_12 + 4 + iVar5);
      *(undefined4 *)(param_12 + 8 + iVar5) = 0;
      if (0 < iVar9) {
        do {
          fVar2 = *(float *)(*(int *)(param_12 + 0xc + iVar5) + iVar6 * 4);
          if (fVar1 < fVar2) {
            *(int *)(param_12 + 8 + iVar5) = iVar6;
            iVar9 = *(int *)(param_12 + 4 + iVar5);
            fVar1 = fVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar9);
      }
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 + *(int *)(param_6 + local_20 * 4);
      if (iVar7 == 3) {
        iVar7 = 0;
        local_20 = local_20 + 1;
      }
      local_24 = local_24 + 1;
    } while (local_24 < param_5 * 3);
  }
  if (local_24 < 0x28) {
    piVar10 = (int *)(local_24 * 0x20 + param_12);
    do {
      *piVar10 = iVar12;
      iVar9 = *(int *)(param_6 + local_20 * 4);
      piVar10[5] = 0;
      piVar10[1] = iVar9;
      piVar10[7] = 0;
      piVar10[6] = 0;
      piVar10[3] = param_1 + iVar12 * 4;
      iVar7 = iVar7 + 1;
      piVar10[4] = param_2 + iVar12 * 4;
      piVar10[2] = 0;
      iVar12 = iVar12 + *(int *)(param_6 + local_20 * 4);
      if (iVar7 == 3) {
        iVar7 = 0;
        local_20 = local_20 + 1;
      }
      piVar10 = piVar10 + 8;
    } while ((int)piVar10 < param_12 + 0x500);
  }
  if (iVar11 < iVar4) {
    local_24 = iVar11;
  }
  return local_24;
}



/* Module: mp3plug.dll
   Function: FUN_5f700bd0
   Address: 5f700bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_5f700bd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_20;
  
  iVar8 = 0;
  iVar9 = 0;
  local_20 = 0;
  local_24 = 0;
  if (0 < param_3 * 3) {
    do {
      if (param_7 <= iVar9) break;
      iVar6 = local_24 * 0x20;
      *(int *)(param_8 + iVar6) = iVar9;
      *(undefined4 *)(param_8 + 4 + iVar6) = *(undefined4 *)(param_4 + local_20 * 4);
      *(int *)(param_8 + 0x10 + iVar6) = param_2 + iVar9 * 4;
      *(int *)(param_8 + 0xc + iVar6) = param_1 + iVar9 * 4;
      iVar7 = *(int *)(param_6 + iVar8 * 4);
      bVar2 = _DAT_5f75f4a4 == *(float *)(iVar7 + local_20 * 4);
      *(undefined4 *)(param_8 + 0x14 + iVar6) = *(undefined4 *)(iVar7 + local_20 * 4);
      *(undefined4 *)(param_8 + 0x1c + iVar6) =
           *(undefined4 *)(*(int *)(param_5 + iVar8 * 4) + local_20 * 4);
      if (bVar2) {
        *(undefined4 *)(param_8 + 0x18 + iVar6) = 0;
      }
      else {
        *(float *)(param_8 + 0x18 + iVar6) =
             _DAT_5f75f4b4 / *(float *)(*(int *)(param_6 + iVar8 * 4) + local_20 * 4);
      }
      fVar3 = _DAT_5f75f4ac;
      iVar4 = 0;
      iVar7 = *(int *)(param_8 + 4 + iVar6);
      *(undefined4 *)(param_8 + 8 + iVar6) = 0;
      if (0 < iVar7) {
        do {
          fVar1 = *(float *)(*(int *)(param_8 + 0xc + iVar6) + iVar4 * 4);
          if (fVar3 < fVar1) {
            *(int *)(param_8 + 8 + iVar6) = iVar4;
            iVar7 = *(int *)(param_8 + 4 + iVar6);
            fVar3 = fVar1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + *(int *)(param_4 + local_20 * 4);
      if (iVar8 == 3) {
        iVar8 = 0;
        local_20 = local_20 + 1;
      }
      local_24 = local_24 + 1;
    } while (local_24 < param_3 * 3);
  }
  if (local_24 < 0x28) {
    piVar5 = (int *)(local_24 * 0x20 + param_8);
    do {
      *piVar5 = iVar9;
      iVar7 = *(int *)(param_4 + local_20 * 4);
      piVar5[5] = 0;
      piVar5[1] = iVar7;
      piVar5[7] = 0;
      piVar5[6] = 0;
      piVar5[3] = param_1 + iVar9 * 4;
      iVar8 = iVar8 + 1;
      piVar5[4] = param_2 + iVar9 * 4;
      piVar5[2] = 0;
      iVar9 = iVar9 + *(int *)(param_4 + local_20 * 4);
      if (iVar8 == 3) {
        iVar8 = 0;
        local_20 = local_20 + 1;
      }
      piVar5 = piVar5 + 8;
    } while ((int)piVar5 < param_8 + 0x500);
  }
  return local_24;
}



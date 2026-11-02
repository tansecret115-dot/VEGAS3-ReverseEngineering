/* Module: mp3plug.dll
   Function: FUN_5f6fdde0
   Address: 5f6fdde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6fdde0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int *param_11,int param_12,int param_13,
            int param_14)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int local_54;
  
  if (0 < param_14) {
    piVar1 = param_11 + param_14;
    iVar12 = 0;
    local_54 = 0;
    do {
      iVar6 = *param_11;
      if (iVar6 < param_12) {
        iVar11 = iVar6 * 4;
        piVar13 = (int *)(param_13 + iVar6 * 4);
        do {
          iVar6 = iVar11 + local_54 * 4;
          fVar2 = *(float *)(param_8 + iVar6);
          fVar3 = *(float *)(param_9 + iVar6);
          fVar4 = *(float *)(param_2 + iVar6);
          fVar5 = *(float *)(param_3 + iVar6);
          if (param_1 == 0) {
            fVar9 = _DAT_5f75e748 * fVar3 * fVar2 + _DAT_5f75e74c;
          }
          else {
            fVar9 = fVar3 * fVar3;
            if (fVar9 < fVar2 * fVar2) {
              fVar9 = fVar2 * fVar2;
            }
          }
          fVar8 = (fVar2 * fVar5 * fVar2 + fVar3 * fVar4 * fVar3 + *(float *)(param_10 + iVar6)) *
                  fVar9;
          iVar10 = iVar12 + *piVar13;
          if (iVar10 < iVar12 + piVar13[1]) {
            do {
              *(float *)(param_4 + iVar10 * 4) =
                   (*(float *)(param_5 + iVar10 * 4) * fVar2 +
                   *(float *)(param_4 + iVar10 * 4) * fVar3) * SQRT(fVar9);
              *(undefined4 *)(param_5 + iVar10 * 4) = 0;
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar12 + piVar13[1]);
          }
          fVar4 = fVar4 / *(float *)(param_6 + iVar6);
          fVar5 = fVar5 / *(float *)(param_7 + iVar6);
          if (fVar5 < fVar4) {
            fVar5 = fVar4;
          }
          bVar7 = _DAT_5f75e760 != fVar5;
          *(float *)(param_2 + iVar6) = fVar8;
          *(undefined4 *)(param_3 + iVar6) = 0;
          fVar2 = _DAT_5f75e768;
          if (bVar7) {
            fVar2 = fVar8 / fVar5;
          }
          piVar13 = piVar13 + 1;
          iVar11 = iVar11 + 4;
          *(float *)(param_6 + iVar6) = fVar2;
        } while ((int)piVar13 < param_13 + param_12 * 4);
      }
      param_11 = param_11 + 1;
      local_54 = local_54 + 0xd;
      iVar12 = iVar12 + 0xc0;
    } while ((int)param_11 < (int)piVar1);
  }
  return;
}



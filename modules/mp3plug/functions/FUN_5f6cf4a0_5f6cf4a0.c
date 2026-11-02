/* Module: mp3plug.dll
   Function: FUN_5f6cf4a0
   Address: 5f6cf4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6cf4a0(int *param_1,int *param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_24;
  int local_20;
  
  iVar2 = param_2[1];
  iVar3 = *param_2;
  iVar6 = param_3 / iVar2;
  local_4c = 0;
  local_40 = 0;
  *param_4 = iVar3 * iVar6;
  pfVar4 = (float *)param_2[2];
  pfVar5 = (float *)param_2[3];
  iVar9 = param_2[4];
  if (-1 < iVar2 + -1) {
    local_24 = (iVar2 + -1) * iVar3;
    local_20 = iVar2 * 4 + -4;
    do {
      iVar7 = 0;
      iVar10 = param_1[2];
      iVar8 = local_40;
      iVar11 = local_40;
      if (local_40 < iVar10) {
        do {
          iVar11 = iVar8 + iVar2;
          pfVar4[iVar7] = *(float *)(param_1[5] + iVar8 * 4);
          iVar10 = param_1[2];
          iVar7 = iVar7 + 1;
          iVar8 = iVar11;
        } while (iVar11 < iVar10);
      }
      iVar11 = iVar11 - iVar10;
      do {
        iVar10 = iVar11 * 4;
        iVar11 = iVar11 + iVar2;
        pfVar4[iVar7] = *(float *)(iVar10 * param_5 + param_6 * 4 + param_7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
      FUN_5f6d3df0(pfVar4,iVar6);
      local_34 = 0;
      if (0 < iVar3) {
        local_38 = local_20 * iVar3;
        local_3c = local_24;
        do {
          FUN_5f6d3e60(*(uint **)(param_1[7] + local_3c * 4),*(int **)(local_38 + iVar9),pfVar4,
                       pfVar5);
          if (local_40 == 0) {
            iVar10 = 0;
            iVar11 = local_34;
            if (local_34 < param_1[3]) {
              do {
                pfVar1 = pfVar5 + iVar10;
                iVar10 = iVar10 + 1;
                *(float *)(iVar11 * 4 * param_5 + param_6 * 4 + param_8) =
                     *pfVar1 + *(float *)(param_1[6] + iVar11 * 4);
                *(undefined4 *)(param_1[6] + iVar11 * 4) = 0;
                iVar11 = iVar11 + iVar3;
              } while (iVar11 < param_1[3]);
            }
            do {
              pfVar1 = pfVar5 + iVar10;
              iVar10 = iVar10 + 1;
              *(float *)(iVar11 * 4 * param_5 + param_6 * 4 + param_8) = *pfVar1;
              iVar11 = iVar11 + iVar3;
            } while (iVar10 < iVar6);
          }
          else {
            iVar10 = local_4c + local_34;
            iVar11 = *param_4;
            iVar8 = 0;
            if (iVar10 < iVar11) {
              do {
                pfVar1 = pfVar5 + iVar8;
                iVar8 = iVar8 + 1;
                iVar11 = iVar10 * 4 * param_5 + param_6 * 4;
                *(float *)(param_8 + iVar11) = *pfVar1 + *(float *)(param_8 + iVar11);
                iVar10 = iVar10 + iVar3;
                iVar11 = *param_4;
              } while (iVar10 < iVar11);
            }
            iVar10 = iVar10 - iVar11;
            for (; iVar8 < iVar6; iVar8 = iVar8 + 1) {
              *(float *)(param_1[6] + iVar10 * 4) =
                   pfVar5[iVar8] + *(float *)(param_1[6] + iVar10 * 4);
              iVar10 = iVar10 + iVar3;
            }
          }
          local_3c = local_3c + 1;
          local_38 = local_38 + 4;
          local_34 = local_34 + 1;
        } while (local_34 < iVar3);
      }
      local_40 = local_40 + *param_1;
      local_4c = local_4c + param_1[1];
      local_20 = local_20 + -4;
      local_24 = local_24 - iVar3;
    } while (-1 < local_20);
  }
  iVar3 = param_1[2];
  iVar9 = 0;
  if (0 < iVar3) {
    iVar11 = 0;
    do {
      iVar10 = iVar11 * param_5;
      iVar11 = iVar11 + 4;
      *(undefined4 *)(param_1[5] + iVar9 * 4) =
           *(undefined4 *)(iVar10 + ((iVar6 * iVar2 - iVar3) * param_5 + param_6) * 4 + param_7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1[2]);
  }
  return;
}



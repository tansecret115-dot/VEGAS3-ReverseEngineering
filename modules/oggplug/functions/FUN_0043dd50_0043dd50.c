/* Module: oggplug.dll
   Function: FUN_0043dd50
   Address: 0043dd50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043dd50(float *param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *local_14;
  float *local_10;
  int local_8;
  
  pfVar4 = param_1;
  iVar11 = (int)param_1 * param_2;
  if (0 < param_2) {
    local_10 = param_4;
    pfVar8 = param_3 + iVar11;
    param_1 = param_4 + (int)param_1 * 2 + -1;
    local_14 = (float *)param_2;
    pfVar5 = param_3;
    do {
      *local_10 = *pfVar5 + *pfVar8;
      *param_1 = *pfVar5 - *pfVar8;
      local_10 = local_10 + (int)pfVar4 * 2;
      pfVar5 = pfVar5 + (int)pfVar4;
      pfVar8 = pfVar8 + (int)pfVar4;
      param_1 = param_1 + (int)pfVar4 * 2;
      local_14 = (float *)((int)local_14 + -1);
    } while (local_14 != (float *)0x0);
  }
  if (1 < (int)pfVar4) {
    if (pfVar4 != (float *)0x2) {
      if (0 < param_2) {
        local_14 = param_3 + iVar11;
        local_10 = param_4;
        param_1 = param_3;
        pfVar8 = param_4 + (int)pfVar4 * 2;
        local_8 = param_2;
        do {
          if (2 < (int)pfVar4) {
            pfVar9 = (float *)(param_5 + 4);
            uVar10 = (int)pfVar4 - 1U >> 1;
            pfVar5 = local_14;
            pfVar6 = param_1;
            pfVar12 = pfVar8;
            pfVar13 = local_10;
            do {
              pfVar7 = pfVar6 + 2;
              fVar3 = pfVar5[2] * *pfVar9 + pfVar9[-1] * pfVar5[1];
              pfVar1 = pfVar9 + -1;
              fVar2 = *pfVar9;
              pfVar9 = pfVar9 + 2;
              uVar10 = uVar10 - 1;
              fVar2 = *pfVar1 * pfVar5[2] - fVar2 * pfVar5[1];
              pfVar13[2] = fVar2 + *pfVar7;
              pfVar12[-2] = fVar2 - *pfVar7;
              pfVar13[1] = fVar3 + pfVar6[1];
              pfVar12[-3] = pfVar6[1] - fVar3;
              pfVar5 = pfVar5 + 2;
              pfVar6 = pfVar7;
              pfVar12 = pfVar12 + -2;
              pfVar13 = pfVar13 + 2;
            } while (uVar10 != 0);
          }
          param_1 = param_1 + (int)pfVar4;
          pfVar8 = pfVar8 + (int)pfVar4 * 2;
          local_14 = local_14 + (int)pfVar4;
          local_10 = local_10 + (int)pfVar4 * 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      uVar10 = (uint)pfVar4 & 0x80000001;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
      }
      if (uVar10 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      pfVar8 = param_3 + (int)pfVar4 + -1;
      pfVar6 = param_4 + (int)pfVar4;
      pfVar5 = param_3 + (int)pfVar4 + -1 + iVar11;
      do {
        *pfVar6 = -*pfVar5;
        pfVar5 = pfVar5 + (int)pfVar4;
        pfVar6[-1] = *pfVar8;
        pfVar6 = pfVar6 + (int)pfVar4 * 2;
        pfVar8 = pfVar8 + (int)pfVar4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}



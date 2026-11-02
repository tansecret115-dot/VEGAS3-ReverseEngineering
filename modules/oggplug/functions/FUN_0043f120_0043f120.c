/* Module: oggplug.dll
   Function: FUN_0043f120
   Address: 0043f120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043f120(uint param_1,int param_2,int param_3,float *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  float *local_10;
  float *local_c;
  int local_4;
  
  uVar7 = param_1;
  iVar14 = param_1 * param_2;
  iVar11 = 0;
  param_1 = 0;
  if (0 < param_2) {
    local_c = (float *)param_2;
    pfVar8 = param_4 + iVar14;
    pfVar10 = param_4;
    do {
      iVar2 = iVar11 + -1 + uVar7 * 2;
      *pfVar10 = *(float *)(param_3 + iVar2 * 4) + *(float *)(param_3 + iVar11 * 4);
      iVar1 = iVar11 * 4;
      param_1 = param_1 + uVar7;
      pfVar10 = pfVar10 + uVar7;
      iVar11 = param_1 * 2;
      *pfVar8 = *(float *)(param_3 + iVar1) - *(float *)(param_3 + iVar2 * 4);
      pfVar8 = pfVar8 + uVar7;
      local_c = (float *)((int)local_c + -1);
    } while (local_c != (float *)0x0);
  }
  if (1 < (int)uVar7) {
    if (uVar7 != 2) {
      iVar11 = 0;
      param_1 = 0;
      if (0 < param_2) {
        local_4 = param_2;
        local_c = param_4;
        local_10 = param_4 + iVar14;
        do {
          if (2 < (int)uVar7) {
            uVar16 = uVar7 - 1 >> 1;
            pfVar8 = (float *)(param_3 + iVar11 * 4);
            pfVar10 = (float *)(param_3 + (iVar11 + uVar7 * 2) * 4);
            pfVar13 = (float *)(param_5 + 4);
            pfVar15 = local_10;
            pfVar17 = local_c;
            do {
              pfVar9 = pfVar8 + 2;
              pfVar12 = pfVar10 + -2;
              uVar16 = uVar16 - 1;
              pfVar17[1] = pfVar8[1] + pfVar10[-3];
              fVar3 = pfVar8[1];
              fVar4 = pfVar10[-3];
              pfVar17[2] = *pfVar9 - *pfVar12;
              fVar5 = *pfVar12;
              fVar6 = *pfVar9;
              pfVar15[1] = (fVar3 - fVar4) * pfVar13[-1] - (fVar5 + fVar6) * *pfVar13;
              pfVar15[2] = (fVar5 + fVar6) * pfVar13[-1] + (fVar3 - fVar4) * *pfVar13;
              pfVar8 = pfVar9;
              pfVar10 = pfVar12;
              pfVar13 = pfVar13 + 2;
              pfVar15 = pfVar15 + 2;
              pfVar17 = pfVar17 + 2;
            } while (uVar16 != 0);
          }
          param_1 = param_1 + uVar7;
          local_10 = local_10 + uVar7;
          local_c = local_c + uVar7;
          iVar11 = param_1 * 2;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      uVar16 = uVar7 & 0x80000001;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xfffffffe) + 1;
      }
      if (uVar16 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      pfVar10 = (float *)(param_3 + -4 + uVar7 * 4);
      pfVar13 = param_4 + (uVar7 - 1);
      pfVar8 = param_4 + (uVar7 - 1) + iVar14;
      do {
        *pfVar13 = *pfVar10 + *pfVar10;
        pfVar15 = pfVar10 + 1;
        pfVar13 = pfVar13 + uVar7;
        pfVar10 = pfVar10 + uVar7 * 2;
        *pfVar8 = -(*pfVar15 + *pfVar15);
        pfVar8 = pfVar8 + uVar7;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}



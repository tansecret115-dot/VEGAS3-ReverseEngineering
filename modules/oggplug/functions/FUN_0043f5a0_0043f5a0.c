/* Module: oggplug.dll
   Function: FUN_0043f5a0
   Address: 0043f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0043f5a0(uint param_1,int param_2,float *param_3,float *param_4,int param_5,int param_6,
            float *param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  float *pfVar29;
  float *local_4c;
  float *local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  float *local_38;
  int local_30;
  uint local_10;
  int local_c;
  
  iVar20 = param_1 * param_2;
  if (0 < param_2) {
    local_44 = param_4 + iVar20;
    pfVar18 = param_3 + param_1 * 2;
    local_3c = param_4 + iVar20 * 2;
    local_40 = param_4;
    local_48 = param_3;
    local_38 = param_4 + iVar20 * 3;
    local_4c = param_3 + param_1 * 4 + -1;
    local_30 = param_2;
    do {
      fVar6 = pfVar18[-1] + pfVar18[-1];
      fVar7 = *pfVar18 + *pfVar18;
      fVar2 = *local_48;
      fVar3 = *local_4c;
      fVar4 = *local_48;
      fVar5 = *local_4c;
      *local_40 = fVar4 + fVar5 + fVar6;
      *local_44 = (fVar2 - fVar3) - fVar7;
      *local_3c = (fVar4 + fVar5) - fVar6;
      *local_38 = (fVar2 - fVar3) + fVar7;
      local_40 = local_40 + param_1;
      local_44 = local_44 + param_1;
      local_3c = local_3c + param_1;
      local_38 = local_38 + param_1;
      pfVar18 = pfVar18 + param_1 * 4;
      local_4c = local_4c + param_1 * 4;
      local_48 = local_48 + param_1 * 4;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      local_4c = (float *)0x0;
      if (0 < param_2) {
        local_40 = (float *)0x0;
        local_30 = iVar20 * 3;
        local_c = param_2;
        do {
          iVar1 = (int)local_4c * 4 + param_1 * 2;
          if (2 < (int)param_1) {
            iVar25 = (int)local_4c * 4 - (int)local_40;
            local_10 = param_1 - 1 >> 1;
            pfVar18 = (float *)(param_5 + 4);
            pfVar21 = param_3 + iVar1;
            pfVar23 = param_3 + (int)local_4c * 4;
            pfVar26 = param_7;
            pfVar19 = param_3 + iVar1;
            pfVar29 = param_3 + iVar1 + param_1 * 2;
            local_48 = param_4 + (iVar20 * 2 - (int)local_40) + (int)local_4c * 4;
            local_44 = param_4 + local_30 + (int)local_4c * 4;
            local_3c = param_4 + iVar25 + iVar20;
            local_38 = param_4 + iVar25;
            do {
              pfVar24 = pfVar23 + 2;
              pfVar22 = pfVar21 + 2;
              pfVar27 = pfVar19 + -2;
              fVar2 = *pfVar24;
              fVar3 = pfVar29[-2];
              fVar4 = *pfVar24;
              fVar5 = pfVar29[-2];
              fVar6 = *pfVar22;
              fVar7 = *pfVar27;
              fVar8 = *pfVar22;
              fVar9 = *pfVar27;
              fVar10 = pfVar23[1];
              fVar11 = pfVar29[-3];
              fVar12 = pfVar23[1];
              fVar13 = pfVar29[-3];
              fVar14 = pfVar21[1];
              fVar15 = pfVar19[-3];
              fVar16 = pfVar21[1];
              fVar17 = pfVar19[-3];
              local_38[1] = fVar12 + fVar13 + fVar16 + fVar17;
              fVar12 = (fVar12 + fVar13) - (fVar16 + fVar17);
              local_38[2] = (fVar6 - fVar7) + (fVar4 - fVar5);
              fVar5 = (fVar4 - fVar5) - (fVar6 - fVar7);
              fVar6 = (fVar10 - fVar11) - (fVar8 + fVar9);
              fVar7 = (fVar10 - fVar11) + fVar8 + fVar9;
              fVar4 = (fVar14 - fVar15) + fVar2 + fVar3;
              fVar2 = (fVar2 + fVar3) - (fVar14 - fVar15);
              local_3c[1] = fVar6 * pfVar18[-1] - fVar4 * *pfVar18;
              local_3c[2] = fVar4 * pfVar18[-1] + fVar6 * *pfVar18;
              local_48[1] = fVar12 * *(float *)((int)pfVar26 + (param_6 - (int)param_7)) -
                            fVar5 * *(float *)((int)pfVar18 + (param_6 - param_5));
              local_48[2] = fVar12 * *(float *)((int)pfVar18 + (param_6 - param_5)) +
                            fVar5 * *(float *)((int)pfVar26 + (param_6 - (int)param_7));
              local_44[1] = fVar7 * *pfVar26 -
                            fVar2 * *(float *)((int)pfVar18 + ((int)param_7 - param_5));
              local_44[2] = fVar7 * *(float *)((int)pfVar18 + ((int)param_7 - param_5)) +
                            fVar2 * *pfVar26;
              local_10 = local_10 - 1;
              pfVar18 = pfVar18 + 2;
              pfVar21 = pfVar22;
              pfVar23 = pfVar24;
              pfVar26 = pfVar26 + 2;
              pfVar19 = pfVar27;
              pfVar29 = pfVar29 + -2;
              local_48 = local_48 + 2;
              local_44 = local_44 + 2;
              local_3c = local_3c + 2;
              local_38 = local_38 + 2;
            } while (local_10 != 0);
          }
          local_4c = (float *)((int)local_4c + param_1);
          local_40 = (float *)((int)local_40 + param_1 * 3);
          local_30 = local_30 + param_1 * -3;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      uVar28 = param_1 & 0x80000001;
      if ((int)uVar28 < 0) {
        uVar28 = (uVar28 - 1 | 0xfffffffe) + 1;
      }
      if (uVar28 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      pfVar23 = param_4 + (param_1 - 1);
      pfVar18 = param_3 + param_1;
      pfVar21 = param_3 + param_1 * 3;
      pfVar26 = param_4 + (param_1 - 1) + iVar20 * 2;
      pfVar19 = param_4 + (param_1 - 1) + iVar20 * 3;
      param_4 = param_4 + (param_1 - 1) + iVar20;
      do {
        fVar2 = *pfVar21;
        fVar3 = *pfVar18;
        fVar4 = *pfVar21;
        fVar5 = *pfVar18;
        fVar6 = pfVar18[-1];
        fVar7 = pfVar21[-1];
        *pfVar23 = pfVar21[-1] + pfVar18[-1] + pfVar21[-1] + pfVar18[-1];
        pfVar23 = pfVar23 + param_1;
        *param_4 = ((fVar6 - fVar7) - (fVar2 + fVar3)) * _DAT_004532bc;
        param_4 = param_4 + param_1;
        pfVar18 = pfVar18 + param_1 * 4;
        pfVar21 = pfVar21 + param_1 * 4;
        *pfVar26 = (fVar4 - fVar5) + (fVar4 - fVar5);
        pfVar26 = pfVar26 + param_1;
        *pfVar19 = -((fVar2 + fVar3 + (fVar6 - fVar7)) * _DAT_004532bc);
        pfVar19 = pfVar19 + param_1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}



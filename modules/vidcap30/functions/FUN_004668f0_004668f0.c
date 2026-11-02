/* Module: vidcap30.exe
   Function: FUN_004668f0
   Address: 004668f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00466d17) */

undefined4 __fastcall FUN_004668f0(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bVar19;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int iVar20;
  uint uVar21;
  byte bStack_151;
  byte bStack_149;
  int aiStack_134 [12];
  undefined1 local_104 [260];
  
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (0 < *(int *)(param_1 + 0xec)) {
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
  }
  if ((((((*(uint *)(param_1 + 0xd0) & 0x80) != 0) && (*(int *)(param_1 + 0xec) == 0)) &&
       (iVar16 = FUN_0045c430(local_104,0x104), -1 < iVar16)) &&
      (iVar16 = (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))(local_104), iVar16 == 0)) ||
     ((((*(uint *)(param_1 + 0xd0) & 0x40) != 0 && (*(int *)(param_1 + 0xec) == 0)) &&
      (iVar16 = (**(code **)(**(int **)(param_1 + 0xe4) + 0x20))(), iVar16 != 0))))
  goto LAB_00466ddd;
  iVar16 = *(int *)(param_1 + 200);
  iVar20 = (iVar16 + 1) % *(int *)(param_1 + 0xc4);
  if ((*(uint *)(param_1 + 0xd0) & 0x20) == 0) {
LAB_004669de:
    if ((*(uint *)(param_1 + 0xd0) & 1) != 0) {
      iVar7 = *(int *)(param_1 + 0xbc);
      puVar1 = (uint *)(iVar7 + iVar16 * 0x58);
      iVar5 = iVar7 + iVar20 * 0x58;
      uVar6 = *(uint *)(iVar7 + iVar20 * 0x58);
      if (((((uVar6 ^ *puVar1) & 2) == 0) && ((uVar6 & 2) != 0)) &&
         ((*(uint *)(iVar5 + 4) != puVar1[1] || (*(uint *)(iVar5 + 8) != puVar1[2]))))
      goto LAB_00466dce;
    }
    if (((((*(uint *)(param_1 + 0xd0) & 8) == 0) ||
         (pbVar2 = (byte *)(*(int *)(param_1 + 0xbc) + iVar20 * 0x58), (*pbVar2 & 8) == 0)) ||
        (*(int *)(pbVar2 + 0x10) == 0)) || (*(int *)(pbVar2 + 0x14) != -0x3f7f7f40)) {
      if ((*(uint *)(param_1 + 0xd0) & 2) != 0) {
        iVar8 = *(int *)(param_1 + 0xbc);
        iVar5 = iVar8 + iVar16 * 0x58;
        iVar7 = iVar8 + iVar20 * 0x58;
        uVar6 = *(uint *)(iVar8 + iVar20 * 0x58);
        if (((((uVar6 ^ *(uint *)(iVar8 + iVar16 * 0x58)) & 0x10) == 0) && ((uVar6 & 0x10) != 0)) &&
           ((*(int *)(iVar7 + 0x18) != *(int *)(iVar5 + 0x18) ||
            (iVar16 = FUN_00466e00(iVar7 + 0x30,iVar5 + 0x30), iVar16 != 0)))) goto LAB_00466dce;
      }
      bVar10 = true;
      if ((*(uint *)(param_1 + 0xd0) & 4) == 0) {
        return 0;
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 200) * 0x58);
      puVar3 = (uint *)(*(int *)(param_1 + 0xbc) + iVar20 * 0x58);
      if (((*puVar3 ^ *puVar1) & 0x20) != 0) {
        return 0;
      }
      if ((*puVar3 & 0x20) == 0) {
        return 0;
      }
      if (puVar3[7] != puVar1[7]) {
        uVar6 = puVar1[7];
        uVar9 = puVar3[7];
        bStack_151 = (byte)(uVar6 >> 0x18);
        bStack_149 = (byte)(uVar9 >> 0x18);
        if (((bStack_151 & 0xf0) != 0xf0) || (bVar11 = false, (bStack_151 & 0xf) != 0xf)) {
          bVar11 = true;
        }
        if (((bStack_149 & 0xf0) != 0xf0) || (bVar12 = false, (bStack_149 & 0xf) != 0xf)) {
          bVar12 = true;
        }
        bVar19 = (byte)(uVar6 >> 0x10);
        if (((bVar19 & 0x10) == 0x10) && ((bVar19 & 0xf) == 0xf)) {
          bVar10 = false;
        }
        bVar19 = (byte)(uVar9 >> 0x10);
        if (((bVar19 & 0x10) == 0x10) && ((bVar19 & 0xf) == 0xf)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        bVar19 = (byte)(uVar6 >> 8);
        if (((bVar19 & 0x30) == 0x30) && ((bVar19 & 0xf) == 0xf)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        bVar19 = (byte)(uVar9 >> 8);
        if (((bVar19 & 0x30) == 0x30) && ((bVar19 & 0xf) == 0xf)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if (!bVar11) {
          return 0;
        }
        if (!bVar12) {
          return 0;
        }
        if (!bVar10) {
          return 0;
        }
        if (!bVar13) {
          return 0;
        }
        if (!bVar14) {
          return 0;
        }
        if (!bVar15) {
          return 0;
        }
        uVar4 = (bStack_151 & 0xf) + (uint)(bStack_151 >> 4) * 10;
        if (uVar4 == (bStack_149 & 0xf) + (uint)(bStack_149 >> 4) * 10) {
          uVar17 = (uVar6 >> 0x10 & 0xf) + ((uVar6 >> 0x10 & 0xff) >> 4 & 1) * 10;
          uVar21 = (uVar9 >> 0x10 & 0xf) + ((uVar9 >> 0x10 & 0xff) >> 4 & 1) * 10;
          if ((((uVar17 != 0) && (uVar17 < 0xd)) && (uVar21 != 0)) && (uVar21 < 0xd)) {
            aiStack_134[0] = 0x1f;
            aiStack_134[1] = 0x1c;
            aiStack_134[2] = 0x1f;
            aiStack_134[3] = 0x1e;
            aiStack_134[4] = 0x1f;
            aiStack_134[5] = 0x1e;
            aiStack_134[6] = 0x1f;
            aiStack_134[7] = 0x1f;
            aiStack_134[8] = 0x1e;
            aiStack_134[9] = 0x1f;
            aiStack_134[10] = 0x1e;
            aiStack_134[0xb] = 0x1f;
            if ((uVar4 & 0x80000003) == 0) {
              aiStack_134[1] = 0x1d;
            }
            iVar20 = 0;
            iVar16 = 0;
            if (uVar17 != 0) {
              piVar18 = aiStack_134;
              do {
                iVar5 = *piVar18;
                piVar18 = piVar18 + 1;
                iVar20 = iVar20 + iVar5;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            if (uVar21 != 0) {
              piVar18 = aiStack_134;
              do {
                iVar5 = *piVar18;
                piVar18 = piVar18 + 1;
                iVar16 = iVar16 + iVar5;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            if ((iVar20 + (uVar6 >> 8 & 0xf) + 1 + ((uVar6 >> 8 & 0xff) >> 4 & 3) * 10 ==
                 iVar16 + (uVar9 >> 8 & 0xf) + ((uVar9 >> 8 & 0xff) >> 4 & 3) * 10) &&
               ((int)((puVar3[8] - puVar1[8]) + 0x15180) < 2)) {
              return 0;
            }
          }
        }
        goto LAB_00466dce;
      }
      if ((int)(puVar3[8] - puVar1[8]) < 2) {
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0xe8) = 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xbc);
    puVar1 = (uint *)(iVar5 + iVar16 * 0x58);
    uVar6 = *(uint *)(iVar5 + iVar20 * 0x58);
    if (((((uVar6 ^ *puVar1) & 4) != 0) || ((uVar6 & 4) == 0)) ||
       (*(uint *)(iVar5 + iVar20 * 0x58 + 0xc) == puVar1[3])) goto LAB_004669de;
LAB_00466dce:
    *(undefined4 *)(param_1 + 0xe8) = 1;
  }
LAB_00466ddd:
  *(undefined4 *)(param_1 + 0xec) = 0x14;
  return 1;
}



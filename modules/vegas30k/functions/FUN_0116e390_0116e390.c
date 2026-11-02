/* Module: vegas30k.dll
   Function: FUN_0116e390
   Address: 0116e390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0116e390(int param_1,undefined1 *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int local_54;
  int local_50;
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_28;
  
  iVar1 = *(int *)(param_1 + 0x1d1);
  iVar2 = *(int *)(param_1 + 0x149);
  iVar3 = *(int *)(iVar1 + 0x18);
  iVar4 = *(int *)(iVar1 + 0x22);
  iVar5 = *(int *)(param_1 + 0x8e);
  piVar6 = *(int **)(param_1 + 0xa6);
  iVar7 = *piVar6;
  iVar8 = piVar6[1];
  iVar9 = piVar6[2];
  if (0 < param_4) {
    local_28 = param_4;
    iVar18 = (int)param_2 - (int)param_3;
    do {
      pbVar12 = *(byte **)((int)param_3 + iVar18);
      param_2 = (undefined1 *)*param_3;
      if (*(char *)(iVar1 + 0x21) == '\0') {
        psVar17 = *(short **)(iVar1 + 0x1d);
        local_38 = 1;
        param_4 = 3;
        *(undefined1 *)(iVar1 + 0x21) = 1;
      }
      else {
        local_38 = -1;
        param_4 = -3;
        *(undefined1 *)(iVar1 + 0x21) = 0;
        pbVar12 = pbVar12 + iVar5 * 3 + -3;
        param_2 = param_2 + iVar5 + -1;
        psVar17 = (short *)(*(int *)(iVar1 + 0x1d) + (iVar5 * 3 + 3) * 2);
      }
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      iVar19 = 0;
      iVar21 = 0;
      iVar20 = 0;
      local_4c = 0;
      local_4c._0_2_ = 0;
      local_50 = 0;
      local_50._0_2_ = 0;
      local_54 = 0;
      local_54._0_2_ = 0;
      for (iVar10 = iVar5; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar13 = (uint)*(byte *)(*(int *)(iVar4 + (psVar17[param_4] + 8 + iVar20 >> 4) * 4) +
                                 (uint)*pbVar12 + iVar2);
        uVar14 = (uint)*(byte *)(*(int *)(iVar4 + (psVar17[param_4 + 1] + 8 + iVar21 >> 4) * 4) +
                                 (uint)pbVar12[1] + iVar2);
        uVar15 = (uint)*(byte *)(*(int *)(iVar4 + (psVar17[param_4 + 2] + 8 + iVar19 >> 4) * 4) +
                                 (uint)pbVar12[2] + iVar2);
        iVar19 = (int)uVar14 >> 2;
        iVar16 = (int)uVar15 >> 3;
        iVar11 = iVar19 * 0x20 + iVar16;
        iVar21 = (int)uVar13 >> 3;
        iVar20 = *(int *)(iVar3 + iVar21 * 4);
        if (*(short *)(iVar20 + iVar11 * 2) == 0) {
          FUN_0116df10(param_1,iVar21,iVar19,iVar16);
        }
        iVar20 = *(ushort *)(iVar20 + iVar11 * 2) - 1;
        *param_2 = (char)iVar20;
        iVar16 = uVar13 - *(byte *)(iVar20 + iVar7);
        iVar22 = uVar14 - *(byte *)(iVar20 + iVar8);
        iVar11 = uVar15 - *(byte *)(iVar20 + iVar9);
        *psVar17 = (short)local_54 + (short)iVar16 * 3;
        local_54 = local_44 + iVar16 * 5;
        iVar20 = iVar16 * 7;
        psVar17[1] = (short)local_50 + (short)iVar22 * 3;
        local_50 = local_40 + iVar22 * 5;
        iVar21 = iVar22 * 7;
        psVar17[2] = (short)local_4c + (short)iVar11 * 3;
        local_4c = local_3c + iVar11 * 5;
        iVar19 = iVar11 * 7;
        pbVar12 = pbVar12 + param_4;
        psVar17 = psVar17 + param_4;
        param_2 = param_2 + local_38;
        local_3c = iVar11;
        local_40 = iVar22;
        local_44 = iVar16;
      }
      *psVar17 = (short)local_54;
      psVar17[1] = (short)local_50;
      psVar17[2] = (short)local_4c;
      param_3 = param_3 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  return;
}



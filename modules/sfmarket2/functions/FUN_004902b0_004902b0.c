/* Module: sfmarket2.dll
   Function: FUN_004902b0
   Address: 004902b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004902b0(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar4 = *(int *)(param_1 + 0x55);
  iVar5 = *(int *)(*(int *)(param_1 + 0x17d) + 8);
  if (-1 < param_5 + -1) {
    iVar6 = param_4 << 2;
    param_4 = param_5;
    do {
      pbVar10 = (byte *)*param_2;
      piVar1 = (int *)(param_3[2] + iVar6);
      param_2 = param_2 + 1;
      piVar2 = (int *)(iVar6 + param_3[3]);
      puVar11 = *(undefined1 **)(iVar6 + *param_3);
      piVar3 = (int *)(iVar6 + param_3[1]);
      iVar6 = iVar6 + 4;
      if (iVar4 != 0) {
        iVar13 = *piVar3 - (int)puVar11;
        iVar7 = *piVar2 - (int)puVar11;
        iVar8 = *piVar1 - (int)puVar11;
        param_5 = iVar4;
        do {
          iVar9 = 0xff - (uint)*pbVar10;
          iVar12 = 0xff - (uint)pbVar10[1];
          iVar14 = 0xff - (uint)pbVar10[2];
          puVar11[iVar7] = pbVar10[3];
          pbVar10 = pbVar10 + 4;
          *puVar11 = (char)((uint)(*(int *)(iVar5 + 0x800 + iVar14 * 4) +
                                   *(int *)(iVar5 + 0x400 + iVar12 * 4) +
                                  *(int *)(iVar5 + iVar9 * 4)) >> 0x10);
          puVar11[iVar13] =
               (char)((uint)(*(int *)(iVar5 + 0x1400 + iVar14 * 4) +
                             *(int *)(iVar5 + 0x1000 + iVar12 * 4) +
                            *(int *)(iVar5 + 0xc00 + iVar9 * 4)) >> 0x10);
          puVar11[iVar8] =
               (char)((uint)(*(int *)(iVar5 + 0x1c00 + iVar14 * 4) +
                             *(int *)(iVar5 + 0x1800 + iVar12 * 4) +
                            *(int *)(iVar5 + 0x1400 + iVar9 * 4)) >> 0x10);
          puVar11 = puVar11 + 1;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



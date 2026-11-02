/* Module: vegas30k.dll
   Function: FUN_010e1810
   Address: 010e1810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010e1810(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  int local_28;
  int local_1c;
  ushort *local_10;
  
  puVar10 = *(ushort **)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0xc);
  local_28 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x1c);
  puVar11 = puVar10;
  if (0 < local_28) {
    do {
      if (0 < iVar3) {
        local_10 = puVar11 + 1;
        puVar5 = puVar10;
        local_1c = iVar3;
        do {
          uVar1 = ((uint)*puVar5 +
                  (uint)puVar5[2] + (uint)*(ushort *)(((int)puVar10 - (int)puVar11) + (int)local_10)
                  ) / 3 + 1;
          uVar12 = (uint)*(ushort *)(iVar4 + uVar1 * 2);
          iVar6 = (int)(((ulonglong)(uint)puVar5[2] * (ulonglong)uVar12) / (ulonglong)uVar1);
          iVar7 = (int)(((ulonglong)*(ushort *)(((int)puVar10 - (int)puVar11) + (int)local_10) *
                        (ulonglong)uVar12) / (ulonglong)uVar1);
          iVar8 = (int)(((ulonglong)*puVar5 * (ulonglong)uVar12) / (ulonglong)uVar1);
          if (iVar8 + iVar7 + iVar6 < 0x2fffe) {
            if (0xffff < iVar6) {
              iVar9 = iVar6 + -0xffff;
              iVar6 = 0xffff;
              iVar9 = iVar9 / 2;
              iVar8 = iVar8 + iVar9;
              iVar7 = iVar7 + iVar9;
            }
            if (0xffff < iVar7) {
              iVar9 = iVar7 + -0xffff;
              iVar7 = 0xffff;
              iVar9 = iVar9 / 2;
              iVar6 = iVar6 + iVar9;
              iVar8 = iVar8 + iVar9;
              if (0xffff < iVar6) {
                iVar8 = iVar8 + -0xffff + iVar6;
                iVar6 = 0xffff;
              }
            }
            if (0xffff < iVar8) {
              iVar9 = iVar8 + -0xffff;
              iVar8 = 0xffff;
              iVar9 = iVar9 / 2;
              iVar6 = iVar6 + iVar9;
              iVar7 = iVar7 + iVar9;
              if (0xffff < iVar6) {
                iVar7 = iVar6 + -0xffff;
                iVar6 = 0xffff;
              }
              if (0xffff < iVar7) {
                iVar6 = iVar6 + -0xffff;
                iVar7 = 0xffff;
              }
            }
            local_10[1] = (ushort)iVar6;
            *local_10 = (ushort)iVar7;
            local_10[-1] = (ushort)iVar8;
          }
          else {
            local_10[1] = 0xffff;
            *local_10 = 0xffff;
            local_10[-1] = 0xffff;
          }
          local_10 = local_10 + 4;
          puVar5 = puVar5 + 4;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      puVar10 = (ushort *)((int)puVar10 + iVar2);
      local_28 = local_28 + -1;
      puVar11 = (ushort *)((int)puVar11 + iVar2);
    } while (local_28 != 0);
  }
  return 0;
}



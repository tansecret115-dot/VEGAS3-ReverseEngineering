/* Module: mpgaout.dll
   Function: FUN_10005518
   Address: 10005518
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005518(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 *local_20;
  int local_14;
  int local_10;
  
  iVar3 = *(int *)(param_4 + 0x10);
  iVar4 = *(int *)(param_4 + 0x14);
  FUN_1000ac58(*(int *)(param_1 + 0x44e00),0x400);
  piVar5 = *(int **)(param_1 + 0x44e00);
  local_20 = (undefined1 *)(piVar5[10] + *piVar5);
  uVar13 = 8 - piVar5[0xb];
  uVar11 = piVar5[9];
  local_14 = 0;
LAB_10005574:
  local_10 = 0;
  iVar10 = local_14 + 1;
LAB_10005588:
  iVar8 = local_10 + 1;
  iVar7 = 0;
LAB_100055f9:
  iVar12 = iVar7;
  if (local_10 < iVar4) {
    if (iVar3 <= iVar12) goto LAB_10005610;
  }
  else if (0 < iVar12) goto LAB_10005610;
  iVar6 = *(int *)(param_3 + iVar12 * 0x80 + local_10 * 4);
  iVar7 = iVar12 + 1;
  if (iVar6 != 0) {
    uVar13 = iVar6 + 1 + uVar13;
    uVar11 = uVar11 << ((char)iVar6 + 1U & 0x1f) |
             *(uint *)(iVar12 * 0x1200 + param_2 + local_14 * 0x80 + local_10 * 4);
    while (7 < (int)uVar13) {
      uVar13 = uVar13 - 8;
      *local_20 = (char)(uVar11 >> ((byte)uVar13 & 0x1f));
      local_20 = local_20 + 1;
    }
  }
  goto LAB_100055f9;
LAB_10005610:
  local_10 = iVar8;
  if (0x1f < iVar8) goto code_r0x10005621;
  goto LAB_10005588;
code_r0x10005621:
  local_14 = iVar10;
  if (0xb < iVar10) {
    piVar5 = *(int **)(param_1 + 0x44e00);
    uVar9 = (uVar13 - 8) + (int)(local_20 + (-piVar5[10] - *piVar5)) * 8 + piVar5[0xb];
    puVar1 = (uint *)(piVar5 + 0xe);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar9;
    piVar5[0xf] = piVar5[0xf] + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar2,uVar9);
    (*(int **)(param_1 + 0x44e00))[10] = (int)local_20 - **(int **)(param_1 + 0x44e00);
    *(uint *)(*(int *)(param_1 + 0x44e00) + 0x2c) = 8 - (uVar13 & 7);
    *(uint *)(*(int *)(param_1 + 0x44e00) + 0x24) = uVar11 & 0xff;
    return;
  }
  goto LAB_10005574;
}



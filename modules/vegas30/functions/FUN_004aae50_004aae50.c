/* Module: vegas30.exe
   Function: FUN_004aae50
   Address: 004aae50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aae50(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  
  piVar5 = param_2;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_004abac0(param_1 + 0x16c);
  }
  iVar1 = *param_2;
  iVar6 = FUN_004aaca0(iVar1);
  if (iVar6 == 0) {
    return 0;
  }
  FUN_004aad00(iVar6,*(undefined4 *)(param_1 + 0xbc8));
  FUN_005c8ad0(param_2,1);
  iVar9 = 0;
  iVar7 = *(int *)param_2[2];
  iVar2 = *(int *)(*(int *)(iVar7 + 8) + 0x18);
  if (0 < iVar1) {
    do {
      if ((*(uint *)(iVar7 + 0x10) & 0x400) != 0x400) break;
      _SfList_MoveRange_16(param_2,0,iVar1 + -1,1);
      iVar9 = iVar9 + 1;
      iVar7 = *(int *)param_2[2];
    } while (iVar9 < iVar1);
  }
  uVar10 = 0;
  if (0 < iVar1) {
    param_2 = (int *)(iVar6 + 0x70);
    do {
      iVar7 = *(int *)(piVar5[2] + uVar10 * 4);
      puVar8 = (uint *)(-(uint)(uVar10 < *(uint *)(iVar6 + 8)) & (uint)param_2);
      uVar3 = *puVar8;
      uVar4 = (uint)((byte)((uint)*(undefined4 *)(iVar7 + 0x10) >> 8) & 4 | 0x10);
      *puVar8 = uVar4 | uVar3 & 0xfffffff8;
      *puVar8 = *(uint *)(iVar7 + 0x10) >> 0x11 & 0x80 | uVar4 | uVar3 & 0xffffff78;
      puVar8[0x15] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[6] = *(uint *)(iVar7 + 0x18);
      puVar8[7] = *(uint *)(iVar7 + 0x1c);
      puVar8[8] = *(uint *)(iVar7 + 0x20);
      puVar8[9] = *(uint *)(iVar7 + 0x24);
      puVar8[2] = *(uint *)(iVar7 + 4);
      puVar8[0xf] = *(uint *)(iVar7 + 8);
      uVar3 = *(uint *)(*(int *)(iVar7 + 8) + 0x18);
      puVar8[0xe] = uVar3;
      puVar8[4] = uVar3 - iVar2;
      iVar9 = *(int *)(iVar6 + 0xa8);
      puVar8[0x19] = (uint)&LAB_004a9de0;
      puVar8[5] = puVar8[0xe] - iVar9;
      if ((*(uint *)(iVar7 + 0x10) & 0x1000000) != 0) {
        puVar8[0x19] = (uint)&LAB_004a9e10;
      }
      if (iVar7 == *(int *)(param_1 + 0xcec)) {
        *(uint *)(iVar6 + 0xc) = uVar10;
      }
      uVar10 = uVar10 + 1;
      param_2 = (int *)((int)param_2 + 0x68);
    } while ((int)uVar10 < iVar1);
  }
  *(undefined4 *)(iVar6 + 0x48) = 2;
  return iVar6;
}



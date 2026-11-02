/* Module: aviplug.dll
   Function: FUN_5f976e10
   Address: 5f976e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f976e10(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar7 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  param_1[1] = uVar2 + uVar1;
  uVar9 = (ulonglong)uVar7 & 0x3f;
  iVar10 = 0x40 - (int)uVar9;
  puVar5 = (ulonglong *)(*param_1 + (uVar2 >> 3 & 0xfffffff8));
  iVar3 = (int)((ulonglong)uVar2 & 0x3f);
  uVar8 = (ulonglong)(0x40 - iVar3);
  puVar4 = (ulonglong *)(param_2[2] + (uVar7 >> 3 & 0xfffffff8));
  if ((puVar4 != puVar5) || (iVar10 < 0x40)) {
    uVar9 = *puVar4 << uVar9;
    uVar7 = iVar3 + iVar10;
    uVar6 = *puVar5 & -1L << uVar8 | uVar9 >> ((ulonglong)uVar2 & 0x3f);
    iVar3 = uVar1 - iVar10;
    if (0x3f < (int)uVar7) {
      *puVar5 = uVar6;
      uVar7 = uVar7 - 0x40;
      puVar5 = puVar5 + 1;
      uVar6 = uVar9 << uVar8;
      iVar10 = 0x40;
    }
    while (puVar4 = puVar4 + 1, 0 < iVar3) {
      uVar9 = uVar6 | *puVar4 >> (ulonglong)uVar7;
      uVar6 = *puVar4 << (ulonglong)(0x40 - uVar7);
      *puVar5 = uVar9;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 - iVar10;
      iVar10 = 0x40;
    }
    *puVar5 = uVar6;
  }
  return;
}



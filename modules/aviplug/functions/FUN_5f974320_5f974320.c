/* Module: aviplug.dll
   Function: FUN_5f974320
   Address: 5f974320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f974320(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(param_2 + 4) - param_3;
  *(uint *)(param_1 + 4) = uVar1 + iVar2;
  iVar10 = 0x40 - (int)((ulonglong)param_3 & 0x3f);
  puVar4 = (ulonglong *)(*(int *)(param_1 + 8) + (uVar1 >> 3 & 0xfffffff8));
  iVar8 = (int)((ulonglong)uVar1 & 0x3f);
  uVar6 = (ulonglong)(0x40 - iVar8);
  puVar3 = (ulonglong *)(*(int *)(param_2 + 8) + (param_3 >> 3 & 0xfffffff8));
  if ((puVar3 != puVar4) || (iVar10 < 0x40)) {
    uVar7 = *puVar3 << ((ulonglong)param_3 & 0x3f);
    uVar9 = iVar8 + iVar10;
    uVar5 = *puVar4 & -1L << uVar6 | uVar7 >> ((ulonglong)uVar1 & 0x3f);
    iVar2 = iVar2 - iVar10;
    if (0x3f < (int)uVar9) {
      *puVar4 = uVar5;
      uVar9 = uVar9 - 0x40;
      puVar4 = puVar4 + 1;
      uVar5 = uVar7 << uVar6;
      iVar10 = 0x40;
    }
    while (0 < iVar2) {
      puVar3 = puVar3 + 1;
      uVar6 = uVar5 | *puVar3 >> (ulonglong)uVar9;
      uVar5 = *puVar3 << (ulonglong)(0x40 - uVar9);
      *puVar4 = uVar6;
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 - iVar10;
      iVar10 = 0x40;
    }
    *puVar4 = uVar5;
  }
  return;
}



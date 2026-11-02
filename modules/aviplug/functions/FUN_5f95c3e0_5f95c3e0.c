/* Module: aviplug.dll
   Function: FUN_5f95c3e0
   Address: 5f95c3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f95c3e0(undefined4 param_1,int *param_2,ushort *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  piVar2 = param_2;
  uVar1 = *(ushort *)((int)param_2 + 2);
  iVar3 = param_2[1];
  param_3[1] = uVar1;
  uVar1 = uVar1 * 2;
  param_3[6] = uVar1;
  *(uint *)(param_3 + 4) = (uint)uVar1 * iVar3;
  *(int *)(param_3 + 2) = iVar3;
  *param_3 = 1;
  param_3[7] = 0x10;
  param_3[8] = 0;
  iVar3 = FUN_5f95c210(param_1,param_2,param_3);
  uVar5 = 0;
  puVar4 = &DAT_5f9d9230;
  do {
    if ((-1 < iVar3) || ((uint)param_2[1] <= *puVar4)) break;
    puVar4 = puVar4 + 1;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_5f9d925c);
  if (uVar5 < 0xb) {
    piVar6 = &DAT_5f9d9230 + uVar5;
    do {
      if (-1 < iVar3) {
        return;
      }
      iVar3 = *piVar6;
      uVar1 = *(ushort *)((int)param_2 + 2);
      *(int *)(param_3 + 2) = iVar3;
      param_3[1] = uVar1;
      uVar1 = uVar1 * 2;
      param_3[6] = uVar1;
      *param_3 = 1;
      param_3[7] = 0x10;
      *(uint *)(param_3 + 4) = (uint)uVar1 * iVar3;
      param_3[8] = 0;
      iVar3 = FUN_5f95c210(param_1,param_2,param_3);
      piVar6 = piVar6 + 1;
    } while (piVar6 < &DAT_5f9d925c);
  }
  if ((iVar3 < 0) && (iVar7 = 0, 0 < (int)uVar5)) {
    param_2 = &DAT_5f9d9230;
    do {
      if (-1 < iVar3) {
        return;
      }
      uVar1 = *(ushort *)((int)piVar2 + 2);
      iVar3 = *param_2;
      param_3[1] = uVar1;
      uVar1 = uVar1 * 2;
      *(int *)(param_3 + 2) = iVar3;
      param_3[6] = uVar1;
      *(uint *)(param_3 + 4) = (uint)uVar1 * iVar3;
      *param_3 = 1;
      param_3[7] = 0x10;
      param_3[8] = 0;
      iVar3 = FUN_5f95c210(param_1,piVar2,param_3);
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 1;
    } while (iVar7 < (int)uVar5);
  }
  return;
}



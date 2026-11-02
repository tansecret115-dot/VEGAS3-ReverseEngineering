/* Module: sfppack2.dll
   Function: FUN_5ccf26e0
   Address: 5ccf26e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ccf26e0(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = &DAT_5cd534c0;
  puVar3 = (undefined4 *)((int)this + 0x290);
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar5 = &DAT_5cd534f8;
  puVar3 = (undefined4 *)((int)this + 0x2c8);
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  piVar1 = *(int **)((int)this + 0x208);
  uVar6 = (uint)(param_2 == 0);
  puVar5 = &DAT_5cd53530;
  puVar3 = (undefined4 *)((int)this + 0x300);
  for (iVar4 = 0x62; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  piVar1 = FUN_5ccf4a50(this,param_1,piVar1,uVar6);
  *(int **)((int)this + 0x208) = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0x8007000e;
  }
  if (*(short *)(*(int *)((int)this + 0x118) + 2) == 2) {
    piVar1 = FUN_5ccf4a50(this,param_1,*(int **)((int)this + 0x20c),uVar6);
    *(int **)((int)this + 0x20c) = piVar1;
    if (piVar1 == (int *)0x0) {
      return 0x8007000e;
    }
  }
  *(undefined4 *)((int)this + 0x288) = 0;
  if ((*(int *)(param_1 + 0xb8) == 0) || ((*(byte *)((int)this + 0x230) & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)((int)this + 0x228) = uVar2;
  if ((*(int *)(param_1 + 0xb8) == 0) || ((*(byte *)((int)this + 0x230) & 2) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)((int)this + 0x22c) = uVar2;
  if (uVar6 != 0) {
    *(undefined4 *)((int)this + 0x224) = *(undefined4 *)(*(int *)((int)this + 0x208) + 0x14);
  }
  puVar5 = (undefined4 *)((int)this + 0x248);
  *(undefined4 *)((int)this + 0x234) = *(undefined4 *)(param_1 + 0xbc);
  puVar3 = (undefined4 *)(param_1 + 0xc0);
  iVar4 = 4;
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x120) = 1;
  return 0;
}



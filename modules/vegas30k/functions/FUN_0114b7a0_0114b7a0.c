/* Module: vegas30k.dll
   Function: FUN_0114b7a0
   Address: 0114b7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114b7a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_804;
  undefined4 local_800;
  undefined1 local_7fa;
  
  piVar2 = *(int **)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *piVar2;
  }
  if ((iVar3 < 0) || (iVar1 + -1 < iVar3)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(piVar2[1] * iVar3 + piVar2[2]);
  }
  iVar3 = *piVar2;
  if (iVar3 == 2) {
    local_804 = (undefined4 *)0x800;
    puVar6 = (undefined4 *)(param_1 + 0x50);
  }
  else if (iVar3 == 3) {
    local_804 = (undefined4 *)0x372;
    puVar6 = (undefined4 *)(param_1 + 0x850);
  }
  else {
    puVar6 = local_804;
    if (iVar3 == 4) {
      puVar6 = &local_800;
      for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_800._0_1_ = 0xff;
      ISO9660_achCpyPadSpace((char *)((int)&local_800 + 1),5,"CD001");
      local_7fa = 1;
      local_804 = (undefined4 *)0x800;
      puVar6 = &local_800;
    }
  }
  puVar7 = param_2;
  for (uVar4 = (uint)local_804 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = (uint)local_804 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  if (local_804 == (undefined4 *)0x800) {
    *param_4 = 0x800;
    return 0;
  }
  if (((uint)local_804 & 0x7ff) == 0) {
    *param_4 = 0x800;
    return 0;
  }
  uVar5 = 0x800 - ((uint)local_804 & 0x7ff);
  puVar6 = (undefined4 *)((int)local_804 + (int)param_2);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *param_4 = 0x800;
  return 0;
}



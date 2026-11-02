/* Module: vegas30k.dll
   Function: FUN_01127920
   Address: 01127920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01127920(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_40 [16];
  
  FUN_0114a0c0(param_1 + 0x1b);
  FUN_01155ef0(param_1,param_1[0x29]);
  FUN_01155ef0(param_1,param_1[0x39]);
  FUN_01155ef0(param_1,param_1[0x38]);
  FUN_01155ef0(param_1,param_1[0x3a]);
  FUN_01155ef0(param_1,param_1[0x3b]);
  FUN_01155ef0(param_1,param_1[0x3c]);
  FUN_01155ef0(param_1,param_1[0x3d]);
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1fb));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1e7));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1eb));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1ef));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 499));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1f7));
  uVar1 = param_1[0x10];
  uVar2 = param_1[0x12];
  puVar5 = param_1;
  puVar6 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = param_1[0x11];
  puVar5 = param_1;
  for (iVar4 = 0x7f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar1;
  param_1[0x12] = uVar2;
  puVar5 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



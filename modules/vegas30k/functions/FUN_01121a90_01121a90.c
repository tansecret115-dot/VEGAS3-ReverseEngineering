/* Module: vegas30k.dll
   Function: FUN_01121a90
   Address: 01121a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01121a90(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_40 [16];
  
  if (param_2 != 0) {
    FUN_01126e80(param_1,param_2);
  }
  if (param_3 != 0) {
    FUN_01126e80(param_1,param_3);
  }
  FUN_01155ef0(param_1,param_1[0x29]);
  FUN_01155ef0(param_1,param_1[0x39]);
  FUN_01155ef0(param_1,param_1[0x38]);
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1d9));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1dd));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x156));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x15a));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x15e));
  if ((param_1[0x19] & 0x1000) != 0) {
    FUN_01126d70(param_1,param_1[0x43]);
  }
  if ((param_1[0x19] & 0x2000) != 0) {
    FUN_01155ef0(param_1,param_1[0x5e]);
  }
  if ((param_1[0x19] & 0x4000) != 0) {
    FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1e1));
  }
  if (*(int *)((int)param_1 + 0x162) != 0) {
    iVar4 = 1 << (8U - (char)*(undefined4 *)((int)param_1 + 0x14a) & 0x1f);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        FUN_01155ef0(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x162) + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x162));
  if (*(int *)((int)param_1 + 0x166) != 0) {
    iVar4 = 1 << (8U - (char)*(undefined4 *)((int)param_1 + 0x14a) & 0x1f);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        FUN_01155ef0(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x166) + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x166));
  if (*(int *)((int)param_1 + 0x16a) != 0) {
    iVar4 = 1 << (8U - (char)*(undefined4 *)((int)param_1 + 0x14a) & 0x1f);
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        FUN_01155ef0(param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x16a) + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x16a));
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x1fb));
  FUN_0112ca20(param_1 + 0x1b);
  FUN_01155ef0(param_1,*(undefined4 *)((int)param_1 + 0x19d));
  uVar1 = param_1[0x10];
  uVar2 = param_1[0x12];
  puVar5 = param_1;
  puVar7 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
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
  puVar5 = local_40;
  puVar7 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x12] = uVar2;
  param_1[0x10] = uVar1;
  return;
}



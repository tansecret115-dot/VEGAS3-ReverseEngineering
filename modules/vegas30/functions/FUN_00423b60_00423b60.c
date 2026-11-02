/* Module: vegas30.exe
   Function: FUN_00423b60
   Address: 00423b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423b60(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  int *local_90;
  undefined4 *local_8c;
  undefined1 *puStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 *local_68;
  undefined4 local_64 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_90 = (int *)(param_1 + 0x94);
  local_8c = (undefined4 *)0x2;
  do {
    piVar1 = (int *)*local_90;
    if (piVar1 != (int *)0x0) {
      local_64[0] = 0x38;
      puVar4 = local_38;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_38[1] = DAT_006495a4;
      local_38[0] = DAT_006495a0;
      local_38[3] = DAT_0064959c;
      local_38[2] = DAT_00649598;
      local_68 = local_38;
      local_24 = 2;
      local_28 = 2;
      local_18 = 0x3f800000;
      local_1c = 0x3f800000;
      local_20 = 0x3f800000;
      local_14 = 0x3f800000;
      local_8 = 0x3f800000;
      local_c = 0x3f800000;
      local_10 = 0x3f800000;
      local_4 = 0x3f800000;
      if ((*(int *)(param_1 + 0x118) == 0) || (*(int *)(param_1 + 0x120) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      (**(code **)(*piVar1 + 0x70))(2,uVar2,&local_68);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_64[2] = DAT_006495a8;
      local_8c = local_64;
      local_64[1] = 1;
      local_64[0] = 1;
      local_64[3] = DAT_006495ac;
      uStack_4c = 0x3f800000;
      uStack_50 = 0x3f800000;
      uStack_54 = 0x3f800000;
      uStack_48 = 0x3f800000;
      puStack_88 = (undefined1 *)0x20;
      if ((*(int *)(param_1 + 0x118) == 0) || (*(int *)(param_1 + 0x11c) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      (**(code **)(*piVar1 + 0x70))(1,uVar2,&local_8c);
      if ((*(int *)(param_1 + 0x124) == -1) || (*(int *)(param_1 + 0x118) == 0)) {
        iVar3 = *piVar1;
        ppuVar6 = (undefined1 **)0x0;
        uVar2 = 0;
      }
      else {
        iVar3 = *piVar1;
        puStack_88 = &stack0xffffff60;
        ppuVar6 = &puStack_88;
        uStack_84 = 8;
        uVar2 = 1;
      }
      (**(code **)(iVar3 + 0x70))(3,uVar2,ppuVar6);
      if ((*(int *)(param_1 + 300) == 0) || (*(int *)(param_1 + 0x118) == 0)) {
        iVar3 = *piVar1;
        puVar5 = (undefined1 *)0x0;
        uVar2 = 0;
      }
      else {
        uStack_84 = 0;
        iVar3 = *piVar1;
        puVar5 = &stack0xffffff64;
        uVar2 = 1;
        iStack_80 = *(int *)(param_1 + 300);
      }
      (**(code **)(iVar3 + 0x70))(4,uVar2,puVar5);
    }
    local_90 = local_90 + 2;
    local_8c = (undefined4 *)((int)local_8c + -1);
  } while (local_8c != (undefined4 *)0x0);
  return;
}



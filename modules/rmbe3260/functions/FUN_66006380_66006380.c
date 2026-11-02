/* Module: rmbe3260.dll
   Function: FUN_66006380
   Address: 66006380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66006380(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_8;
  
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x110);
  local_8 = param_1;
  do {
    iVar1 = (**(code **)(*(int *)*puVar4 + 0x134))();
    if (iVar1 != 0) {
      local_8 = uVar3;
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 3);
  (**(code **)(**(int **)(param_1 + 0x134) + 0x28))(*(int **)(param_1 + 0x134),local_8);
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x11c);
  do {
    iVar1 = (**(code **)(*(int *)*puVar4 + 0x134))();
    if (iVar1 != 0) {
      local_8 = uVar3;
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 2);
  (**(code **)(**(int **)(param_1 + 0x134) + 0x20))(*(int **)(param_1 + 0x134),local_8);
  iVar1 = **(int **)(param_1 + 0x134);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x124) + 0x134))();
  (**(code **)(iVar1 + 0x10))(*(undefined4 *)(param_1 + 0x134),uVar2);
  iVar1 = **(int **)(param_1 + 0x134);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x128) + 0x134))();
  (**(code **)(iVar1 + 0x18))(*(undefined4 *)(param_1 + 0x134),uVar2);
  return 1;
}



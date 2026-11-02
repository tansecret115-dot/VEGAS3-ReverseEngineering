/* Module: rmme3260.dll
   Function: FUN_6621d2d0
   Address: 6621d2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6621d2d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  undefined4 *local_8;
  
  FUN_66208c50(param_1,0);
  param_1[0x36] = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  CMap<>(param_1 + 0x3d,10);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *param_1 = &PTR_FUN_6626bb80;
  local_8 = operator_new(0x248);
  if (local_8 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = local_8 + 1;
    *local_8 = 10;
    local_c = 10;
    local_8 = local_8 + 6;
    puVar3 = puVar1;
    do {
      FUN_6624fd80(puVar3);
      FUN_66208c30(local_8);
      puVar3 = (undefined4 *)((int)puVar3 + 0x3a);
      local_8 = (undefined4 *)((int)local_8 + 0x3a);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  param_1[0x3b] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    param_1[9] = 0x8007000e;
  }
  puVar1 = operator_new(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_662247a0(puVar1);
  }
  param_1[0x45] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    param_1[9] = 0x8007000e;
  }
  iVar2 = 0;
  do {
    if (param_1[9] != 0) {
      return param_1;
    }
    iVar2 = iVar2 + 0x3a;
    *(undefined4 *)(param_1[0x3b] + -8 + iVar2) = 0;
    *(undefined4 *)(param_1[0x3b] + -4 + iVar2) = 0;
    *(undefined4 *)(param_1[0x3b] + -0x14 + iVar2) = 0;
    *(undefined4 *)(param_1[0x3b] + -0x10 + iVar2) = 0;
    *(undefined4 *)(param_1[0x3b] + -0xc + iVar2) = 0;
  } while (iVar2 < 0x244);
  return param_1;
}



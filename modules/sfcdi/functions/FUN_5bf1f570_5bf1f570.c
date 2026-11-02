/* Module: sfcdi.dll
   Function: FUN_5bf1f570
   Address: 5bf1f570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5bf1f570(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  int local_34;
  int local_30;
  uint local_2c [5];
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = (undefined1 *)0x0;
  uVar5 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar2 = FUN_5bf1f260(*(HSFCD__ **)(param_1 + 0x1de4),(uint)(*(int *)(param_1 + 0x1e58) != 3),0);
  if (-1 < iVar2) {
    uVar1 = *(undefined4 *)(param_1 + 0x1e58);
    switch(uVar1) {
    case 0:
    case 1:
      local_34 = param_1 + 0x54;
      puVar4 = *(undefined1 **)(*(int *)(param_1 + 0x1e5c) + 8);
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1e5c) + 0xc);
      break;
    case 2:
      uVar5 = *(undefined4 *)(param_1 + 0x1e5c);
      local_34 = param_1 + 0x54;
      puVar4 = &LAB_5bf20a80;
      break;
    case 3:
      uVar5 = *(undefined4 *)(param_1 + 0x1e5c);
      local_30 = param_1 + 8;
      puVar4 = &LAB_5bf20ff0;
    }
    puVar6 = local_2c;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_2c[1] = *(undefined4 *)(param_1 + 0x1de4);
    local_2c[2] = local_34;
    local_10 = *(undefined4 *)(param_1 + 0x1e50);
    local_2c[3] = local_30;
    local_8 = 0;
    local_4 = 0;
    switch(uVar1) {
    case 0:
      local_2c[0] = local_2c[0] | 2;
      break;
    case 1:
      local_2c[0] = local_2c[0] | 0x100;
      break;
    case 2:
      local_2c[0] = local_2c[0] | 1;
      break;
    case 3:
      local_2c[0] = local_2c[0] | 0x41;
    }
    if (*(int *)(param_1 + 0x1e54) != 0) {
      local_2c[0] = local_2c[0] | 0x20;
    }
    local_18 = puVar4;
    local_14 = uVar5;
    lVar3 = SfCDBurn_Create((HSFBURN__ **)(param_1 + 0x3d18),(burncreatetag *)local_2c);
    if (lVar3 == 0) {
      SfCDBurn_WriteDiscNG(*(HSFBURN__ **)(param_1 + 0x3d18));
    }
  }
  return;
}



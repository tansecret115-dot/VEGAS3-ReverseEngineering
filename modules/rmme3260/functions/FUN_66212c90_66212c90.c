/* Module: rmme3260.dll
   Function: FUN_66212c90
   Address: 66212c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66212c90(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int local_8;
  
  FUN_66208c50(param_1,0);
  param_1[0x36] = &PTR_LAB_6626b860;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xea) = 0;
  FUN_6624fd80(param_1 + 0x3b);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  FUN_6622a7d0(param_1 + 0x45);
  *(undefined4 *)((int)param_1 + 0x2fa) = 0;
  FUN_6621ad90((int *)((int)param_1 + 0x2fe));
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 1;
  *(undefined2 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)((int)param_1 + 0x346) = 0;
  FUN_66208c30((undefined4 *)((int)param_1 + 0x34a));
  param_1[0xd5] = 0;
  FUN_662500f0(param_1 + 0xd6);
  param_1[0xd9] = 0;
  *(undefined2 *)(param_1 + 0xda) = 0;
  *(undefined4 *)((int)param_1 + 0x36a) = 0;
  *(undefined4 *)((int)param_1 + 0x36e) = 0;
  *(undefined4 *)((int)param_1 + 0x372) = 0;
  *(undefined4 *)((int)param_1 + 0x376) = 0;
  *(undefined4 *)((int)param_1 + 0x37a) = 0;
  *(undefined4 *)((int)param_1 + 0x37e) = 0;
  *(undefined4 *)((int)param_1 + 0x382) = 0;
  *(undefined4 *)((int)param_1 + 0x386) = 0;
  *(undefined4 *)((int)param_1 + 0x38a) = 0;
  *(undefined4 *)((int)param_1 + 0x38e) = 0;
  *(undefined4 *)((int)param_1 + 0x392) = 0;
  FUN_66208c30((undefined4 *)((int)param_1 + 0x396));
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  *(undefined2 *)(param_1 + 0xf5) = 0;
  *(undefined2 *)((int)param_1 + 0x3d6) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)((int)param_1 + 0x3ee) = 0;
  *param_1 = &PTR_FUN_6626b7d8;
  param_1[0x36] = &PTR_FUN_6626b7b0;
  pvVar1 = operator_new(0x600);
  param_1[0x42] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[9] = 0x8007000e;
  }
  pvVar1 = operator_new(0xa80);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)pvVar1 + 0x14);
    local_8 = 0x40;
    do {
      FUN_66208c30(puVar4);
      puVar4 = (undefined4 *)((int)puVar4 + 0x2a);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  param_1[0x44] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[9] = 0x8007000e;
  }
  uVar3 = 0;
  do {
    if (param_1[9] != 0) {
      return param_1;
    }
    iVar2 = (uint)uVar3 * 0x18;
    *(undefined4 *)(iVar2 + 4 + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 8 + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 0xc + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 0x14 + param_1[0x42]) = 0;
    iVar2 = (uint)uVar3 * 0x2a;
    *(undefined4 *)(iVar2 + param_1[0x44]) = 0;
    *(undefined4 *)(iVar2 + 4 + param_1[0x44]) = 0;
    *(undefined4 *)(iVar2 + 8 + param_1[0x44]) = 0;
    *(undefined4 *)(iVar2 + 0xc + param_1[0x44]) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_1[0x44]) = 0;
    uVar3 = uVar3 + 1;
    puVar4 = (undefined4 *)(iVar2 + 0x14 + param_1[0x44]);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined2 *)(puVar4 + 2) = 0;
    *(undefined4 *)(iVar2 + 0x1e + param_1[0x44]) = 0;
    *(undefined4 *)(iVar2 + 0x22 + param_1[0x44]) = 0;
    *(undefined4 *)(iVar2 + 0x26 + param_1[0x44]) = 0;
  } while (uVar3 < 0x40);
  return param_1;
}



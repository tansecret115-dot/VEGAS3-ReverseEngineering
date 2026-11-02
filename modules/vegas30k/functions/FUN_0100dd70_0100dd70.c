/* Module: vegas30k.dll
   Function: FUN_0100dd70
   Address: 0100dd70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100dd70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_1e8 [10];
  undefined4 local_1c0 [10];
  undefined4 local_198 [10];
  undefined4 local_170 [10];
  undefined4 local_148 [10];
  undefined4 local_120 [10];
  undefined1 local_f8 [40];
  undefined4 local_d0 [10];
  undefined4 local_a8 [10];
  undefined4 local_80 [10];
  undefined1 local_58 [40];
  undefined4 local_30 [11];
  
  puVar1 = (undefined4 *)FUN_0100dcf0(local_1c0,param_2,param_3,param_6,param_7);
  puVar3 = local_1e8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = local_1e8;
  puVar3 = local_30;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0100dcf0(local_1c0,param_3,param_4,param_6,param_7);
  puVar3 = local_1e8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = local_1e8;
  puVar3 = local_148;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0100dcf0(local_1c0,param_4,param_5,param_6,param_7);
  puVar3 = local_1e8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = local_1e8;
  puVar3 = local_a8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0100dcf0(local_1c0,local_30,local_148,param_6,param_7);
  puVar3 = local_1e8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = local_1e8;
  puVar3 = local_120;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0100dcf0(local_1c0,local_148,local_a8,param_6,param_7);
  puVar3 = local_1e8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = local_1e8;
  puVar3 = local_80;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_0100dcf0(local_1c0,local_120,local_80,param_6,param_7);
  puVar3 = local_1c0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_8 != (undefined4 *)0x0) {
    FUN_0100dbe0(local_58,param_2);
    FUN_0100dbe0(local_1e8,param_3);
    FUN_0100dbe0(local_f8,param_4);
    puVar1 = (undefined4 *)FUN_0100dcf0(local_198,local_58,local_1e8,param_6,param_7);
    puVar3 = local_198;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = local_198;
    puVar3 = local_170;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = (undefined4 *)FUN_0100dcf0(local_198,local_1e8,local_f8,param_6,param_7);
    puVar3 = local_198;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = local_198;
    puVar3 = local_d0;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = (undefined4 *)FUN_0100dcf0(local_198,local_170,local_d0,param_6,param_7);
    puVar3 = local_170;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = local_170;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_8 = *puVar1;
      puVar1 = puVar1 + 1;
      param_8 = param_8 + 1;
    }
  }
  puVar1 = local_1c0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



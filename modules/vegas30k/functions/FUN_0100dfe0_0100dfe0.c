/* Module: vegas30k.dll
   Function: FUN_0100dfe0
   Address: 0100dfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0100dfe0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  double dVar1;
  double dVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  double local_b8;
  undefined4 local_a8 [10];
  undefined4 local_80 [10];
  undefined4 local_58 [10];
  undefined4 local_30 [11];
  
  fVar6 = (float10)FUN_0100dc90(param_2,param_3);
  dVar1 = (double)fVar6;
  fVar6 = (float10)FUN_0100dc90(param_3,param_4);
  dVar2 = (double)fVar6;
  if ((dVar1 == _DAT_011db3f0) && (dVar2 == _DAT_011db3f0)) {
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_1 = *param_3;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  if (dVar2 <= dVar1) {
    puVar3 = (undefined4 *)
             FUN_0100dcf0(local_a8,param_2,param_3,
                          (dVar2 / dVar1) * (double)CONCAT44(DAT_011db504,DAT_011db500) +
                          _DAT_011dad58);
    puVar5 = local_a8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = local_a8;
    puVar5 = local_80;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined4 *)
             FUN_0100dcf0(local_a8,param_3,param_4,CONCAT44(DAT_011db504,DAT_011db500));
    puVar5 = local_a8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = local_a8;
    puVar5 = local_30;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined4 *)FUN_0100dcf0(local_a8,local_80,local_30,0,0x3fe00000);
    puVar5 = local_a8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar3 = (undefined4 *)
             FUN_0100dcf0(local_80,param_2,param_3,
                          (double)CONCAT44(DAT_011db504,DAT_011db500) + _DAT_011dad58);
    puVar5 = local_80;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = local_80;
    puVar5 = local_a8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined4 *)
             FUN_0100dcf0(local_80,param_3,param_4,
                          (dVar1 / dVar2) * (double)CONCAT44(DAT_011db504,DAT_011db500));
    puVar5 = local_80;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = local_80;
    puVar5 = local_30;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined4 *)FUN_0100dcf0(local_80,local_a8,local_30,0x3fe0000000000000);
    puVar5 = local_a8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  puVar3 = local_a8;
  puVar5 = local_58;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_5 != 0) {
    fVar6 = (float10)FUN_0100dcd0(param_2,param_3);
    dVar1 = (double)fVar6;
    fVar6 = (float10)FUN_0100dcd0(param_3,param_4);
    if (fVar6 < (float10)dVar1) {
      if (dVar1 <= _DAT_011db3f0) {
        local_b8 = 0.0;
      }
      else {
        local_b8 = (double)(fVar6 / (float10)dVar1);
      }
      puVar3 = (undefined4 *)
               FUN_0100dcf0(local_a8,param_3,local_58,local_b8._0_4_,
                            (int)((ulonglong)local_b8 >> 0x20));
      puVar5 = local_a8;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = local_a8;
      puVar5 = local_58;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  puVar3 = local_58;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



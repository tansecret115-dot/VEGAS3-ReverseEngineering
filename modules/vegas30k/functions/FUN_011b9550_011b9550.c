/* Module: vegas30k.dll
   Function: FUN_011b9550
   Address: 011b9550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_011b9550(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  undefined1 local_234 [4];
  uint local_230 [140];
  
  puVar5 = local_230;
  for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_80070057;
  local_230[0] = 0x230;
  if (param_2[0x87] != 0) {
    iVar2 = lstrlenA((LPCSTR)(param_2 + 0x46));
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,param_2 + 2,local_234,local_230);
      puVar4 = (undefined1 *)0x0;
      if (iVar2 == 0) goto LAB_011b95c8;
    }
    puVar4 = (undefined1 *)FUN_011b9210(param_2[0x87],local_230);
  }
LAB_011b95c8:
  puVar5 = param_2 + 0x46;
  iVar2 = lstrlenA((LPCSTR)puVar5);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,puVar5,local_234,local_230);
    puVar4 = (undefined1 *)0x0;
    if (iVar2 == 0) goto LAB_011b969e;
    puVar4 = (undefined1 *)FUN_011b8f40(puVar5,local_230,param_3);
  }
  if (puVar4 != (undefined1 *)0x0) {
    iVar2 = 4;
    bVar7 = true;
    puVar5 = param_2 + 0x42;
    puVar6 = &DAT_011dab90;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *puVar5 == *puVar6;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar2 = (**(code **)(*param_1 + 0x28))
                        (param_1,param_2[0x42],param_2[0x43],param_2[0x44],param_2[0x45],local_234,
                         local_230);
      puVar4 = (undefined1 *)0x0;
      if (iVar2 != 0) {
        puVar4 = (undefined1 *)
                 FUN_011b8d40(param_2[0x42],param_2[0x43],param_2[0x44],param_2[0x45],local_230);
      }
    }
    if ((int)puVar4 < 0) {
      return puVar4;
    }
  }
LAB_011b969e:
  uVar1 = *param_2;
  if (uVar1 < local_230[0]) {
    local_230[0] = uVar1;
  }
  puVar5 = local_230;
  puVar6 = param_2;
  for (uVar3 = local_230[0] >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (local_230[0] = local_230[0] & 3; local_230[0] != 0; local_230[0] = local_230[0] - 1) {
    *(char *)puVar6 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  *param_2 = uVar1;
  return puVar4;
}



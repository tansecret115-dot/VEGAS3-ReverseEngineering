/* Module: sfcdi.dll
   Function: FUN_5bf18dc0
   Address: 5bf18dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18dc0(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_4;
  
  local_4 = 0;
  uVar3 = param_1[0x11];
  puVar1 = param_1 + uVar3 * 10 + 0x13;
  if (param_1[uVar3 * 10 + 0x19] == 0) {
    return 0;
  }
  if (puVar1[5] != 0) {
    uVar3 = FUN_5bf18b30(uVar3);
    param_1[0x11] = uVar3;
    return 0;
  }
  if (param_1[2] == 0) {
    puVar1[5] = 1;
    goto LAB_5bf18ed1;
  }
  iVar4 = FUN_5bf18b40(uVar3);
  puVar2 = param_1 + iVar4 * 10 + 0x13;
  uVar3 = param_1[2] * 0x930;
  uVar5 = FUN_5bf18aa0((int)puVar1);
  uVar6 = param_1[4];
  if (uVar5 < param_1[4]) {
    uVar6 = uVar5;
  }
  iVar4 = FUN_5bf18f00(*puVar2,puVar1[2],(short *)*puVar1,uVar5,uVar6,uVar3);
  if (iVar4 < 0) {
    if ((*param_1 & 2) != 0) {
      uVar6 = param_1[4];
      if (uVar5 <= param_1[4]) {
        uVar6 = uVar5;
      }
      iVar4 = FUN_5bf18ff0(*puVar2,puVar2[2],(short *)*puVar1,uVar5,uVar6);
    }
    if (-1 < iVar4) {
      param_1[9] = param_1[9] + 1;
      uVar3 = iVar4 + param_1[4] * 2;
      goto LAB_5bf18ec5;
    }
    if (param_1[5] <= puVar1[9]) {
      local_4 = 0x8004e059;
      param_1[0xc] = param_1[0xc] + 1;
      puVar1[5] = 1;
    }
  }
  else {
    uVar3 = iVar4 + param_1[4] * 2;
LAB_5bf18ec5:
    puVar1[5] = 1;
  }
  puVar1[4] = uVar3;
LAB_5bf18ed1:
  if (puVar1[5] != 0) {
    uVar3 = FUN_5bf18b30(param_1[0x11]);
    param_1[0x11] = uVar3;
    return local_4;
  }
  return 0x80004005;
}



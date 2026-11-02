/* Module: vidpcore.dll
   Function: FUN_5df150b0
   Address: 5df150b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df150b0(uint *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  sbyte sVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_24 [6];
  undefined1 local_c [12];
  
  uVar2 = 0;
  iVar5 = 3;
  puVar4 = param_1;
  do {
    uVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    uVar2 = uVar2 | uVar6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (uVar2 == 0) {
    FUN_5df10b20(param_2,param_3);
    FUN_5df10ac0(param_3);
    FUN_5df10b20(param_3,param_3 + 3);
    return 0;
  }
  FUN_5df10fc0(param_1,local_c);
  FUN_5df10a80(local_c);
  FUN_5df10d90(param_2,local_c,local_24 + 3);
  FUN_5df10ac0(local_24 + 3);
  uVar2 = 0;
  puVar4 = local_24 + 3;
  iVar5 = 3;
  do {
    uVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    uVar2 = uVar2 ^ uVar6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar6 = 0xffffffff;
  iVar5 = 0x10;
  do {
    sVar3 = (sbyte)iVar5;
    uVar6 = uVar6 >> sVar3;
    iVar5 = iVar5 >> 1;
    uVar2 = uVar2 >> sVar3 ^ uVar6 & uVar2;
  } while (iVar5 != 0);
  if (uVar2 != 0) {
    FUN_5df10b00(param_3);
    FUN_5df10b00(param_3 + 3);
    return 1;
  }
  FUN_5df10b00(local_24);
  uVar6 = 1;
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1;
    iVar5 = -(uVar2 >> 5) + 2;
    iVar7 = 2 - (uVar1 >> 5);
    uVar2 = (local_24[iVar5] ^ local_24[-(uVar2 >> 5) + 5]) & uVar6;
    if (iVar7 == iVar5) {
      local_24[iVar7] = local_24[iVar7] | uVar2 * 2;
      uVar6 = uVar6 << 1;
    }
    else {
      uVar6 = 1;
      if (uVar2 != 0) {
        local_24[iVar7] = 1;
      }
    }
    uVar2 = uVar1;
  } while ((int)uVar1 < 0x59);
  if (((local_24[0] ^ local_24[3]) & 0x1000000) != 0) {
    FUN_5df10b00(param_3);
    FUN_5df10b00(param_3 + 3);
    return 2;
  }
  FUN_5df10d90(param_1,local_24,param_3);
  FUN_5df10b00(param_3 + 3);
  iVar5 = (int)param_1 - (int)param_3;
  iVar7 = 3;
  do {
    param_3[3] = *(uint *)(iVar5 + (int)param_3) ^ *param_3;
    param_3 = param_3 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return 0;
}



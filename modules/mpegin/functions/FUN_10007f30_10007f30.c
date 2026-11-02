/* Module: mpegin.dll
   Function: FUN_10007f30
   Address: 10007f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10007f30(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(**(code **)(param_1 + 0x12e4c))(0x360);
  *(undefined4 **)(param_1 + 0x12e54) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_10007e90(param_1,(byte *)s_Unable_to_allocate_memory_for_de_10018cd0);
    return 1;
  }
  for (iVar4 = 0xd8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x308) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x110) = *(undefined4 *)(param_1 + 8);
  if (*(int *)(param_1 + 0xd08) == 0) {
    bVar1 = (byte)*(undefined4 *)(param_1 + 8);
    if ((bVar1 & 3) == 3) {
      *(uint *)(param_1 + 0xd08) = (-(uint)((bVar1 & 0xb) != 0xb) & 0xe000000) + 0x33524742;
    }
    else if ((bVar1 & 1) == 1) {
      *(undefined4 *)(param_1 + 0xd08) = 0x32315659;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x120) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4e58) = 0;
  *(undefined4 *)(param_1 + 0x4d34) = 0;
  *(undefined4 *)(param_1 + 0x4dd0) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  *(undefined4 *)(param_1 + 0xcf4) = 0;
  *(undefined4 *)(param_1 + 0xcf8) = 0;
  *(undefined4 *)(param_1 + 0xcfc) = 0;
  *(undefined4 *)(param_1 + 0x4e34) = 0;
  *(undefined4 *)(param_1 + 0x4e38) = 0;
  *(undefined4 *)(param_1 + 0x4e3c) = 0;
  *(undefined4 *)(param_1 + 0x4e40) = 0;
  *(undefined4 *)(param_1 + 0x4e44) = 0;
  *(undefined4 *)(param_1 + 0x4e48) = 0;
  *(undefined4 *)(param_1 + 0x4e4c) = 0;
  *(undefined4 *)(param_1 + 0x4e50) = 0;
  if (*(int *)(param_1 + 0xd04) == 0) {
    *(undefined4 *)(param_1 + 0xd04) = 1;
  }
  if (*(int *)(param_1 + 0xd00) == 0) {
    *(undefined4 *)(param_1 + 0xd00) = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 3;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(*(int *)(param_1 + 0x12e54) + 0x128) = *(int *)(param_1 + 0x12e54) + 0x2d8;
  **(undefined4 **)(*(int *)(param_1 + 0x12e54) + 0x128) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x12e54) + 0x128) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x168) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x160) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x164) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x154) = 0;
  iVar4 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar4 + 0x308) == 1) {
    *(undefined4 *)(iVar4 + 0x150) = param_4;
  }
  else {
    *(undefined4 *)(iVar4 + 0x150) = 0;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x128);
  *(undefined4 *)(iVar4 + 8) = 0xffdfffff;
  *(undefined4 *)(iVar4 + 0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x1e0) =
       *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x308);
  iVar4 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar4 + 0x308) < 2) {
    *(code **)(iVar4 + 0x1d8) = FUN_100053c0;
    *(undefined1 **)(*(int *)(param_1 + 0x12e54) + 0x1dc) = &LAB_10005410;
    iVar4 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar4 + 0x170) = 0;
    *(undefined4 *)(iVar4 + 0x174) = 0;
    *(int *)(*(int *)(param_1 + 0x12e54) + 0x1e4) = *(int *)(param_1 + 0x12e54) + 0x128;
  }
  else {
    *(undefined4 *)(iVar4 + 0x1d8) = *(undefined4 *)(param_1 + 0x4cf0);
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x1dc) = *(undefined4 *)(param_1 + 0x4cf4);
    iVar4 = *(int *)(param_1 + 0x12e54);
    *(undefined4 *)(iVar4 + 0x170) = *(undefined4 *)(param_1 + 0x4ce8);
    *(undefined4 *)(iVar4 + 0x174) = *(undefined4 *)(param_1 + 0x4cec);
    *(int *)(*(int *)(param_1 + 0x12e54) + 0x1e4) = param_3;
  }
  uVar3 = (**(code **)(param_1 + 0x12e4c))(0x200000);
  **(undefined4 **)(*(int *)(param_1 + 0x12e54) + 0x128) = uVar3;
  iVar4 = *(int *)(param_1 + 0x12e54);
  if (**(int **)(iVar4 + 0x128) != 0) {
    if (*(int *)(iVar4 + 0x308) < 2) {
      *(int *)(iVar4 + 0x200) = iVar4 + 0x2f0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x200);
      *(undefined4 *)(iVar4 + 8) = 0xffdfffff;
      *(undefined4 *)(iVar4 + 0xc) = 0xffffffff;
      **(undefined4 **)(*(int *)(param_1 + 0x12e54) + 0x200) = 0;
    }
    else {
      *(int *)(iVar4 + 0x200) = iVar4 + 0x2d8;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x240) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x238) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x23c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x22c) = 0;
    iVar4 = *(int *)(param_1 + 0x12e54);
    if (*(int *)(iVar4 + 0x308) == 1) {
      *(undefined4 *)(iVar4 + 0x228) = param_4;
    }
    else {
      *(undefined4 *)(iVar4 + 0x228) = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x2b8) =
         *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x308);
    iVar4 = *(int *)(param_1 + 0x12e54);
    if (*(int *)(iVar4 + 0x308) < 2) {
      *(code **)(iVar4 + 0x2b0) = FUN_100053c0;
      *(undefined1 **)(*(int *)(param_1 + 0x12e54) + 0x2b4) = &LAB_10005410;
      iVar4 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar4 + 0x248) = 0;
      *(undefined4 *)(iVar4 + 0x24c) = 0;
      iVar4 = *(int *)(param_1 + 0x12e54);
      param_3 = iVar4 + 0x200;
    }
    else {
      *(undefined4 *)(iVar4 + 0x2b0) = *(undefined4 *)(param_1 + 0x4cf0);
      *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x2b4) = *(undefined4 *)(param_1 + 0x4cf4);
      iVar4 = *(int *)(param_1 + 0x12e54);
      *(undefined4 *)(iVar4 + 0x248) = *(undefined4 *)(param_1 + 0x4ce8);
      *(undefined4 *)(iVar4 + 0x24c) = *(undefined4 *)(param_1 + 0x4cec);
      iVar4 = *(int *)(param_1 + 0x12e54);
    }
    *(int *)(iVar4 + 700) = param_3;
    puVar2 = *(undefined4 **)(param_1 + 0x12e54);
    if ((int)puVar2[0xc2] < 2) {
      uVar3 = (**(code **)(param_1 + 0x12e4c))(0x200000);
      **(undefined4 **)(*(int *)(param_1 + 0x12e54) + 0x200) = uVar3;
      puVar2 = *(undefined4 **)(param_1 + 0x12e54);
      if (*(int *)puVar2[0x80] == 0) goto LAB_10008387;
    }
    *puVar2 = 0;
    iVar4 = 0x1c;
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 4) = 0;
    do {
      iVar4 = iVar4 + 4;
      *(undefined4 *)(*(int *)(param_1 + 0x12e54) + -0x10 + iVar4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x12e54) + -4 + iVar4) = 0;
    } while (iVar4 < 0x28);
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x2c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x28) = 0;
    return 0;
  }
LAB_10008387:
  FUN_10007e90(param_1,(byte *)s_Unable_to_allocate_memory_for_fi_10018ca4);
  return 1;
}



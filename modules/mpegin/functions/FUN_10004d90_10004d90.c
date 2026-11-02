/* Module: mpegin.dll
   Function: FUN_10004d90
   Address: 10004d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10004d90(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x200),
               *(uint *)(*(int *)(param_1 + 0x12e54) + 0x214) & 7);
  uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x200,'\x10');
  while (((uVar2 != 0xb77 && (iVar3 = *(int *)(param_1 + 0x12e54), *(int *)(iVar3 + 0x244) == 0)) &&
         (*(int *)(iVar3 + 0x240) == 0))) {
    FUN_10005910((int *)(iVar3 + 0x200),8);
    uVar2 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x200,'\x10');
  }
  FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0x10);
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0x10);
  *(uint *)(param_1 + 0x4e74) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
  *(uint *)(param_1 + 0x4e78) = uVar2;
  if (uVar2 == 3) {
    FUN_10007e90(param_1,(byte *)s_Invalid_AC3_frequency_100189c8);
    return 1;
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),6);
  *(uint *)(param_1 + 0x4e7c) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
  *(uint *)(param_1 + 0x4e80) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),3);
  *(uint *)(param_1 + 0x4e84) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),3);
  *(uint *)(param_1 + 0x4e88) = uVar2;
  if (((uVar2 & 1) == 0) || (uVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x4e8c) = 0;
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4e8c) = uVar2;
  }
  if ((*(byte *)(param_1 + 0x4e88) & 4) == 0) {
    *(undefined4 *)(param_1 + 0x4e90) = 0;
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4e90) = uVar2;
  }
  if (*(int *)(param_1 + 0x4e88) == 2) {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4e94) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x4e94) = 0;
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4e98) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
  *(uint *)(param_1 + 0x4e9c) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ea0) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x4ea4) = 0;
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
    *(uint *)(param_1 + 0x4ea4) = uVar2;
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ea8) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x4eac) = 0;
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
    *(uint *)(param_1 + 0x4eac) = uVar2;
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4eb0) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x4eb4) = 0;
    *(undefined4 *)(param_1 + 0x4eb8) = 0;
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
    *(uint *)(param_1 + 0x4eb4) = uVar2;
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4eb8) = uVar2;
  }
  if (*(int *)(param_1 + 0x4e88) == 0) {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
    *(uint *)(param_1 + 0x4ebc) = uVar2;
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0x4ec0) = uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4ec4) = 0;
    }
    else {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
      *(uint *)(param_1 + 0x4ec4) = uVar2;
    }
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0x4ec8) = uVar2;
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4ecc) = 0;
    }
    else {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
      *(uint *)(param_1 + 0x4ecc) = uVar2;
    }
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0x4ed0) = uVar2;
    if (uVar2 != 0) {
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
      *(uint *)(param_1 + 0x4ed4) = uVar2;
      uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
      *(uint *)(param_1 + 0x4ed8) = uVar2;
      goto LAB_100051c6;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4ebc) = 0;
    *(undefined4 *)(param_1 + 0x4ec0) = 0;
    *(undefined4 *)(param_1 + 0x4ec4) = 0;
    *(undefined4 *)(param_1 + 0x4ec8) = 0;
    *(undefined4 *)(param_1 + 0x4ecc) = 0;
    *(undefined4 *)(param_1 + 0x4ed0) = 0;
  }
  *(undefined4 *)(param_1 + 0x4ed4) = 0;
  *(undefined4 *)(param_1 + 0x4ed8) = 0;
LAB_100051c6:
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4edc) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ee0) = uVar2;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ee4) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x4ee8) = 0;
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xe);
    *(uint *)(param_1 + 0x4ee8) = uVar2;
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4eec) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x4ef0) = 0;
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xe);
    *(uint *)(param_1 + 0x4ef0) = uVar2;
  }
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ef4) = uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x4ef8) = 0;
    puVar4 = (undefined4 *)(param_1 + 0x4efc);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),6);
    *(uint *)(param_1 + 0x4ef8) = uVar2;
    iVar3 = 0;
    if (uVar2 != 0xffffffff && -1 < (int)(uVar2 + 1)) {
      do {
        uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
        *(char *)(param_1 + 0x4efc + iVar3) = (char)uVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x4ef8) + 1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x244) != 0) {
    return 1;
  }
  uVar1 = *(undefined4 *)(&DAT_100186cc + *(int *)(param_1 + 0x4e78) * 4);
  *(undefined4 *)(param_1 + 0x94) = 0x10;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(uint *)(param_1 + 0x90) = (uint)(*(int *)(param_1 + 0x4e88) != 1);
  iVar3 = *(int *)(&DAT_100186dc + *(int *)(param_1 + 0x4e88) * 4) + *(int *)(param_1 + 0x4e98);
  *(int *)(param_1 + 0xca0) = iVar3;
  *(int *)(param_1 + 0xa4) = iVar3 * 2;
  *(undefined4 *)(param_1 + 0xa0) =
       *(undefined4 *)(&DAT_100186fc + (*(int *)(param_1 + 0x4e7c) >> 1) * 4);
  uVar1 = *(undefined4 *)
           (&DAT_10018748 + (*(int *)(param_1 + 0x4e7c) + *(int *)(param_1 + 0x4e78) * 0x26) * 4);
  *(undefined4 *)(param_1 + 0xcb0) = 0x600;
  *(undefined4 *)(param_1 + 0xcac) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x4e58) = 5;
  return 0;
}



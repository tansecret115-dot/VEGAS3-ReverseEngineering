/* Module: mpegin.dll
   Function: FUN_100043a0
   Address: 100043a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100043a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0x10);
  *(uint *)(param_1 + 0x4e74) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
  if (*(uint *)(param_1 + 0x4e78) != uVar1) {
    return 1;
  }
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),6);
  *(uint *)(param_1 + 0x4e7c) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
  *(uint *)(param_1 + 0x4e80) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),3);
  *(uint *)(param_1 + 0x4e84) = uVar1;
  uVar2 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),3);
  uVar1 = *(uint *)(param_1 + 0x4e88);
  if (uVar1 != uVar2) {
    return 1;
  }
  iVar3 = 0;
  if (((uVar1 & 1) == 0) || (uVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x4e8c) = 0;
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4e8c) = uVar1;
  }
  if ((*(byte *)(param_1 + 0x4e88) & 4) == 0) {
    *(undefined4 *)(param_1 + 0x4e90) = 0;
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4e90) = uVar1;
  }
  if (*(int *)(param_1 + 0x4e88) == 2) {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4e94) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x4e94) = 0;
  }
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4e98) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
  *(uint *)(param_1 + 0x4e9c) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ea0) = uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4ea4) = 0;
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
    *(uint *)(param_1 + 0x4ea4) = uVar1;
  }
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ea8) = uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4eac) = 0;
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
    *(uint *)(param_1 + 0x4eac) = uVar1;
  }
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4eb0) = uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4eb4) = 0;
    *(undefined4 *)(param_1 + 0x4eb8) = 0;
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
    *(uint *)(param_1 + 0x4eb4) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x4eb8) = uVar1;
  }
  if (*(int *)(param_1 + 0x4e88) == 0) {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
    *(uint *)(param_1 + 0x4ebc) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0x4ec0) = uVar1;
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x4ec4) = 0;
    }
    else {
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
      *(uint *)(param_1 + 0x4ec4) = uVar1;
    }
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0x4ec8) = uVar1;
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x4ecc) = 0;
    }
    else {
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
      *(uint *)(param_1 + 0x4ecc) = uVar1;
    }
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0x4ed0) = uVar1;
    if (uVar1 != 0) {
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),5);
      *(uint *)(param_1 + 0x4ed4) = uVar1;
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
      *(uint *)(param_1 + 0x4ed8) = uVar1;
      goto LAB_10004743;
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
LAB_10004743:
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4edc) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ee0) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ee4) = uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4ee8) = 0;
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xe);
    *(uint *)(param_1 + 0x4ee8) = uVar1;
  }
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4eec) = uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4ef0) = 0;
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xe);
    *(uint *)(param_1 + 0x4ef0) = uVar1;
  }
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0x4ef4) = uVar1;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4ef8) = 0;
    puVar4 = (undefined4 *)(param_1 + 0x4efc);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),6);
    *(uint *)(param_1 + 0x4ef8) = uVar1;
    if (uVar1 != 0xffffffff && -1 < (int)(uVar1 + 1)) {
      do {
        uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),8);
        *(char *)(param_1 + 0x4efc + iVar3) = (char)uVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x4ef8) + 1);
    }
  }
  *(undefined4 *)(param_1 + 0xcac) =
       *(undefined4 *)
        (&DAT_10018418 + (*(int *)(param_1 + 0x4e7c) + *(int *)(param_1 + 0x4e78) * 0x26) * 4);
  return 0;
}



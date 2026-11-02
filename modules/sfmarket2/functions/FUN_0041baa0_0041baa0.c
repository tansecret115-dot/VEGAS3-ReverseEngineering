/* Module: sfmarket2.dll
   Function: FUN_0041baa0
   Address: 0041baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041baa0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_0041b250();
  uVar3 = 1;
  iVar1 = 0;
  do {
    *(uint *)((int)&DAT_004aa0c8 + iVar1) = 5 - (uVar3 >> 5);
    iVar4 = iVar1 + 4;
    *(int *)((int)&DAT_004a9dfc + iVar1) = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)&DAT_004aa22c + iVar1) = 5 - (0xb3 - uVar3 >> 5);
    *(int *)((int)&DAT_004a9f60 + iVar1) = 1 << (-(byte)uVar3 - 0xd & 0x1f);
    uVar3 = (int)(uVar3 * 2) % 0xb3;
    iVar1 = iVar4;
  } while (iVar4 < 0x164);
  _DAT_004aa0c4 = DAT_004a9dfc;
  puVar5 = &DAT_004aad01;
  for (iVar1 = 0x3f; _DAT_004aa390 = DAT_004aa0c8, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar1 = 2;
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  DAT_004aad00 = 1;
  do {
    iVar4 = 0;
    do {
      (&DAT_004aad00)[iVar4] = (&DAT_004aad00)[iVar4] + '\x01';
      iVar4 = iVar4 + iVar1;
    } while (iVar4 < 0x100);
    iVar1 = iVar1 * 2;
  } while (iVar1 < 0x100);
  puVar5 = &DAT_004aa664;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 1;
  uVar2 = uVar3;
  do {
    for (; (int)uVar3 < 0x100; uVar3 = uVar3 + 1) {
      if ((uVar2 & uVar3) != 0) {
        *(byte *)((int)&DAT_004aa664 + uVar3) = *(byte *)((int)&DAT_004aa664 + uVar3) ^ 1;
      }
    }
    uVar3 = uVar2 * 2;
    uVar2 = uVar3;
  } while ((int)uVar3 < 0x100);
  return;
}



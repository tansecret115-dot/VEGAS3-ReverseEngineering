/* Module: sftrans1.dll
   Function: FUN_00536ce0
   Address: 00536ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536ce0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_00536490();
  uVar3 = 1;
  iVar1 = 0;
  do {
    *(uint *)((int)&DAT_006216f8 + iVar1) = 5 - (uVar3 >> 5);
    iVar4 = iVar1 + 4;
    *(int *)((int)&DAT_0062142c + iVar1) = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)&DAT_0062185c + iVar1) = 5 - (0xb3 - uVar3 >> 5);
    *(int *)((int)&DAT_00621590 + iVar1) = 1 << (-(byte)uVar3 - 0xd & 0x1f);
    uVar3 = (int)(uVar3 * 2) % 0xb3;
    iVar1 = iVar4;
  } while (iVar4 < 0x164);
  _DAT_006216f4 = DAT_0062142c;
  puVar5 = &DAT_00622331;
  for (iVar1 = 0x3f; _DAT_006219c0 = DAT_006216f8, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar1 = 2;
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  DAT_00622330 = 1;
  do {
    iVar4 = 0;
    do {
      (&DAT_00622330)[iVar4] = (&DAT_00622330)[iVar4] + '\x01';
      iVar4 = iVar4 + iVar1;
    } while (iVar4 < 0x100);
    iVar1 = iVar1 * 2;
  } while (iVar1 < 0x100);
  puVar5 = &DAT_00621c94;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 1;
  uVar2 = uVar3;
  do {
    for (; (int)uVar3 < 0x100; uVar3 = uVar3 + 1) {
      if ((uVar2 & uVar3) != 0) {
        *(byte *)((int)&DAT_00621c94 + uVar3) = *(byte *)((int)&DAT_00621c94 + uVar3) ^ 1;
      }
    }
    uVar3 = uVar2 * 2;
    uVar2 = uVar3;
  } while ((int)uVar3 < 0x100);
  return;
}



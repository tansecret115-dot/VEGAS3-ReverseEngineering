/* Module: sfppack1.dll
   Function: FUN_5ce0a810
   Address: 5ce0a810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ce0a810(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_5ce09fc0();
  uVar3 = 1;
  iVar1 = 0;
  do {
    *(uint *)((int)&DAT_5ce2935c + iVar1) = 5 - (uVar3 >> 5);
    iVar4 = iVar1 + 4;
    *(int *)((int)&DAT_5ce29090 + iVar1) = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)&DAT_5ce294c0 + iVar1) = 5 - (0xb3 - uVar3 >> 5);
    *(int *)((int)&DAT_5ce291f4 + iVar1) = 1 << (-(byte)uVar3 - 0xd & 0x1f);
    uVar3 = (int)(uVar3 * 2) % 0xb3;
    iVar1 = iVar4;
  } while (iVar4 < 0x164);
  _DAT_5ce29358 = DAT_5ce29090;
  puVar5 = &DAT_5ce29f95;
  for (iVar1 = 0x3f; _DAT_5ce29624 = DAT_5ce2935c, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar1 = 2;
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  DAT_5ce29f94 = 1;
  do {
    iVar4 = 0;
    do {
      (&DAT_5ce29f94)[iVar4] = (&DAT_5ce29f94)[iVar4] + '\x01';
      iVar4 = iVar4 + iVar1;
    } while (iVar4 < 0x100);
    iVar1 = iVar1 * 2;
  } while (iVar1 < 0x100);
  puVar5 = &DAT_5ce298f8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 1;
  uVar2 = uVar3;
  do {
    for (; (int)uVar3 < 0x100; uVar3 = uVar3 + 1) {
      if ((uVar2 & uVar3) != 0) {
        *(byte *)((int)&DAT_5ce298f8 + uVar3) = *(byte *)((int)&DAT_5ce298f8 + uVar3) ^ 1;
      }
    }
    uVar3 = uVar2 * 2;
    uVar2 = uVar3;
  } while ((int)uVar3 < 0x100);
  return;
}



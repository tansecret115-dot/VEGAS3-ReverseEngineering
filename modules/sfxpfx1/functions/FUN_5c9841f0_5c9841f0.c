/* Module: sfxpfx1.dll
   Function: FUN_5c9841f0
   Address: 5c9841f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c9841f0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_5c9839a0();
  uVar3 = 1;
  iVar1 = 0;
  do {
    *(uint *)((int)&DAT_5c99e2d4 + iVar1) = 5 - (uVar3 >> 5);
    iVar4 = iVar1 + 4;
    *(int *)((int)&DAT_5c99e008 + iVar1) = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)&DAT_5c99e438 + iVar1) = 5 - (0xb3 - uVar3 >> 5);
    *(int *)((int)&DAT_5c99e16c + iVar1) = 1 << (-(byte)uVar3 - 0xd & 0x1f);
    uVar3 = (int)(uVar3 * 2) % 0xb3;
    iVar1 = iVar4;
  } while (iVar4 < 0x164);
  _DAT_5c99e2d0 = DAT_5c99e008;
  puVar5 = &DAT_5c99ef0d;
  for (iVar1 = 0x3f; _DAT_5c99e59c = DAT_5c99e2d4, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar1 = 2;
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  DAT_5c99ef0c = 1;
  do {
    iVar4 = 0;
    do {
      (&DAT_5c99ef0c)[iVar4] = (&DAT_5c99ef0c)[iVar4] + '\x01';
      iVar4 = iVar4 + iVar1;
    } while (iVar4 < 0x100);
    iVar1 = iVar1 * 2;
  } while (iVar1 < 0x100);
  puVar5 = &DAT_5c99e870;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 1;
  uVar2 = uVar3;
  do {
    for (; (int)uVar3 < 0x100; uVar3 = uVar3 + 1) {
      if ((uVar2 & uVar3) != 0) {
        *(byte *)((int)&DAT_5c99e870 + uVar3) = *(byte *)((int)&DAT_5c99e870 + uVar3) ^ 1;
      }
    }
    uVar3 = uVar2 * 2;
    uVar2 = uVar3;
  } while ((int)uVar3 < 0x100);
  return;
}



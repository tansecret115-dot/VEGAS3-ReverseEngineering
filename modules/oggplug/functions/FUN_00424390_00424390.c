/* Module: oggplug.dll
   Function: FUN_00424390
   Address: 00424390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424390(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0044c8e0;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0044c8e4)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_0040bbf0(DAT_00510e98,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0044ca40);
    if ((DAT_0044c8e4 >> 0x10 == 0) && (DAT_0044c8e4 != 0)) {
      FUN_0040bbf0(DAT_00510e98,DAT_0044c8e4);
    }
  }
  return;
}



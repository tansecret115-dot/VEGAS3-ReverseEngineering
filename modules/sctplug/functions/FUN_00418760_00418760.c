/* Module: sctplug.dll
   Function: FUN_00418760
   Address: 00418760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418760(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_004372f0;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_004372f4)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_0040dea0(DAT_0043cd30,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_00437450);
    if ((DAT_004372f4 >> 0x10 == 0) && (DAT_004372f4 != 0)) {
      FUN_0040dea0(DAT_0043cd30,DAT_004372f4);
    }
  }
  return;
}



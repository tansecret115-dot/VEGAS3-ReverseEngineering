/* Module: sftrkfx1.dll
   Function: FUN_5cbe7890
   Address: 5cbe7890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbe7890(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5cc09a70;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5cc09a74)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5cbd6910(DAT_5cc114f8,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_5cc09bd0);
    if ((DAT_5cc09a74 >> 0x10 == 0) && (DAT_5cc09a74 != 0)) {
      FUN_5cbd6910(DAT_5cc114f8,DAT_5cc09a74);
    }
  }
  return;
}



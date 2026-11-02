/* Module: sfppack2.dll
   Function: FUN_5cd39ca0
   Address: 5cd39ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd39ca0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5cd59518;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5cd5951c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5cd08210(DAT_5cd67a38,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5cd59678);
    if ((DAT_5cd5951c >> 0x10 == 0) && (DAT_5cd5951c != 0)) {
      FUN_5cd08210(DAT_5cd67a38,DAT_5cd5951c);
    }
  }
  return;
}



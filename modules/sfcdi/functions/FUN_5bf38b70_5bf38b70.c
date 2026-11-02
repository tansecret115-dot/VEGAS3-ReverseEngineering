/* Module: sfcdi.dll
   Function: FUN_5bf38b70
   Address: 5bf38b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf38b70(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5bf5b0a8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5bf5b0ac)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5bf29180(DAT_5bf76078,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_5bf5b208);
    if ((DAT_5bf5b0ac >> 0x10 == 0) && (DAT_5bf5b0ac != 0)) {
      FUN_5bf29180(DAT_5bf76078,DAT_5bf5b0ac);
    }
  }
  return;
}



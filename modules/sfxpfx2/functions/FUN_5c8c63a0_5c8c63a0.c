/* Module: sfxpfx2.dll
   Function: FUN_5c8c63a0
   Address: 5c8c63a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8c63a0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5c8e2238;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5c8e223c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5c8a8180(DAT_5c8e93f8,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5c8e2398);
    if ((DAT_5c8e223c >> 0x10 == 0) && (DAT_5c8e223c != 0)) {
      FUN_5c8a8180(DAT_5c8e93f8,DAT_5c8e223c);
    }
  }
  return;
}



/* Module: g2plug.dll
   Function: FUN_5f8622a0
   Address: 5f8622a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8622a0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5f8722a8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5f8722ac)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5f818540(DAT_5f877520,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_5f872408);
    if ((DAT_5f8722ac >> 0x10 == 0) && (DAT_5f8722ac != 0)) {
      FUN_5f818540(DAT_5f877520,DAT_5f8722ac);
    }
  }
  return;
}



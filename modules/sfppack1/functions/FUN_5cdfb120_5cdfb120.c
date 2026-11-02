/* Module: sfppack1.dll
   Function: FUN_5cdfb120
   Address: 5cdfb120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdfb120(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5ce197f0;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5ce197f4)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5cddcf00(DAT_5ce23828,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5ce19950);
    if ((DAT_5ce197f4 >> 0x10 == 0) && (DAT_5ce197f4 != 0)) {
      FUN_5cddcf00(DAT_5ce23828,DAT_5ce197f4);
    }
  }
  return;
}



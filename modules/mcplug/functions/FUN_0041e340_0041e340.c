/* Module: mcplug.dll
   Function: FUN_0041e340
   Address: 0041e340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e340(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0047eba8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0047ebac)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_0041a210(DAT_00487ed8,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0047ed08);
    if ((DAT_0047ebac >> 0x10 == 0) && (DAT_0047ebac != 0)) {
      FUN_0041a210(DAT_00487ed8,DAT_0047ebac);
    }
  }
  return;
}



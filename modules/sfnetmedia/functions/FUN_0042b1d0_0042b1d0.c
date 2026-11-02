/* Module: sfnetmedia.dll
   Function: FUN_0042b1d0
   Address: 0042b1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042b1d0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0043b400;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0043b404)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00419120(DAT_00441d60,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0043b560);
    if ((DAT_0043b404 >> 0x10 == 0) && (DAT_0043b404 != 0)) {
      FUN_00419120(DAT_00441d60,DAT_0043b404);
    }
  }
  return;
}



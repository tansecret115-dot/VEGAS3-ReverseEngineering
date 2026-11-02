/* Module: vidpcore.dll
   Function: FUN_5df02c20
   Address: 5df02c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df02c20(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5df365b8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5df365bc)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5deb8a80(DAT_5df42ed8,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_5df36718);
    if ((DAT_5df365bc >> 0x10 == 0) && (DAT_5df365bc != 0)) {
      FUN_5deb8a80(DAT_5df42ed8,DAT_5df365bc);
    }
  }
  return;
}



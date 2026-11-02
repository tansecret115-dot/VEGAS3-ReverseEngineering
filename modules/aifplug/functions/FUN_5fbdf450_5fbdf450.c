/* Module: aifplug.dll
   Function: FUN_5fbdf450
   Address: 5fbdf450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbdf450(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5fc04038;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5fc0403c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5fbda8f0(DAT_5fc09910,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5fc04198);
    if ((DAT_5fc0403c >> 0x10 == 0) && (DAT_5fc0403c != 0)) {
      FUN_5fbda8f0(DAT_5fc09910,DAT_5fc0403c);
    }
  }
  return;
}



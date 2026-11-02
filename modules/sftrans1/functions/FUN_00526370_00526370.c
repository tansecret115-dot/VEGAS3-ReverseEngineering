/* Module: sftrans1.dll
   Function: FUN_00526370
   Address: 00526370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00526370(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0056cc30;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0056cc34)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_004ca510(DAT_0057b888,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0056cd90);
    if ((DAT_0056cc34 >> 0x10 == 0) && (DAT_0056cc34 != 0)) {
      FUN_004ca510(DAT_0057b888,DAT_0056cc34);
    }
  }
  return;
}



/* Module: qt4plug.dll
   Function: FUN_5f53e160
   Address: 5f53e160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f53e160(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5f59b908;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5f59b90c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5f528830(DAT_5f5a4158,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5f59ba68);
    if ((DAT_5f59b90c >> 0x10 == 0) && (DAT_5f59b90c != 0)) {
      FUN_5f528830(DAT_5f5a4158,DAT_5f59b90c);
    }
  }
  return;
}



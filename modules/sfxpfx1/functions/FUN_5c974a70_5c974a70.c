/* Module: sfxpfx1.dll
   Function: FUN_5c974a70
   Address: 5c974a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c974a70(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5c990f50;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5c990f54)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5c956850(DAT_5c9987a0,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5c9910b0);
    if ((DAT_5c990f54 >> 0x10 == 0) && (DAT_5c990f54 != 0)) {
      FUN_5c956850(DAT_5c9987a0,DAT_5c990f54);
    }
  }
  return;
}



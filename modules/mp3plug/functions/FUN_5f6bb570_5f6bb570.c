/* Module: mp3plug.dll
   Function: FUN_5f6bb570
   Address: 5f6bb570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6bb570(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5f735110;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5f735114)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5f69eff0(DAT_5f74d488,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_5f735270);
    if ((DAT_5f735114 >> 0x10 == 0) && (DAT_5f735114 != 0)) {
      FUN_5f69eff0(DAT_5f74d488,DAT_5f735114);
    }
  }
  return;
}



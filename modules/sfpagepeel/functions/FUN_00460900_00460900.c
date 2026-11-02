/* Module: sfpagepeel.dll
   Function: FUN_00460900
   Address: 00460900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460900(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_004771d8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_004771dc)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00428a50(DAT_0047d9f0,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_00477338);
    if ((DAT_004771dc >> 0x10 == 0) && (DAT_004771dc != 0)) {
      FUN_00428a50(DAT_0047d9f0,DAT_004771dc);
    }
  }
  return;
}



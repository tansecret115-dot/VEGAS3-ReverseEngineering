/* Module: sfconfigmgr.dll
   Function: FUN_0040fdd0
   Address: 0040fdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040fdd0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0041efd8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0041efdc)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00409ac0(DAT_004230d0,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0041f138);
    if ((DAT_0041efdc >> 0x10 == 0) && (DAT_0041efdc != 0)) {
      FUN_00409ac0(DAT_004230d0,DAT_0041efdc);
    }
  }
  return;
}



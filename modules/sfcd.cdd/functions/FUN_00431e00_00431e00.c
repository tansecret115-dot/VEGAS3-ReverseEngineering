/* Module: sfcd.cdd
   Function: FUN_00431e00
   Address: 00431e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00431e00(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_00438ee8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_00438eec)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00426ed0(DAT_00441930,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_00439048);
    if ((DAT_00438eec >> 0x10 == 0) && (DAT_00438eec != 0)) {
      FUN_00426ed0(DAT_00441930,DAT_00438eec);
    }
  }
  return;
}



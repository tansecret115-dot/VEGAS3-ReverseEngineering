/* Module: sfpaplug.dll
   Function: FUN_00429700
   Address: 00429700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429700(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_00453ad8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_00453adc)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00416f60(DAT_0045c380,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_00453c38);
    if ((DAT_00453adc >> 0x10 == 0) && (DAT_00453adc != 0)) {
      FUN_00416f60(DAT_0045c380,DAT_00453adc);
    }
  }
  return;
}



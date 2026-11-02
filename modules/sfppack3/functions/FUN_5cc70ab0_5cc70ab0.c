/* Module: sfppack3.dll
   Function: FUN_5cc70ab0
   Address: 5cc70ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc70ab0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5cc8dc80;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5cc8dc84)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5cc4e750(DAT_5cc98300,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5cc8dde0);
    if ((DAT_5cc8dc84 >> 0x10 == 0) && (DAT_5cc8dc84 != 0)) {
      FUN_5cc4e750(DAT_5cc98300,DAT_5cc8dc84);
    }
  }
  return;
}



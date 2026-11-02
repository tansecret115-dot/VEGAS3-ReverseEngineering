/* Module: sfmarket2.dll
   Function: FUN_0043edf0
   Address: 0043edf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043edf0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0049d5e0;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0049d5e4)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00423470(DAT_004aaec0,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0049d740);
    if ((DAT_0049d5e4 >> 0x10 == 0) && (DAT_0049d5e4 != 0)) {
      FUN_00423470(DAT_004aaec0,DAT_0049d5e4);
    }
  }
  return;
}



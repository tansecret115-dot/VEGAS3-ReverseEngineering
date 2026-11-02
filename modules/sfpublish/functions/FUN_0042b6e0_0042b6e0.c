/* Module: sfpublish.dll
   Function: FUN_0042b6e0
   Address: 0042b6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042b6e0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0043b630;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0043b634)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_0041c790(DAT_00441c78,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0043b790);
    if ((DAT_0043b634 >> 0x10 == 0) && (DAT_0043b634 != 0)) {
      FUN_0041c790(DAT_00441c78,DAT_0043b634);
    }
  }
  return;
}



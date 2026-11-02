/* Module: wmfplug2.dll
   Function: FUN_00427c40
   Address: 00427c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427c40(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_00482048;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0048204c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_00420d00(DAT_00489e30,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_004821a8);
    if ((DAT_0048204c >> 0x10 == 0) && (DAT_0048204c != 0)) {
      FUN_00420d00(DAT_00489e30,DAT_0048204c);
    }
  }
  return;
}



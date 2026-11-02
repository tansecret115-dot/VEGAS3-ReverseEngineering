/* Module: Setup.exe
   Function: FUN_0041f620
   Address: 0041f620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f620(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_00439ca0;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_00439ca4)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        _SfGetString2_8(DAT_00448e00,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_00439e00);
    if ((DAT_00439ca4 >> 0x10 == 0) && (DAT_00439ca4 != 0)) {
      _SfGetString2_8(DAT_00448e00,DAT_00439ca4);
    }
  }
  return;
}



/* Module: vidcap30.exe
   Function: FUN_0047e040
   Address: 0047e040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e040(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_00593d40;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_00593d44)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        _SfGetString2_8(DAT_005c16d8,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_00593ea0);
    if ((DAT_00593d44 >> 0x10 == 0) && (DAT_00593d44 != 0)) {
      _SfGetString2_8(DAT_005c16d8,DAT_00593d44);
    }
  }
  return;
}



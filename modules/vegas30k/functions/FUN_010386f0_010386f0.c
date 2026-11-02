/* Module: vegas30k.dll
   Function: FUN_010386f0
   Address: 010386f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010386f0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_011dbf58;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_011dbf5c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        _SfGetString2_8(DAT_0120e5c8,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_011dc0b8);
    if ((DAT_011dbf5c >> 0x10 == 0) && (DAT_011dbf5c != 0)) {
      _SfGetString2_8(DAT_0120e5c8,DAT_011dbf5c);
    }
  }
  return;
}



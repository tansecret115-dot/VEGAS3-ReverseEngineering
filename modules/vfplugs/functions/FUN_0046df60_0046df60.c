/* Module: vfplugs.dll
   Function: FUN_0046df60
   Address: 0046df60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046df60(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0048e568;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0048e56c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_0042da70(DAT_00494a78,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_0048e6c8);
    if ((DAT_0048e56c >> 0x10 == 0) && (DAT_0048e56c != 0)) {
      FUN_0042da70(DAT_00494a78,DAT_0048e56c);
    }
  }
  return;
}



/* Module: stl2plg.dll
   Function: FUN_00420cb0
   Address: 00420cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420cb0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_0046b9c8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_0046b9cc)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_0040e730(DAT_00473620,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x46bb28);
    if ((DAT_0046b9cc >> 0x10 == 0) && (DAT_0046b9cc != 0)) {
      FUN_0040e730(DAT_00473620,DAT_0046b9cc);
    }
  }
  return;
}



/* Module: wavplug.dll
   Function: FUN_5f3a7470
   Address: 5f3a7470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3a7470(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5f3cfaf0;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5f3cfaf4)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5f3984e0(DAT_5f3db380,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while ((int)puVar2 < 0x5f3cfc50);
    if ((DAT_5f3cfaf4 >> 0x10 == 0) && (DAT_5f3cfaf4 != 0)) {
      FUN_5f3984e0(DAT_5f3db380,DAT_5f3cfaf4);
    }
  }
  return;
}



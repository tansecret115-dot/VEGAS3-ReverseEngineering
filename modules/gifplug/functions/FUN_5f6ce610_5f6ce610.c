/* Module: gifplug.dll
   Function: FUN_5f6ce610
   Address: 5f6ce610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ce610(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5f706808;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5f70680c)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5f6cce60(DAT_5f70bef0,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_5f706968);
    if ((DAT_5f70680c >> 0x10 == 0) && (DAT_5f70680c != 0)) {
      FUN_5f6cce60(DAT_5f70bef0,DAT_5f70680c);
    }
  }
  return;
}



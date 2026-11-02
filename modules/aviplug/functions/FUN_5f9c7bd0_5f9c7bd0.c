/* Module: aviplug.dll
   Function: FUN_5f9c7bd0
   Address: 5f9c7bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9c7bd0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_1 >> 0x10 == 0) {
    iVar3 = 0;
    puVar2 = &DAT_5f9edbd8;
    do {
      if (param_1 == *puVar2) {
        uVar1 = (&DAT_5f9edbdc)[iVar3 * 2];
        if (uVar1 >> 0x10 != 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        FUN_5f981f60(DAT_5f9f5978,uVar1);
        return;
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
    } while (puVar2 < &DAT_5f9edd38);
    if ((DAT_5f9edbdc >> 0x10 == 0) && (DAT_5f9edbdc != 0)) {
      FUN_5f981f60(DAT_5f9f5978,DAT_5f9edbdc);
    }
  }
  return;
}



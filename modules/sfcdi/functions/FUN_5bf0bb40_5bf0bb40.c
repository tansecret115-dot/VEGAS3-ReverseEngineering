/* Module: sfcdi.dll
   Function: FUN_5bf0bb40
   Address: 5bf0bb40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0bb40(uint param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((param_1 < 8) && ((int)param_2 < 0x10)) {
    uVar1 = 0;
    if ((&DAT_5bf631d8)[param_1 * 0x22] != 0) {
      pbVar2 = &DAT_5bf631dc + param_1 * 0x88;
      do {
        if ((*pbVar2 & 0xf) == param_2) {
          return *(undefined4 *)(&DAT_5bf631e0 + uVar1 * 8 + param_1 * 0x88);
        }
        uVar1 = uVar1 + 1;
        pbVar2 = pbVar2 + 8;
      } while (uVar1 < (uint)(&DAT_5bf631d8)[param_1 * 0x22]);
    }
  }
  return 0;
}



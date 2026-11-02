/* Module: vidcap30.exe
   Function: _SfVideo_PaletteEntryFromRGBA@12
   Address: 00491ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVideo_PaletteEntryFromRGBA_12(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
                    /* 0x91ab0  663  _SfVideo_PaletteEntryFromRGBA@12 */
  if (0 < param_3) {
    puVar2 = (undefined1 *)(param_1 + 3);
    puVar1 = (undefined1 *)(param_2 + 1);
    do {
      puVar2[-3] = puVar1[1];
      (puVar1 + 4)[(param_1 - param_2) + -4] = *puVar1;
      puVar2[-1] = puVar1[-1];
      *puVar2 = 0;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}



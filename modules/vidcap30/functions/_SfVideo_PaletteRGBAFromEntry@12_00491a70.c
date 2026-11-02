/* Module: vidcap30.exe
   Function: _SfVideo_PaletteRGBAFromEntry@12
   Address: 00491a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVideo_PaletteRGBAFromEntry_12(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
                    /* 0x91a70  664  _SfVideo_PaletteRGBAFromEntry@12 */
  if (0 < param_3) {
    puVar1 = (undefined1 *)(param_1 + 1);
    puVar2 = param_2;
    do {
      puVar1[1] = *puVar2;
      *puVar1 = puVar1[(int)param_2 - param_1];
      puVar1[-1] = puVar2[2];
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



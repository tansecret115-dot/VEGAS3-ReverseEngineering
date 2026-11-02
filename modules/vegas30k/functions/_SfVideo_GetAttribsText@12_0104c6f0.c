/* Module: vegas30k.dll
   Function: _SfVideo_GetAttribsText@12
   Address: 0104c6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfVideo_GetAttribsText_12(int param_1,int param_2)

{
                    /* 0x4c6f0  1276  _SfVideo_GetAttribsText@12 */
  _SfVideo_IsCompressed_4(param_1);
  if (param_2 != 0) {
    SfPrintF(param_2,"%dx%dx%d",*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined2 *)(param_1 + 0xe));
  }
  return 0;
}



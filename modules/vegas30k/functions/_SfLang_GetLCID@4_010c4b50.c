/* Module: vegas30k.dll
   Function: _SfLang_GetLCID@4
   Address: 010c4b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_GetLCID_4(int param_1)

{
  undefined4 uVar1;
  
                    /* 0xc4b50  1047  _SfLang_GetLCID@4 */
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x13c);
  }
  return uVar1;
}



/* Module: vidcap30.exe
   Function: _SfLang_GetLCID@4
   Address: 0047b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_GetLCID_4(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x7b1c0  481  _SfLang_GetLCID@4 */
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x13c);
  }
  return uVar1;
}



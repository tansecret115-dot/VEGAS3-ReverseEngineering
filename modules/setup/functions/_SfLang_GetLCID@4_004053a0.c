/* Module: Setup.exe
   Function: _SfLang_GetLCID@4
   Address: 004053a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_GetLCID_4(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x53a0  211  _SfLang_GetLCID@4 */
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x13c);
  }
  return uVar1;
}



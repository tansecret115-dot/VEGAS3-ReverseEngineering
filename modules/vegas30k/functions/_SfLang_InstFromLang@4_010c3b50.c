/* Module: vegas30k.dll
   Function: _SfLang_InstFromLang@4
   Address: 010c3b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfLang_InstFromLang_4(int *param_1)

{
  int iVar1;
  
                    /* 0xc3b50  1049  _SfLang_InstFromLang@4 */
  iVar1 = param_1[0x4e];
  if (((iVar1 == 0) || (param_1[0x4d] == 0)) || (iVar1 == 0)) {
    iVar1 = *param_1;
  }
  return iVar1;
}



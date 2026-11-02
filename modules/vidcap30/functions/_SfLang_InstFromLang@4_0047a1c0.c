/* Module: vidcap30.exe
   Function: _SfLang_InstFromLang@4
   Address: 0047a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfLang_InstFromLang_4(int *param_1)

{
  int iVar1;
  
                    /* 0x7a1c0  483  _SfLang_InstFromLang@4 */
  iVar1 = param_1[0x4e];
  if (((iVar1 == 0) || (param_1[0x4d] == 0)) || (iVar1 == 0)) {
    iVar1 = *param_1;
  }
  return iVar1;
}



/* Module: Setup.exe
   Function: _SfLang_GetLangAbbrev@12
   Address: 004053c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_GetLangAbbrev_12(int param_1,LPSTR param_2,int param_3)

{
                    /* 0x53c0  212  _SfLang_GetLangAbbrev@12 */
  if (param_1 != 0) {
    GetLocaleInfoA(*(LCID *)(param_1 + 0x13c),3,param_2,param_3);
    return 1;
  }
  return 0;
}



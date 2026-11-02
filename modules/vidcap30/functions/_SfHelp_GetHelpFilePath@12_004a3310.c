/* Module: vidcap30.exe
   Function: _SfHelp_GetHelpFilePath@12
   Address: 004a3310
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfHelp_GetHelpFilePath_12(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
                    /* 0xa3310  454  _SfHelp_GetHelpFilePath@12 */
  if (param_1 == 0) {
    lpString2 = &DAT_005c20c0;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_005c21c4;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}



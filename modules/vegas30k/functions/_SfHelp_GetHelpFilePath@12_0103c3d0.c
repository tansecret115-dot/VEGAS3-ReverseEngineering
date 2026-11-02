/* Module: vegas30k.dll
   Function: _SfHelp_GetHelpFilePath@12
   Address: 0103c3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfHelp_GetHelpFilePath_12(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
                    /* 0x3c3d0  1015  _SfHelp_GetHelpFilePath@12 */
  if (param_1 == 0) {
    lpString2 = &DAT_0120e344;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_0120e448;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}



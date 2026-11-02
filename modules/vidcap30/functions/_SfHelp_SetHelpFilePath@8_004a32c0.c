/* Module: vidcap30.exe
   Function: _SfHelp_SetHelpFilePath@8
   Address: 004a32c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfHelp_SetHelpFilePath_8(int param_1,LPCSTR param_2)

{
                    /* 0xa32c0  456  _SfHelp_SetHelpFilePath@8 */
  if (param_1 == 0) {
    lstrcpynA(&DAT_005c20c0,param_2,0x104);
    DAT_005c21c3 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_005c21c4,param_2,0x104);
    DAT_005c22c7 = 0;
    return;
  }
  return;
}



/* Module: vegas30k.dll
   Function: _SfHelp_SetHelpFilePath@8
   Address: 0103c380
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfHelp_SetHelpFilePath_8(int param_1,LPCSTR param_2)

{
                    /* 0x3c380  1017  _SfHelp_SetHelpFilePath@8 */
  if (param_1 == 0) {
    lstrcpynA(&DAT_0120e344,param_2,0x104);
    DAT_0120e447 = 0;
  }
  else if (param_1 == 1) {
    lstrcpynA(&DAT_0120e448,param_2,0x104);
    DAT_0120e54b = 0;
    return;
  }
  return;
}



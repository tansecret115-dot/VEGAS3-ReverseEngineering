/* Module: vegas30k.dll
   Function: _SfHelp_CreateHelpFilePathEX@16
   Address: 0103c340
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfHelp_CreateHelpFilePathEX_16
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* 0x3c340  1013  _SfHelp_CreateHelpFilePathEX@16 */
  iVar1 = _SfHelp_CreateSharedHelpFilePath_16(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    _SfHelp_CreateHelpFilePath_16(param_1,param_2,param_3,param_4);
  }
  return;
}



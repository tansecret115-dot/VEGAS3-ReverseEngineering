/* Module: vegas30k.dll
   Function: _SfErrorHandler_AddErrorTable@8
   Address: 01038240
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfErrorHandler_AddErrorTable_8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  
                    /* 0x38240  915  _SfErrorHandler_AddErrorTable@8 */
  bVar1 = 0x1f < DAT_0120e324;
  if (!bVar1) {
    (&DAT_01209a18)[DAT_0120e324 * 2] = param_1;
    (&DAT_01209a1c)[DAT_0120e324 * 2] = param_2;
    DAT_0120e324 = DAT_0120e324 + 1;
  }
  return bVar1;
}



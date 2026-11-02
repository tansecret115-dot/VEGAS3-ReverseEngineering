/* Module: Setup.exe
   Function: _SfErrorHandler_AddErrorTable@8
   Address: 0041f170
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfErrorHandler_AddErrorTable_8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  
                    /* 0x1f170  116  _SfErrorHandler_AddErrorTable@8 */
  bVar1 = 0x1f < DAT_0044e34c;
  if (!bVar1) {
    (&DAT_00449a40)[DAT_0044e34c * 2] = param_1;
    (&DAT_00449a44)[DAT_0044e34c * 2] = param_2;
    DAT_0044e34c = DAT_0044e34c + 1;
  }
  return bVar1;
}



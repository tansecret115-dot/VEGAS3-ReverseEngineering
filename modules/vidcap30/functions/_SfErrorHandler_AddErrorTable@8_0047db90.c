/* Module: vidcap30.exe
   Function: _SfErrorHandler_AddErrorTable@8
   Address: 0047db90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfErrorHandler_AddErrorTable_8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  
                    /* 0x7db90  367  _SfErrorHandler_AddErrorTable@8 */
  bVar1 = 0x1f < DAT_005c149c;
  if (!bVar1) {
    (&DAT_005bcb90)[DAT_005c149c * 2] = param_1;
    (&DAT_005bcb94)[DAT_005c149c * 2] = param_2;
    DAT_005c149c = DAT_005c149c + 1;
  }
  return bVar1;
}



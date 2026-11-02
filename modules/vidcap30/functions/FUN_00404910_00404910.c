/* Module: vidcap30.exe
   Function: FUN_00404910
   Address: 00404910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404910(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 local_104 [260];
  
  bVar1 = -1 < param_1;
  if (bVar1) {
    param_1 = _SfErrorHandler_GetLastError_0();
  }
  if ((param_1 < 0) || (param_1 == 0x4e005)) {
    if (((-0x7ff5fffc < param_1) && (param_1 < -0x7ff5fd15)) ||
       ((-0x7ffbfe01 < param_1 && (param_1 < -0x7ffbfd83)))) {
      AMGetErrorTextA(param_1,local_104,0x104);
      SfErrorHandler_DetailsAddString(param_1,local_104);
      param_1 = -0x7fffbffb;
    }
    _SfErrorHandler_MsgBox_24(0,0x30,param_2,param_1,0,bVar1);
  }
  return;
}



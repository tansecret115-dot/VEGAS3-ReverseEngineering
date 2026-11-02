/* Module: vidcap30.exe
   Function: FUN_00431dd0
   Address: 00431dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00431dd0(undefined4 *param_1,int param_2)

{
  uchar *_Dest;
  
  _Dest = (uchar *)(param_1 + 4);
  param_1[0x18] = 0;
  param_1[3] = _Dest;
  if (param_2 != 0) {
    _SfLoadString_16(DAT_005ba2a0,param_2,_Dest,0x50);
    SetWindowPos((HWND)*param_1,(HWND)0x0,0,0,0,0,0x213);
    return 1;
  }
  _mbscpy(_Dest,"");
  return 0;
}



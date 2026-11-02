/* Module: wmfplug2.dll
   Function: FUN_004756e0
   Address: 004756e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_004756e0(uchar *param_1)

{
  int iVar1;
  uchar *_Dest;
  
  if (param_1 == (uchar *)0x0) {
    return (uchar *)0x0;
  }
  iVar1 = lstrlenA((LPCSTR)param_1);
  _Dest = calloc(1,iVar1 + 1);
  _mbscpy(_Dest,param_1);
  return _Dest;
}



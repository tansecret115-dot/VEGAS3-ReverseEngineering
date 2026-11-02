/* Module: g2plug.dll
   Function: FUN_5f8348e0
   Address: 5f8348e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_5f8348e0(uchar *param_1)

{
  int iVar1;
  uchar *_Dest;
  
  iVar1 = lstrlenA((LPCSTR)param_1);
  _Dest = calloc(1,iVar1 + 1);
  _mbscpy(_Dest,param_1);
  return _Dest;
}



/* Module: wmfplug2.dll
   Function: FUN_0043dc30
   Address: 0043dc30
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_0043dc30(uchar *param_1)

{
  int iVar1;
  uchar *_Dest;
  
  iVar1 = lstrlenA((LPCSTR)param_1);
  _Dest = calloc(1,iVar1 + 1);
  _mbscpy(_Dest,param_1);
  return _Dest;
}



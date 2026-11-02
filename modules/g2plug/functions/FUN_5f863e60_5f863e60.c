/* Module: g2plug.dll
   Function: FUN_5f863e60
   Address: 5f863e60
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_5f863e60(uchar *param_1)

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



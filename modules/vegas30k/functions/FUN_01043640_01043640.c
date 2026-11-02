/* Module: vegas30k.dll
   Function: FUN_01043640
   Address: 01043640
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_01043640(uchar *param_1)

{
  int iVar1;
  uchar *_Dest;
  
  iVar1 = lstrlenA((LPCSTR)param_1);
  _Dest = calloc(1,iVar1 + 1);
  _mbscpy(_Dest,param_1);
  return _Dest;
}



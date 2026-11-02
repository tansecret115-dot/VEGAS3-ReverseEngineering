/* Module: vidcap30.exe
   Function: FUN_004cfd70
   Address: 004cfd70
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * FUN_004cfd70(uchar *param_1)

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



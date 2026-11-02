/* Module: sfpublish.dll
   Function: FUN_00420370
   Address: 00420370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420370(uchar *param_1,undefined4 *param_2)

{
  int iVar1;
  HGLOBAL hMem;
  uchar *_Dest;
  
  *param_2 = 0;
  if (param_1 != (uchar *)0x0) {
    iVar1 = lstrlenA((LPCSTR)param_1);
    hMem = GlobalAlloc(0x40,iVar1 + 1);
    _Dest = GlobalLock(hMem);
    *param_2 = _Dest;
    if (_Dest == (uchar *)0x0) {
      return 0x8007000e;
    }
    _mbscpy(_Dest,param_1);
  }
  return 0;
}



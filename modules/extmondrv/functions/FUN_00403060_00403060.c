/* Module: extmondrv.dll
   Function: FUN_00403060
   Address: 00403060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403060(int param_1,undefined4 *param_2)

{
  wchar_t *_Dest;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  _Dest = CoTaskMemAlloc(0x100);
  *param_2 = _Dest;
  if (_Dest == (wchar_t *)0x0) {
    return 0x8007000e;
  }
  wcscpy(_Dest,(wchar_t *)(param_1 + 0xcc));
  return 0;
}



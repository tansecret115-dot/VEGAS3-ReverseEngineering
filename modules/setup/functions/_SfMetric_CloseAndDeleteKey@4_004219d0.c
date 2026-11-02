/* Module: Setup.exe
   Function: _SfMetric_CloseAndDeleteKey@4
   Address: 004219d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_CloseAndDeleteKey_4(LPCSTR param_1)

{
                    /* 0x219d0  271  _SfMetric_CloseAndDeleteKey@4 */
  if (param_1 == (LPCSTR)0x0) {
    return 0x80004005;
  }
  if (*(HKEY *)(param_1 + 0x20c) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)(param_1 + 0x20c));
  }
  if (*(HKEY *)(param_1 + 0x104) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)(param_1 + 0x104));
  }
  if (param_1 + 0x108 != (LPCSTR)0x0) {
    _SfRegDeleteKey_8((HKEY)0x80000001,param_1 + 0x108);
  }
  _SfRegDeleteKey_8((HKEY)0x80000002,param_1);
  free(param_1);
  return 0;
}



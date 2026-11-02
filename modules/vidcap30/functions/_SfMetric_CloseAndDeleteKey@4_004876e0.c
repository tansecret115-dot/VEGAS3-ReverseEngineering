/* Module: vidcap30.exe
   Function: _SfMetric_CloseAndDeleteKey@4
   Address: 004876e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_CloseAndDeleteKey_4(void *param_1)

{
                    /* 0x876e0  542  _SfMetric_CloseAndDeleteKey@4 */
  if (param_1 == (void *)0x0) {
    return 0x80004005;
  }
  if (*(HKEY *)((int)param_1 + 0x20c) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)param_1 + 0x20c));
  }
  if (*(HKEY *)((int)param_1 + 0x104) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)param_1 + 0x104));
  }
  if ((int)param_1 + 0x108 != 0) {
    _SfRegDeleteKey_8(0x80000001,(int)param_1 + 0x108);
  }
  _SfRegDeleteKey_8(0x80000002,param_1);
  free(param_1);
  return 0;
}



/* Module: Setup.exe
   Function: _SfMetric_Close@4
   Address: 004217d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_Close_4(void *param_1)

{
                    /* 0x217d0  270  _SfMetric_Close@4 */
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (*(HKEY *)((int)param_1 + 0x20c) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)param_1 + 0x20c));
  }
  if (*(HKEY *)((int)param_1 + 0x104) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)((int)param_1 + 0x104));
  }
  free(param_1);
  return 0;
}



/* Module: vegas30k.dll
   Function: _SfMetric_Close@4
   Address: 01055890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_Close_4(void *param_1)

{
                    /* 0x55890  1114  _SfMetric_Close@4 */
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



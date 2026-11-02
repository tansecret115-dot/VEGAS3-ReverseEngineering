/* Module: vegas30k.dll
   Function: _SfIsAllMonitorsHighColor@0
   Address: 01055f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsAllMonitorsHighColor_0(void)

{
                    /* 0x55f90  1029  _SfIsAllMonitorsHighColor@0 */
  if (DAT_0120e86c == 0) {
    DAT_0120e86c = 1;
    DAT_0120e5ac = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_01055ed0,&DAT_0120e5ac);
  }
  return DAT_0120e5ac;
}



/* Module: vidcap30.exe
   Function: _SfIsAllMonitorsHighColor@0
   Address: 0049d230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsAllMonitorsHighColor_0(void)

{
                    /* 0x9d230  466  _SfIsAllMonitorsHighColor@0 */
  if (DAT_005c197c == 0) {
    DAT_005c197c = 1;
    DAT_005c16bc = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_0049d170,&DAT_005c16bc);
  }
  return DAT_005c16bc;
}



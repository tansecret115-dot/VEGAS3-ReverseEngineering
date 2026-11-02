/* Module: Setup.exe
   Function: _SfIsAllMonitorsHighColor@0
   Address: 00403e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsAllMonitorsHighColor_0(void)

{
                    /* 0x3e80  196  _SfIsAllMonitorsHighColor@0 */
  if (DAT_004490a4 == 0) {
    DAT_004490a4 = 1;
    DAT_00448de4 = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_00403dc0,&DAT_00448de4);
  }
  return DAT_00448de4;
}



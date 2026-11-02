/* Module: Setup.exe
   Function: _SfIsWindowCaptionVisible@4
   Address: 0041b660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsWindowCaptionVisible_4(undefined4 *param_1)

{
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
                    /* 0x1b660  203  _SfIsWindowCaptionVisible@4 */
  local_1c = 0;
  local_18 = GetSystemMetrics(0x33);
  local_10 = *param_1;
  local_8 = param_1[2];
  local_c = param_1[1];
  local_4 = local_c + local_18;
  local_18 = local_18 >> 1;
  if (local_18 < 3) {
    local_18 = 3;
  }
  local_14 = local_18;
  _SfMonitor_EnumDisplayMonitors_16(0,&local_10,&LAB_0041b620,&local_1c);
  return local_1c;
}



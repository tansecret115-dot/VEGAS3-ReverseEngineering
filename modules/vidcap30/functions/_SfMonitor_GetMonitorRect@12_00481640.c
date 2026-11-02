/* Module: vidcap30.exe
   Function: _SfMonitor_GetMonitorRect@12
   Address: 00481640
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_GetMonitorRect_12(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_8;
  int iStack_4;
  
                    /* 0x81640  557  _SfMonitor_GetMonitorRect@12 */
  local_28 = 0x28;
  uVar1 = (*DAT_005c1964)();
  (*DAT_005c1958)(uVar1);
  if (iStack_4 != 0) {
    *puStack_8 = uStack_24;
    puStack_8[1] = uStack_20;
    puStack_8[2] = uStack_1c;
    puStack_8[3] = uStack_18;
    return;
  }
  *puStack_8 = param_1;
  puStack_8[1] = 2;
  puStack_8[2] = &local_28;
  puStack_8[3] = local_28;
  return;
}



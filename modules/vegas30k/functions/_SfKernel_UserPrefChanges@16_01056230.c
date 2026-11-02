/* Module: vegas30k.dll
   Function: _SfKernel_UserPrefChanges@16
   Address: 01056230
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfKernel_UserPrefChanges_16(undefined4 param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  
                    /* 0x56230  1041  _SfKernel_UserPrefChanges@16 */
  if (param_2 == 0x15) {
    DAT_0120e868 = 1;
    pHVar1 = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(pHVar1,0xc);
    DAT_0120e5a8 = (uint)(0xf < iVar2);
    ReleaseDC((HWND)0x0,pHVar1);
    DAT_0120e86c = 1;
    DAT_0120e5ac = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_01055ed0,&DAT_0120e5ac);
    FUN_010fb5b0(0);
    FUN_010fb5b0(1);
  }
  else if (param_2 == 0x7e) {
    DAT_0120e868 = 1;
    pHVar1 = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(pHVar1,0xc);
    DAT_0120e5a8 = (uint)(0xf < iVar2);
    ReleaseDC((HWND)0x0,pHVar1);
    DAT_0120e86c = 1;
    DAT_0120e5ac = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_01055ed0,&DAT_0120e5ac);
    return;
  }
  return;
}



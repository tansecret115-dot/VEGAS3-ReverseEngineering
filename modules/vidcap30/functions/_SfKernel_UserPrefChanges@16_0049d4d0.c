/* Module: vidcap30.exe
   Function: _SfKernel_UserPrefChanges@16
   Address: 0049d4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfKernel_UserPrefChanges_16(undefined4 param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  
                    /* 0x9d4d0  475  _SfKernel_UserPrefChanges@16 */
  if (param_2 == 0x15) {
    DAT_005c1978 = 1;
    pHVar1 = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(pHVar1,0xc);
    DAT_005c16b8 = (uint)(0xf < iVar2);
    ReleaseDC((HWND)0x0,pHVar1);
    DAT_005c197c = 1;
    DAT_005c16bc = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_0049d170,&DAT_005c16bc);
    FUN_0047d760(0);
    FUN_0047d760(1);
  }
  else if (param_2 == 0x7e) {
    DAT_005c1978 = 1;
    pHVar1 = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(pHVar1,0xc);
    DAT_005c16b8 = (uint)(0xf < iVar2);
    ReleaseDC((HWND)0x0,pHVar1);
    DAT_005c197c = 1;
    DAT_005c16bc = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_0049d170,&DAT_005c16bc);
    return;
  }
  return;
}



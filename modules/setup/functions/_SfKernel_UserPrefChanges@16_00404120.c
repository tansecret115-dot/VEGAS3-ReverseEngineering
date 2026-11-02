/* Module: Setup.exe
   Function: _SfKernel_UserPrefChanges@16
   Address: 00404120
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfKernel_UserPrefChanges_16(undefined4 param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  
                    /* 0x4120  205  _SfKernel_UserPrefChanges@16 */
  if (param_2 == 0x15) {
    DAT_004490a0 = 1;
    pHVar1 = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(pHVar1,0xc);
    DAT_00448de0 = (uint)(0xf < iVar2);
    ReleaseDC((HWND)0x0,pHVar1);
    DAT_004490a4 = 1;
    DAT_00448de4 = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_00403dc0,&DAT_00448de4);
    FUN_00414dc0(0);
    FUN_00414dc0(1);
  }
  else if (param_2 == 0x7e) {
    DAT_004490a0 = 1;
    pHVar1 = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(pHVar1,0xc);
    DAT_00448de0 = (uint)(0xf < iVar2);
    ReleaseDC((HWND)0x0,pHVar1);
    DAT_004490a4 = 1;
    DAT_00448de4 = 1;
    _SfMonitor_EnumDisplayMonitors_16(0,0,&LAB_00403dc0,&DAT_00448de4);
    return;
  }
  return;
}



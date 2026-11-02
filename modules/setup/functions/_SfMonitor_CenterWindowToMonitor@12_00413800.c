/* Module: Setup.exe
   Function: _SfMonitor_CenterWindowToMonitor@12
   Address: 00413800
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_CenterWindowToMonitor_12(undefined4 param_1,HWND param_2)

{
  tagRECT local_10;
  
                    /* 0x13800  281  _SfMonitor_CenterWindowToMonitor@12 */
  GetWindowRect(param_2,&local_10);
  _SfMonitor_CenterRectToMonitor_12(param_1,&local_10.left);
  SetWindowPos(param_2,(HWND)0x0,local_10.left,local_10.top,0,0,0x15);
  return;
}



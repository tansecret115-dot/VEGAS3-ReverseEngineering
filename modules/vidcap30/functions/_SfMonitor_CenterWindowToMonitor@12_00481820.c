/* Module: vidcap30.exe
   Function: _SfMonitor_CenterWindowToMonitor@12
   Address: 00481820
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_CenterWindowToMonitor_12(undefined4 param_1,HWND param_2,undefined4 param_3)

{
  tagRECT local_10;
  
                    /* 0x81820  552  _SfMonitor_CenterWindowToMonitor@12 */
  GetWindowRect(param_2,&local_10);
  _SfMonitor_CenterRectToMonitor_12(param_1,&local_10,param_3);
  SetWindowPos(param_2,(HWND)0x0,local_10.left,local_10.top,0,0,0x15);
  return;
}



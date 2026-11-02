/* Module: vegas30k.dll
   Function: _SfMonitor_ClipWindowToMonitor@12
   Address: 010fe9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_ClipWindowToMonitor_12(undefined4 param_1,HWND param_2,undefined4 param_3)

{
  tagRECT local_10;
  
                    /* 0xfe9f0  1127  _SfMonitor_ClipWindowToMonitor@12 */
  GetWindowRect(param_2,&local_10);
  _SfMonitor_ClipRectToMonitor_12(param_1,&local_10,param_3);
  SetWindowPos(param_2,(HWND)0x0,local_10.left,local_10.top,0,0,0x15);
  return;
}



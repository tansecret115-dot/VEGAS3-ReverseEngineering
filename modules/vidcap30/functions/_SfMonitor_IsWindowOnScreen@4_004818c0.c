/* Module: vidcap30.exe
   Function: _SfMonitor_IsWindowOnScreen@4
   Address: 004818c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_IsWindowOnScreen_4(HWND param_1)

{
  tagRECT local_10;
  
                    /* 0x818c0  560  _SfMonitor_IsWindowOnScreen@4 */
  GetWindowRect(param_1,&local_10);
  _SfMonitor_IsRectOnScreen_4(&local_10);
  return;
}



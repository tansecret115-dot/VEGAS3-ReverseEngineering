/* Module: Setup.exe
   Function: _SfMonitor_IsWindowOnScreen@4
   Address: 004138a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_IsWindowOnScreen_4(HWND param_1)

{
  tagRECT local_10;
  
                    /* 0x138a0  289  _SfMonitor_IsWindowOnScreen@4 */
  GetWindowRect(param_1,&local_10);
  _SfMonitor_IsRectOnScreen_4(&local_10);
  return;
}



/* Module: vegas30k.dll
   Function: _SfMonitor_IsWindowOnScreen@4
   Address: 010fea40
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_IsWindowOnScreen_4(HWND param_1)

{
  tagRECT local_10;
  
                    /* 0xfea40  1133  _SfMonitor_IsWindowOnScreen@4 */
  GetWindowRect(param_1,&local_10);
  _SfMonitor_IsRectOnScreen_4(&local_10);
  return;
}



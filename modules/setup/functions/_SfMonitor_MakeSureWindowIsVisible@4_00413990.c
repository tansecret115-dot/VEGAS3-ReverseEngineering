/* Module: Setup.exe
   Function: _SfMonitor_MakeSureWindowIsVisible@4
   Address: 00413990
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_MakeSureWindowIsVisible_4(HWND param_1)

{
  int iVar1;
  
                    /* 0x13990  290  _SfMonitor_MakeSureWindowIsVisible@4 */
  iVar1 = _SfMonitor_IsWindowOnScreen_4(param_1);
  if (iVar1 == 0) {
    _SfMonitor_ClipWindowToMonitor_12((int)param_1,param_1,1);
  }
  return;
}



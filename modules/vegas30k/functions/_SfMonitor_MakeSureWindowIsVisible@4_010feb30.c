/* Module: vegas30k.dll
   Function: _SfMonitor_MakeSureWindowIsVisible@4
   Address: 010feb30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMonitor_MakeSureWindowIsVisible_4(undefined4 param_1)

{
  int iVar1;
  
                    /* 0xfeb30  1134  _SfMonitor_MakeSureWindowIsVisible@4 */
  iVar1 = _SfMonitor_IsWindowOnScreen_4(param_1);
  if (iVar1 == 0) {
    _SfMonitor_ClipWindowToMonitor_12(param_1,param_1,1);
  }
  return;
}



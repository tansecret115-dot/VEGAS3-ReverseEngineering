/* Module: Setup.exe
   Function: _SfMsgBoxSetNoUIHook@4
   Address: 004078a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetNoUIHook_4(undefined4 param_1)

{
  DWORD DVar1;
  
                    /* 0x78a0  298  _SfMsgBoxSetNoUIHook@4 */
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_00448e04) {
    return 0;
  }
  DAT_00448e10 = &LAB_00407690;
  DAT_00448e14 = param_1;
  return 1;
}



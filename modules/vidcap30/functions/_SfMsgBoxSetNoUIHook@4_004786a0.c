/* Module: vidcap30.exe
   Function: _SfMsgBoxSetNoUIHook@4
   Address: 004786a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetNoUIHook_4(undefined4 param_1)

{
  DWORD DVar1;
  
                    /* 0x786a0  569  _SfMsgBoxSetNoUIHook@4 */
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_005c16dc) {
    return 0;
  }
  DAT_005c16e8 = &LAB_00478490;
  DAT_005c16ec = param_1;
  return 1;
}



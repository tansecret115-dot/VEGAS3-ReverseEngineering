/* Module: vegas30k.dll
   Function: _SfMsgBoxSetHook@8
   Address: 01058b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetHook_8(undefined4 param_1,undefined4 param_2)

{
  DWORD DVar1;
  
                    /* 0x58b40  1141  _SfMsgBoxSetHook@8 */
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_0120e5cc) {
    return 0;
  }
  DAT_0120e5d8 = param_1;
  DAT_0120e5dc = param_2;
  return 1;
}



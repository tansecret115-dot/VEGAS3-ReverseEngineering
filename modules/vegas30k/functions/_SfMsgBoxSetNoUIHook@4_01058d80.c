/* Module: vegas30k.dll
   Function: _SfMsgBoxSetNoUIHook@4
   Address: 01058d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetNoUIHook_4(undefined4 param_1)

{
  DWORD DVar1;
  
                    /* 0x58d80  1142  _SfMsgBoxSetNoUIHook@4 */
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_0120e5cc) {
    return 0;
  }
  DAT_0120e5d8 = &LAB_01058b70;
  DAT_0120e5dc = param_1;
  return 1;
}



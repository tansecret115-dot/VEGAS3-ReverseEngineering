/* Module: vidcap30.exe
   Function: _SfMsgBoxSetHook@8
   Address: 00478460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetHook_8(undefined4 param_1,undefined4 param_2)

{
  DWORD DVar1;
  
                    /* 0x78460  568  _SfMsgBoxSetHook@8 */
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_005c16dc) {
    return 0;
  }
  DAT_005c16e8 = param_1;
  DAT_005c16ec = param_2;
  return 1;
}



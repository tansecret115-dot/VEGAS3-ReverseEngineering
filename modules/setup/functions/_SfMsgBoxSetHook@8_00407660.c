/* Module: Setup.exe
   Function: _SfMsgBoxSetHook@8
   Address: 00407660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMsgBoxSetHook_8(undefined4 param_1,undefined4 param_2)

{
  DWORD DVar1;
  
                    /* 0x7660  297  _SfMsgBoxSetHook@8 */
  DVar1 = GetCurrentThreadId();
  if (DVar1 != DAT_00448e04) {
    return 0;
  }
  DAT_00448e10 = param_1;
  DAT_00448e14 = param_2;
  return 1;
}



/* Module: vegas30k.dll
   Function: _SfIsWin95@0
   Address: 01055b00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfIsWin95_0(void)

{
  _OSVERSIONINFOA local_94;
  
                    /* 0x55b00  1035  _SfIsWin95@0 */
  if (DAT_0120e860 == 0) {
    DAT_0120e860 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_0120e5a0 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_0120e5a0;
}



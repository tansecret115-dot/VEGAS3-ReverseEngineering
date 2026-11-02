/* Module: Setup.exe
   Function: _SfIsWin95@0
   Address: 004039f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfIsWin95_0(void)

{
  _OSVERSIONINFOA local_94;
  
                    /* 0x39f0  202  _SfIsWin95@0 */
  if (DAT_00449098 == 0) {
    DAT_00449098 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00448dd8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00448dd8;
}



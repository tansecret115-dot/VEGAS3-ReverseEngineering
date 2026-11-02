/* Module: vidcap30.exe
   Function: _SfIsWin95@0
   Address: 0049cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint _SfIsWin95_0(void)

{
  _OSVERSIONINFOA local_94;
  
                    /* 0x9cda0  472  _SfIsWin95@0 */
  if (DAT_005c1970 == 0) {
    DAT_005c1970 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_005c16b0 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_005c16b0;
}



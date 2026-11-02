/* Module: mcplug.dll
   Function: FUN_0041a970
   Address: 0041a970
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0041a970(DWORD param_1,uint param_2,uint param_3,uint param_4)

{
  size_t sVar1;
  int iVar2;
  _OSVERSIONINFOA *p_Var3;
  uint local_98;
  _OSVERSIONINFOA local_94;
  
  p_Var3 = &local_94;
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOA *)&p_Var3->dwMajorVersion;
  }
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  if (local_94.dwPlatformId == param_1) {
    if (param_2 < local_94.dwMajorVersion) {
      return true;
    }
    if (local_94.dwMajorVersion == param_2) {
      if (param_3 < local_94.dwMinorVersion) {
        return true;
      }
      if (local_94.dwMinorVersion == param_3) {
        local_98 = 0;
        sVar1 = _mbslen((uchar *)local_94.szCSDVersion);
        if (sVar1 != 0) {
          sscanf(local_94.szCSDVersion,"Service Pack %d",&local_98);
        }
        return (bool)('\x01' - (local_98 < (param_4 & 0xffff)));
      }
    }
  }
  return false;
}



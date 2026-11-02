/* Module: vegas30k.dll
   Function: _SfGetOS@8
   Address: 01055b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfGetOS_8(LPSTR param_1,int param_2)

{
  char *lpString2;
  _OSVERSIONINFOA local_94;
  
                    /* 0x55b50  970  _SfGetOS@8 */
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  if (local_94.dwPlatformId == 1) {
    if (local_94.dwMajorVersion < 4) {
      lpString2 = "Windows 95";
    }
    else {
      if (local_94.dwMinorVersion < 0x5a) {
        if (local_94.dwMinorVersion != 0) {
          if (local_94.szCSDVersion[1] == 'A') {
            lstrcpynA(param_1,"Windows 98 SE",param_2);
            param_1[param_2 + -1] = '\0';
            return 1;
          }
          lstrcpynA(param_1,"Windows 98",param_2);
          param_1[param_2 + -1] = '\0';
          return 1;
        }
        if (local_94.dwMajorVersion != 4) {
          return 1;
        }
        lstrcpynA(param_1,"Windows 95",param_2);
        param_1[param_2 + -1] = '\0';
        return 1;
      }
      lpString2 = "Windows Me";
    }
  }
  else {
    if (local_94.dwPlatformId != 2) {
      lstrcpynA(param_1,"Unknown",param_2);
      param_1[param_2 + -1] = '\0';
      return 0;
    }
    if (4 < local_94.dwMajorVersion) {
      if (local_94.dwMinorVersion != 0) {
        lstrcpynA(param_1,"Windows XP",param_2);
        param_1[param_2 + -1] = '\0';
        return 1;
      }
      lstrcpynA(param_1,"Windows 2000",param_2);
      param_1[param_2 + -1] = '\0';
      return 1;
    }
    lpString2 = "Windows NT";
  }
  lstrcpynA(param_1,lpString2,param_2);
  param_1[param_2 + -1] = '\0';
  return 1;
}



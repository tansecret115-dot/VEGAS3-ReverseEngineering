/* Module: sfmarket2.dll
   Function: FUN_0043c4d0
   Address: 0043c4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043c4d0(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("advapi32.dll");
  FUN_0043c480();
  if (hModule != (HMODULE)0x0) {
    DAT_004ab19c = GetProcAddress(hModule,"AccessCheck");
    if (DAT_004ab19c != (FARPROC)0x0) {
      DAT_004ab1a0 = GetProcAddress(hModule,"AddAccessAllowedAce");
      if (DAT_004ab1a0 != (FARPROC)0x0) {
        DAT_004ab1a4 = GetProcAddress(hModule,"AllocateAndInitializeSid");
        if (DAT_004ab1a4 != (FARPROC)0x0) {
          DAT_004ab1a8 = GetProcAddress(hModule,"FreeSid");
          if (DAT_004ab1a8 != (FARPROC)0x0) {
            DAT_004ab1ac = GetProcAddress(hModule,"GetLengthSid");
            if (DAT_004ab1ac != (FARPROC)0x0) {
              DAT_004ab1b0 = GetProcAddress(hModule,"ImpersonateSelf");
              if (DAT_004ab1b0 != (FARPROC)0x0) {
                DAT_004ab1b4 = GetProcAddress(hModule,"InitializeAcl");
                if (DAT_004ab1b4 != (FARPROC)0x0) {
                  DAT_004ab1b8 = GetProcAddress(hModule,"InitializeSecurityDescriptor");
                  if (DAT_004ab1b8 != (FARPROC)0x0) {
                    DAT_004ab1bc = GetProcAddress(hModule,"IsValidSecurityDescriptor");
                    if (DAT_004ab1bc != (FARPROC)0x0) {
                      DAT_004ab1c0 = GetProcAddress(hModule,"OpenThreadToken");
                      if (DAT_004ab1c0 != (FARPROC)0x0) {
                        DAT_004ab1c4 = GetProcAddress(hModule,"RevertToSelf");
                        if (DAT_004ab1c4 != (FARPROC)0x0) {
                          DAT_004ab1c8 = GetProcAddress(hModule,"SetSecurityDescriptorGroup");
                          if (DAT_004ab1c8 != (FARPROC)0x0) {
                            DAT_004ab1cc = GetProcAddress(hModule,"SetSecurityDescriptorOwner");
                            if (DAT_004ab1cc != (FARPROC)0x0) {
                              DAT_004ab1d0 = GetProcAddress(hModule,"SetSecurityDescriptorDacl");
                              if (DAT_004ab1d0 != (FARPROC)0x0) {
                                _DAT_004ab1d4 = GetProcAddress(hModule,"OpenProcessToken");
                                return (-(uint)(_DAT_004ab1d4 != (FARPROC)0x0) & 0x7fffbffb) +
                                       0x80004005;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return -0x7fffbffb;
}



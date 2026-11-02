/* Module: vegas30k.dll
   Function: FUN_01003820
   Address: 01003820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01003820(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("advapi32.dll");
  FUN_010037d0();
  if (hModule != (HMODULE)0x0) {
    DAT_01209150 = GetProcAddress(hModule,"AccessCheck");
    if (DAT_01209150 != (FARPROC)0x0) {
      DAT_01209154 = GetProcAddress(hModule,"AddAccessAllowedAce");
      if (DAT_01209154 != (FARPROC)0x0) {
        DAT_01209158 = GetProcAddress(hModule,"AllocateAndInitializeSid");
        if (DAT_01209158 != (FARPROC)0x0) {
          DAT_0120915c = GetProcAddress(hModule,"FreeSid");
          if (DAT_0120915c != (FARPROC)0x0) {
            DAT_01209160 = GetProcAddress(hModule,"GetLengthSid");
            if (DAT_01209160 != (FARPROC)0x0) {
              DAT_01209164 = GetProcAddress(hModule,"ImpersonateSelf");
              if (DAT_01209164 != (FARPROC)0x0) {
                DAT_01209168 = GetProcAddress(hModule,"InitializeAcl");
                if (DAT_01209168 != (FARPROC)0x0) {
                  DAT_0120916c = GetProcAddress(hModule,"InitializeSecurityDescriptor");
                  if (DAT_0120916c != (FARPROC)0x0) {
                    DAT_01209170 = GetProcAddress(hModule,"IsValidSecurityDescriptor");
                    if (DAT_01209170 != (FARPROC)0x0) {
                      DAT_01209174 = GetProcAddress(hModule,"OpenThreadToken");
                      if (DAT_01209174 != (FARPROC)0x0) {
                        DAT_01209178 = GetProcAddress(hModule,"RevertToSelf");
                        if (DAT_01209178 != (FARPROC)0x0) {
                          DAT_0120917c = GetProcAddress(hModule,"SetSecurityDescriptorGroup");
                          if (DAT_0120917c != (FARPROC)0x0) {
                            DAT_01209180 = GetProcAddress(hModule,"SetSecurityDescriptorOwner");
                            if (DAT_01209180 != (FARPROC)0x0) {
                              DAT_01209184 = GetProcAddress(hModule,"SetSecurityDescriptorDacl");
                              if (DAT_01209184 != (FARPROC)0x0) {
                                _DAT_01209188 = GetProcAddress(hModule,"OpenProcessToken");
                                return (-(uint)(_DAT_01209188 != (FARPROC)0x0) & 0x7fffbffb) +
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



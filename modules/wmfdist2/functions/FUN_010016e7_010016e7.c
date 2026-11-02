/* Module: wmfdist2.exe
   Function: FUN_010016e7
   Address: 010016e7
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010016e7(void)

{
  int iVar1;
  HANDLE ProcessHandle;
  BOOL BVar2;
  uint *TokenInformation;
  uint *puVar3;
  DWORD DVar4;
  HANDLE *TokenHandle;
  _SID_IDENTIFIER_AUTHORITY local_20;
  PSID local_18;
  HANDLE local_14;
  uint local_10;
  SIZE_T local_c;
  int local_8;
  
  TokenInformation = (uint *)0x0;
  local_20.Value[0] = '\0';
  local_20.Value[1] = '\0';
  local_20.Value[2] = '\0';
  local_20.Value[3] = '\0';
  local_20.Value[4] = '\0';
  local_20.Value[5] = '\x05';
  local_8 = 0;
  iVar1 = DAT_0100a21c;
  if (DAT_0100a21c == 2) {
    iVar1 = FUN_01001652(&local_8);
    if (iVar1 == 0) {
      TokenHandle = &local_14;
      DVar4 = 8;
      ProcessHandle = GetCurrentProcess();
      BVar2 = OpenProcessToken(ProcessHandle,DVar4,TokenHandle);
      iVar1 = 0;
      if (BVar2 != 0) {
        BVar2 = GetTokenInformation(local_14,TokenGroups,(LPVOID)0x0,0,&local_c);
        if ((BVar2 == 0) && (DVar4 = GetLastError(), DVar4 == 0x7a)) {
          TokenInformation = LocalAlloc(0,local_c);
        }
        if (TokenInformation != (uint *)0x0) {
          BVar2 = GetTokenInformation(local_14,TokenGroups,TokenInformation,local_c,&local_c);
          if ((BVar2 != 0) &&
             (BVar2 = AllocateAndInitializeSid(&local_20,'\x02',0x20,0x220,0,0,0,0,0,0,&local_18),
             BVar2 != 0)) {
            local_10 = 0;
            if (*TokenInformation != 0) {
              puVar3 = TokenInformation + 1;
              do {
                BVar2 = EqualSid((PSID)*puVar3,local_18);
                if (BVar2 != 0) {
                  DAT_0100a21c = 1;
                  local_8 = 1;
                  break;
                }
                local_10 = local_10 + 1;
                puVar3 = puVar3 + 2;
              } while (local_10 < *TokenInformation);
            }
            FreeSid(local_18);
          }
          if (TokenInformation != (uint *)0x0) {
            LocalFree(TokenInformation);
          }
        }
        CloseHandle(local_14);
        iVar1 = local_8;
      }
    }
    else {
      iVar1 = local_8;
      if (local_8 != 0) {
        DAT_0100a21c = 1;
      }
    }
  }
  return iVar1;
}



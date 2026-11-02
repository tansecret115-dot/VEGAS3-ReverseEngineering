/* Module: 50comupd.exe
   Function: FUN_010015e2
   Address: 010015e2
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010015e2(void)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  int iVar2;
  uint *TokenInformation;
  uint *puVar3;
  DWORD DVar4;
  HANDLE *TokenHandle;
  _SID_IDENTIFIER_AUTHORITY local_20;
  int local_18;
  PSID local_14;
  HANDLE local_10;
  uint local_c;
  SIZE_T local_8;
  
  TokenInformation = (uint *)0x0;
  local_20.Value[0] = '\0';
  local_20.Value[1] = '\0';
  local_20.Value[2] = '\0';
  local_20.Value[3] = '\0';
  local_20.Value[4] = '\0';
  local_20.Value[5] = '\x05';
  local_18 = 0;
  iVar2 = DAT_0100a21c;
  if (DAT_0100a21c == 2) {
    TokenHandle = &local_10;
    DVar4 = 8;
    ProcessHandle = GetCurrentProcess();
    BVar1 = OpenProcessToken(ProcessHandle,DVar4,TokenHandle);
    iVar2 = 0;
    if (BVar1 != 0) {
      BVar1 = GetTokenInformation(local_10,TokenGroups,(LPVOID)0x0,0,&local_8);
      if ((BVar1 == 0) && (DVar4 = GetLastError(), DVar4 == 0x7a)) {
        TokenInformation = LocalAlloc(0,local_8);
      }
      if (((TokenInformation != (uint *)0x0) &&
          (BVar1 = GetTokenInformation(local_10,TokenGroups,TokenInformation,local_8,&local_8),
          BVar1 != 0)) &&
         (BVar1 = AllocateAndInitializeSid(&local_20,'\x02',0x20,0x220,0,0,0,0,0,0,&local_14),
         BVar1 != 0)) {
        local_c = 0;
        if (*TokenInformation != 0) {
          puVar3 = TokenInformation + 1;
          do {
            BVar1 = EqualSid((PSID)*puVar3,local_14);
            if (BVar1 != 0) {
              DAT_0100a21c = 1;
              local_18 = 1;
              break;
            }
            local_c = local_c + 1;
            puVar3 = puVar3 + 2;
          } while (local_c < *TokenInformation);
        }
        FreeSid(local_14);
      }
      CloseHandle(local_10);
      iVar2 = local_18;
      if (TokenInformation != (uint *)0x0) {
        LocalFree(TokenInformation);
        iVar2 = local_18;
      }
    }
  }
  return iVar2;
}



/* Module: InstMsi-x86w.exe
   Function: FUN_01001b68
   Address: 01001b68
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01001b68(void)

{
  HANDLE ProcessHandle;
  BOOL BVar1;
  UINT UVar2;
  DWORD DesiredAccess;
  HANDLE *TokenHandle;
  _TOKEN_PRIVILEGES local_18;
  HANDLE local_8;
  
  TokenHandle = &local_8;
  DesiredAccess = 0x28;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  if (BVar1 == 0) {
    UVar2 = 0x4f5;
  }
  else {
    LookupPrivilegeValueA((LPCSTR)0x0,"SeShutdownPrivilege",&local_18.Privileges[0].Luid);
    local_18.PrivilegeCount = 1;
    local_18.Privileges[0].Attributes = 2;
    BVar1 = AdjustTokenPrivileges(local_8,0,&local_18,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    if (BVar1 == 0) {
      UVar2 = 0x4f6;
    }
    else {
      BVar1 = ExitWindowsEx(2,0);
      if (BVar1 != 0) {
        return 1;
      }
      UVar2 = 0x4f7;
    }
  }
  FUN_01003cb8((HWND)0x0,UVar2,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  return 0;
}



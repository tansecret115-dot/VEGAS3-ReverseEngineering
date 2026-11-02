/* Module: 50comupd.exe
   Function: FUN_01003911
   Address: 01003911
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01003911(LPSTR param_1,LPSTARTUPINFOA param_2)

{
  BOOL BVar1;
  DWORD dwMessageId;
  DWORD dwLanguageId;
  CHAR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  CHAR local_214 [512];
  _PROCESS_INFORMATION local_14;
  
  if (param_1 != (LPSTR)0x0) {
    local_14.hProcess = (HANDLE)0x0;
    local_14.hThread = (HANDLE)0x0;
    local_14.dwProcessId = 0;
    local_14.dwThreadId = 0;
    BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                           ,0,0x20,(LPVOID)0x0,(LPCSTR)0x0,param_2,&local_14);
    if (BVar1 == 0) {
      DAT_0100b704 = FUN_01005735();
      Arguments = (va_list *)0x0;
      lpBuffer = local_214;
      nSize = 0x200;
      dwLanguageId = 0;
      dwMessageId = GetLastError();
      FormatMessageA(0x1000,(LPCVOID)0x0,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
      FUN_01003ce8((HWND)0x0,0x4c4,param_1,local_214,0x10,0);
    }
    else {
      WaitForSingleObject(local_14.hProcess,0xffffffff);
      GetExitCodeProcess(local_14.hProcess,(LPDWORD)&param_2);
      if ((((DAT_0100aaa8 == 0) && (((uint)DAT_0100b6cc & 1) != 0)) &&
          (((uint)DAT_0100b6cc & 2) == 0)) && (((uint)param_2 & 0xff000000) == 0xaa000000)) {
        DAT_0100b6cc = param_2;
      }
      FUN_01003a0b((uint)param_2);
      CloseHandle(local_14.hThread);
      CloseHandle(local_14.hProcess);
      if ((DAT_0100b6d5 & 4) == 0) {
        return 1;
      }
      if (-1 < (int)param_2) {
        return 1;
      }
    }
  }
  return 0;
}



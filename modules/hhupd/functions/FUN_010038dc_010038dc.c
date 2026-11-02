/* Module: hhupd.exe
   Function: FUN_010038dc
   Address: 010038dc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010038dc(LPSTR param_1,LPSTARTUPINFOA param_2)

{
  BOOL BVar1;
  _PROCESS_INFORMATION local_14;
  
  if (param_1 != (LPSTR)0x0) {
    local_14.hProcess = (HANDLE)0x0;
    local_14.hThread = (HANDLE)0x0;
    local_14.dwProcessId = 0;
    local_14.dwThreadId = 0;
    BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                           ,0,0x20,(LPVOID)0x0,(LPCSTR)0x0,param_2,&local_14);
    if (BVar1 != 0) {
      WaitForSingleObject(local_14.hProcess,0xffffffff);
      GetExitCodeProcess(local_14.hProcess,(LPDWORD)&param_1);
      if ((((DAT_0100aaa8 == 0) && (((uint)_DAT_0100b6cc & 1) != 0)) &&
          (((uint)_DAT_0100b6cc & 2) == 0)) && (((uint)param_1 & 0xff000000) == 0xaa000000)) {
        _DAT_0100b6cc = param_1;
      }
      FUN_0100567a((uint)param_1);
      CloseHandle(local_14.hThread);
      CloseHandle(local_14.hProcess);
      return 1;
    }
    DAT_0100b704 = FUN_010056b9();
  }
  return 0;
}



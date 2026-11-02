/* Module: Setup.exe
   Function: FUN_004020d0
   Address: 004020d0
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_004020d0(LPSTR param_1)

{
  BOOL BVar1;
  int iVar2;
  _STARTUPINFOA *p_Var3;
  DWORD local_58;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  p_Var3 = &local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->cb = 0;
    p_Var3 = (_STARTUPINFOA *)&p_Var3->lpReserved;
  }
  local_58 = 0x80004005;
  local_44.cb = 0x44;
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  if (BVar1 != 0) {
    WaitForSingleObject(local_54.hProcess,0xffffffff);
    GetExitCodeProcess(local_54.hProcess,&local_58);
    CloseHandle(local_54.hThread);
    CloseHandle(local_54.hProcess);
    return local_58;
  }
  return local_58;
}



/* Module: vegas30.exe
   Function: FUN_004050f0
   Address: 004050f0
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_004050f0(LPSTR param_1)

{
  BOOL BVar1;
  int iVar2;
  _STARTUPINFOA *p_Var3;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  p_Var3 = &local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->cb = 0;
    p_Var3 = (_STARTUPINFOA *)&p_Var3->lpReserved;
  }
  local_44.cb = 0x44;
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0x20,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  if (BVar1 != 0) {
    WaitForInputIdle(local_54.hProcess,10000);
    CloseHandle(local_54.hProcess);
    CloseHandle(local_54.hThread);
  }
  return BVar1;
}



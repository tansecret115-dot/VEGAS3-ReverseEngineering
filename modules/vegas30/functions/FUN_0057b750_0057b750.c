/* Module: vegas30.exe
   Function: FUN_0057b750
   Address: 0057b750
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0057b750(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  int iVar4;
  code *unaff_EDI;
  undefined4 unaff_retaddr;
  int local_134;
  FARPROC local_130;
  FARPROC local_12c;
  undefined4 auStack_128 [7];
  undefined1 auStack_10c [264];
  code *pcStack_4;
  
  local_134 = 0;
  hModule = LoadLibraryA("Kernel32.DLL");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
    pFVar2 = GetProcAddress(hModule,"Process32First");
    local_130 = GetProcAddress(hModule,"Process32Next");
    local_12c = GetProcAddress(hModule,"CloseToolhelp32Snapshot");
    if ((((pFVar1 == (FARPROC)0x0) || (pFVar2 == (FARPROC)0x0)) || (local_130 == (FARPROC)0x0)) ||
       ((local_12c == (FARPROC)0x0 || (iVar3 = (*pFVar1)(2,0), iVar3 == -1)))) {
      local_134 = -0x7fffbffb;
    }
    else {
      auStack_128[0] = 0x128;
      iVar4 = (*pFVar2)(iVar3,auStack_128);
      while ((iVar4 != 0 &&
             (iVar4 = (*pcStack_4)(auStack_128[0],auStack_10c,unaff_retaddr), iVar4 != 0))) {
        iVar4 = (*unaff_EDI)(iVar3,&local_130);
      }
      (*(code *)0x0)(iVar3);
    }
    FreeLibrary(hModule);
    return -1 < local_134;
  }
  return false;
}



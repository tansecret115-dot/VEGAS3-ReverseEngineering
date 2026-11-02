/* Module: vidcap30.exe
   Function: FUN_0045ba10
   Address: 0045ba10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045ba10(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  char *lpProcName;
  
  lpProcName = "EndMenu";
  hModule = GetModuleHandleA("user32");
  pFVar1 = GetProcAddress(hModule,lpProcName);
  if (pFVar1 != (FARPROC)0x0) {
    iVar2 = (*pFVar1)();
    return iVar2;
  }
  return 0;
}



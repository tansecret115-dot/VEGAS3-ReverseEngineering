/* Module: hhupd.exe
   Function: entry
   Address: 01002723
   Source: Ghidra pseudocode (Stage 10 batch) */


void entry(void)

{
  char cVar1;
  char *pcVar2;
  HMODULE pHVar3;
  UINT uExitCode;
  char *pcVar4;
  undefined4 uVar5;
  _STARTUPINFOA local_48;
  
  pcVar2 = GetCommandLineA();
  cVar1 = *pcVar2;
  if (cVar1 == '\"') {
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
      if (pcVar4[1] == '\0') break;
    } while (pcVar4[1] != '\"');
    if (*pcVar2 == '\"') {
      pcVar2 = pcVar4 + 2;
    }
  }
  else {
    while (' ' < cVar1) {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
  }
  for (; (*pcVar2 != '\0' && (*pcVar2 < '!')); pcVar2 = pcVar2 + 1) {
  }
  local_48.dwFlags = 0;
  GetStartupInfoA(&local_48);
  uVar5 = 0;
  pHVar3 = GetModuleHandleA((LPCSTR)0x0);
  uExitCode = FUN_010027a0(pHVar3,uVar5,pcVar2);
                    /* WARNING: Subroutine does not return */
  ExitProcess(uExitCode);
}



/* Module: pncrt.dll
   Function: FUN_7801e4a0
   Address: 7801e4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_7801e4a0(void)

{
  DWORD nLength;
  BOOL BVar1;
  char *pcVar2;
  int *piVar3;
  short *psVar4;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_78040938 != -1) {
    return 1;
  }
  if (DAT_78040940 == (HANDLE)0xfffffffe) {
    FUN_7801f960();
  }
  if (DAT_78040940 != (HANDLE)0xffffffff) {
    psVar4 = (short *)&stack0xffffffec;
    BVar1 = GetNumberOfConsoleInputEvents(DAT_78040940,&local_c);
    nLength = local_c;
    if (((((BVar1 != 0) && (local_c != 0)) &&
         (FUN_78008b70(), &stack0x00000000 != (undefined1 *)0x14)) &&
        ((BVar1 = PeekConsoleInputA(DAT_78040940,(PINPUT_RECORD)&stack0xffffffec,nLength,&local_8),
         BVar1 != 0 && (local_8 != 0)))) && ((local_8 <= local_c && (local_8 != 0)))) {
      piVar3 = (int *)&stack0xfffffff0;
      while (((*psVar4 != 1 || (*piVar3 == 0)) ||
             ((*(char *)((int)piVar3 + 10) == '\0' &&
              (pcVar2 = FUN_7801e5f0((int)piVar3), pcVar2 == (char *)0x0))))) {
        local_8 = local_8 - 1;
        psVar4 = psVar4 + 10;
        piVar3 = piVar3 + 5;
        if (local_8 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



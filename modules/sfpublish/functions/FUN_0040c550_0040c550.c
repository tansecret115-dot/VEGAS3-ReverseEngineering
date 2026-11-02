/* Module: sfpublish.dll
   Function: FUN_0040c550
   Address: 0040c550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040c550(int param_1)

{
  HMODULE hModule;
  LPSTR lpFilename;
  char *pcVar1;
  DWORD nSize;
  uchar auStack_828 [2088];
  
  (**(code **)(**(int **)(param_1 + 0x54) + 0x38))(*(int **)(param_1 + 0x54));
  lpFilename = &stack0xfffff6d4;
  nSize = 0x104;
  hModule = (HMODULE)FUN_004012c0();
  GetModuleFileNameA(hModule,lpFilename,nSize);
  if (*(int *)(param_1 + 0x9c) == 0) {
    pcVar1 = "res://%s/pageloaderror.htm";
  }
  else {
    pcVar1 = "res://%s/filetoobig.htm";
  }
  FUN_00418d60(auStack_828,(BYTE *)pcVar1);
  FUN_0040bd00(*(int **)(param_1 + 0x54),(LPCSTR)auStack_828);
  return 0;
}



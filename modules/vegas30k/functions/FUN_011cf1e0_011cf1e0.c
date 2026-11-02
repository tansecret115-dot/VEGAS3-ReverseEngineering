/* Module: vegas30k.dll
   Function: FUN_011cf1e0
   Address: 011cf1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011cf1e0(int param_1)

{
  char *lpString2;
  
  if (*(int *)(param_1 + 0x2f8) == -1) {
    lpString2 = "Null Wave Mapper";
  }
  else {
    lpString2 = "Null Wave Device";
  }
  lstrcpynA((LPSTR)(param_1 + 0xc0),lpString2,0x104);
  *(undefined1 *)(param_1 + 0x1c3) = 0;
  lstrlenA((LPSTR)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x100;
  *(undefined4 *)(param_1 + 0xac) = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2fc));
  return 0;
}



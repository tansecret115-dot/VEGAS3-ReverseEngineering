/* Module: mpgmux.dll
   Function: FUN_10010211
   Address: 10010211
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10010211(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1001b540)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000e78d(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000e7ee(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1001b540)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



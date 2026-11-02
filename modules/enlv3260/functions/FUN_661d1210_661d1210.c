/* Module: enlv3260.dll
   Function: FUN_661d1210
   Address: 661d1210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d1210(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x34) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x34));
    return 0;
  }
  return 0x80040007;
}



/* Module: vidcap30.exe
   Function: FUN_00583b30
   Address: 00583b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00583b30(int param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return uVar1;
}



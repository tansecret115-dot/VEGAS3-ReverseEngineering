/* Module: vegas30k.dll
   Function: FUN_011c62e0
   Address: 011c62e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011c62e0(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) & 0xfffffff9;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  return 0;
}



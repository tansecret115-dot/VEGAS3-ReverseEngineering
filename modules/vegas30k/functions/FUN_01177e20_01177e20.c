/* Module: vegas30k.dll
   Function: FUN_01177e20
   Address: 01177e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_01177e20(int param_1)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  uVar1 = FUN_01177e50();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar1;
}



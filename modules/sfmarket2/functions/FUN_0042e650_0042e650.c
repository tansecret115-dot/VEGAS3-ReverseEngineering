/* Module: sfmarket2.dll
   Function: FUN_0042e650
   Address: 0042e650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0042e650(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x3c) = param_1;
  ResetEvent(*(HANDLE *)((int)this + 0x2c));
  SetEvent(*(HANDLE *)((int)this + 0x30));
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return;
}



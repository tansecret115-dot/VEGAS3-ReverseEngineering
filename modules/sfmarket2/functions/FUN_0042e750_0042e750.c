/* Module: sfmarket2.dll
   Function: FUN_0042e750
   Address: 0042e750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0042e750(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x28) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return;
}



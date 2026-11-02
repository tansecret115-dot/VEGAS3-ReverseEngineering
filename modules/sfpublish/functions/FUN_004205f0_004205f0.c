/* Module: sfpublish.dll
   Function: FUN_004205f0
   Address: 004205f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004205f0(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x28) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return;
}



/* Module: sfnetmedia.dll
   Function: FUN_004277c0
   Address: 004277c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004277c0(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x28) = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return;
}



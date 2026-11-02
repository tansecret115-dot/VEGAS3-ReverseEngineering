/* Module: sfnetmedia.dll
   Function: FUN_004276c0
   Address: 004276c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004276c0(void *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x3c) = param_1;
  ResetEvent(*(HANDLE *)((int)this + 0x2c));
  SetEvent(*(HANDLE *)((int)this + 0x30));
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return;
}



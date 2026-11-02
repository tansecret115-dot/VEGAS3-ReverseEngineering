/* Module: rmbe3260.dll
   Function: FUN_6603d630
   Address: 6603d630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603d630(void *this,int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  (**(code **)(*param_1 + 8))();
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
  return 0;
}



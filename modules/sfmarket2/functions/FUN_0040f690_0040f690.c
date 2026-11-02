/* Module: sfmarket2.dll
   Function: FUN_0040f690
   Address: 0040f690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0040f690(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_3;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}


